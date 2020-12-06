#if 1
/*
 * function:GECRFID模块头文件
 * date:2020.11.29
 *
*/
#ifndef GECRFID_H
#define GECRFID_H

#ifdef __cplusplus
extern "C"
{
#endif
    #include <stdio.h>
    #include <stdlib.h>
    #include <sys/time.h>
    #include <sys/types.h>
    #include <unistd.h>
    #include <termios.h>

    #include <sys/stat.h>
    #include <fcntl.h>
    #include <string.h>
#ifdef __cplusplus
}
#endif



#define USART1 "/dev/ttySAC1" //con2,其他的依次类推

/* 向下位机请求数据指令 */
int PiccRequest(int fd);

/* 初始化串口 */
int initSerailPort(int fd);

/* 读取门禁卡卡号 */
unsigned int readCardId();

/* 实现校验和的计算 */
unsigned char calBCC(unsigned char* buf,int n);

/* 防碰撞 */
unsigned int PiccAnticoll(int fd);

#endif // GECRFID_H
#endif
