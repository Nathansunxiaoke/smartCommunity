#if 1
/*
 * function:GECRFID模块
 * date:2020.11.29
 *
*/
#include "gecrfid.h"

static unsigned int idCard = 0;

/* 读取门禁卡卡号 */
unsigned int readCardId()
{
    // 打开配置上的串口
    int fd = open(USART1,O_RDWR);
    if(fd == -1)
    {
        perror("open fd");
        return -1;
    }

    // 初始化NFC连接的串口
    initSerailPort(fd);

    //[3] 根据手册的操作流程 ---- 请求 --- PiccRequest
    if(PiccRequest(fd) < 0)
    {
        printf("request failed\n");
    }
    printf("idcard %d",idCard);
    return idCard;
}

/* 初始化串口 */
int initSerailPort(int fd)
{
    //设置原有的串口参数
    struct termios old_cfg,new_cfg; //struct termios --- 串口结构体

    if(tcgetattr(fd,&old_cfg) != 0) //得到串口原有的配置，存放在old_cfg
    {
        perror("tcgetattr");
        return -2;
    }

    bzero(&new_cfg,sizeof(new_cfg));
    new_cfg = old_cfg;
    cfmakeraw(&new_cfg);

    //设置串口波特率:输入和输出
    cfsetispeed(&new_cfg,B9600); //波特率的设置要跟具体的项目来设置
    cfsetospeed(&new_cfg,B9600);

    new_cfg.c_cflag  |=  CLOCAL | CREAD; //开启本地模式

    //设置数据位8位，无奇偶校验位，停止位1位
    new_cfg.c_cflag &= ~CSIZE; /* 用数据位掩码清空数据位设置 */
    new_cfg.c_cflag |= CS8;
    new_cfg.c_cflag &= ~PARENB;
    new_cfg.c_cflag &= ~CSTOPB; /* 将停止位设置为一个比特 */

    //清空串口缓冲区
    new_cfg.c_cc[VTIME] = 0;
    new_cfg.c_cc[VMIN]   = 1;

    tcflush(fd, TCIFLUSH);

    //判断串口是否初始化完成


    if(tcsetattr(fd,TCSANOW,&new_cfg) != 0) //重新将串口配置写入
    {
        perror("tcsetattr");
        return -2;
    }

    if(PiccAnticoll(fd))
     {
         printf("PiccAnticoll failed\n");
         return -4;
     }
}

/* 向下位机请求数据指令 */
int PiccRequest(int fd)
{
    //定义两个数组----读或者写数据帧
        unsigned char WBuf[128],RBuf[128];
        int retval;
        fd_set rfds; //设置select监听多个IO，它会把这个监听的结果存放在fd_set(文件描述符集合中)
        struct timeval timeout;
        memset(WBuf,0,128);
        memset(RBuf,0,128);
        //再数组进行赋值--- 根据ISO14443A命令
        WBuf[0] = 0X07;
        WBuf[1] = 0X02;
        WBuf[2] = 'A'; //0x41
        WBuf[3] = 0X01;
        WBuf[4] = 0X52;
        WBuf[5] = calBCC(WBuf,WBuf[0]-2);
        WBuf[6] = 0X03;

        //监听串口
        FD_ZERO(&rfds);
        FD_SET(fd,&rfds);

        timeout.tv_sec = 300;
        timeout.tv_usec = 0;
        //主机向从机发起请求操作 ----- 串口写操作
        write(fd,WBuf,7);
        //从机向主机响应 ----- 串口读操作
        retval = select(fd +1,&rfds,NULL,NULL,&timeout); //默认会进入阻塞

        // 判断接收的消息
        switch(retval)
        {
            case -1:
                perror("PiccRequest");
                break;
            case 0:
                printf("time out\n");
                break;
            default:
                //监听成功，读取数据
                retval = read(fd,RBuf,8);
                if(retval < 0)
                {
                    printf("PiccRequest retval = %d\n",retval);
                }
                if(RBuf[2] == 0X00)
                {
                    printf("PiccRequest sucess\n");
                    return 0;
                }
         }
         FD_CLR(fd, &rfds);
         return -3;
}

/* 实现校验和的计算 */
unsigned char calBCC(unsigned char* buf,int n)
{
    unsigned char bcc = 0;
    int i=0;
    for(;i<n;i++)
    {
        bcc ^= *(buf +i);
    }

    return (~bcc);
}

/* 防碰撞 */
unsigned int PiccAnticoll(int fd)
{
    //定义两个数组----读或者写数据帧
    unsigned char WBuf[128],RBuf[128];
    int retval;
    fd_set rfds; //设置select监听多个IO，它会把这个监听的结果存放在fd_set(文件描述符集合中)
    struct timeval timeout;
    unsigned int ID;
    memset(WBuf,0,128);
    memset(RBuf,0,128);
    //再数组进行赋值--- 根据ISO14443A命令
    WBuf[0] = 0X08;
    WBuf[1] = 0X02;
    WBuf[2] = 'B'; //0x42
    WBuf[3] = 0X02;
    WBuf[4] = 0x93;
    WBuf[5] = 0X00;
    WBuf[6] = calBCC(WBuf,WBuf[0]-2);
    WBuf[7] = 0X03;

    //监听串口
    FD_ZERO(&rfds);
    FD_SET(fd,&rfds);

    timeout.tv_sec = 300;
    timeout.tv_usec = 0;
    //主机向从机发起请求操作 ----- 串口写操作
    write(fd,WBuf,8);
    //从机向主机响应 ----- 串口读操作

    retval = select(fd +1,&rfds,NULL,NULL,&timeout); //默认会进入阻塞
    switch(retval)
    {
        case -1:
            perror("PiccAnticoll");
            break;
        case 0:
            printf("time out\n");
            break;
        default:
             //监听成功，读取数据
             retval = read(fd,RBuf,10);
             if(retval < 0)
             {
                 printf("PiccAnticoll retval = %d\n",retval);
             }
             if(RBuf[2] == 0X00)
             {
                 //获取ID
                 idCard = RBuf[4]|(RBuf[5]<<8) | (RBuf[6]<<16) | (RBuf[7] << 24); //RBuf[7]RBuf[6]RBuf[5]RBuf[4]
                  printf("ID = %d",idCard);
                 return 0;
             }
    }
    FD_CLR(fd, &rfds);
    return -1;
}

#endif
