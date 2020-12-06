#include "ctrlbulbwindow.h"
#include "ui_ctrlbulbwindow.h"
#include <QDebug>
CtrlBulbWindow::CtrlBulbWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CtrlBulbWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("QPushButton { border-radius: 15px }");

    lampled = false;        /* 客厅 */
    bedled = false;         /* 卧室 */
    kitled = false;         /* 厨房 */
    wcled = false;          /* 厕所 */
    oneKey = false;

    ui->ctrlButton->setText("关");

    //控制灯的接口，都是由Linux系统调用接口
    fd = open("/dev/gz13_led_drv",O_WRONLY);
    if(fd == -1)
    {
         qDebug()<<"open error\n";

     }
}

CtrlBulbWindow::~CtrlBulbWindow()
{
    delete ui;
}

/* 返回用户界面 */
void CtrlBulbWindow::on_closeButton_clicked()
{
    this->close();
    emit(changeledStaus(lampled,bedled,kitled,wcled));
}

/* 客厅灯 */
void CtrlBulbWindow::on_lampButton_clicked()
{
    char user_buff[2];

    if(ui->lampButton->text() == "已关闭")
    {
        /* 灯亮 */
        lampled = true;
        ui->lampButton->setText("已打开");
        QIcon icon(":/image/icon/open.png");
        ui->lampButton->setIcon(icon);
        user_buff[0] = 1;
        user_buff[1] = 7;
        write(fd,user_buff,sizeof(user_buff));

        return ;
    }
    else {
        /* 灭 */
        lampled = false;
        ui->lampButton->setText("已关闭");
        QIcon icon(":/image/icon/close.png");
        ui->lampButton->setIcon(icon);
        qDebug()<<"close";
        user_buff[0] = 1;
        user_buff[1] = 7;
        write(fd,user_buff,sizeof(user_buff));
        return ;
    }
}

/* 卧室灯 */
void CtrlBulbWindow::on_bedroonButton_clicked()
{
    char user_buff[2];
    if(ui->bedroonButton->text() == "已关闭")
    {
        bedled = true;
        ui->bedroonButton->setText("已打开");
        QIcon icon(":/image/icon/open.png");
        ui->bedroonButton->setIcon(icon);
        user_buff[0] = 1;
        user_buff[1] = 8;
        write(fd,user_buff,sizeof(user_buff));
        return ;
    }
    else {
        bedled = false;
        ui->bedroonButton->setText("已关闭");
        QIcon icon(":/image/icon/close.png");
        ui->bedroonButton->setIcon(icon);
        user_buff[0] = 1;
        user_buff[1] = 8;
        write(fd,user_buff,sizeof(user_buff));
        return ;
    }
}

/* 厨房灯 */
void CtrlBulbWindow::on_kitchenButton_clicked()
{
    char user_buff[2];
    if(ui->kitchenButton->text() == "已关闭")
    {
        kitled = true;
        ui->kitchenButton->setText("已打开");
        QIcon icon(":/image/icon/open.png");
        ui->kitchenButton->setIcon(icon);
        user_buff[0] = 1;
        user_buff[1] = 9;
        write(fd,user_buff,sizeof(user_buff));
        return ;
    }
    else {
        kitled = false;
        ui->kitchenButton->setText("已关闭");
        QIcon icon(":/image/icon/close.png");
        ui->kitchenButton->setIcon(icon);
        user_buff[0] = 0;
        user_buff[1] = 9;
        write(fd,user_buff,sizeof(user_buff));
        return ;
    }
}

/* 厕所灯 */
void CtrlBulbWindow::on_wcButton_clicked()
{
    char user_buff[2];
    if(ui->wcButton->text() == "已关闭")
    {
        wcled = true;
        ui->wcButton->setText("已打开");
        QIcon icon(":/image/icon/open.png");
        ui->wcButton->setIcon(icon);
        user_buff[0] = 1;
        user_buff[1] = 10;
        write(fd,user_buff,sizeof(user_buff));
        return ;
    }
    else {
        wcled = false;
        ui->wcButton->setText("已关闭");
        QIcon icon(":/image/icon/close.png");
        ui->wcButton->setIcon(icon);
        user_buff[0] = 0;
        user_buff[1] = 10;
        write(fd,user_buff,sizeof(user_buff));
        return ;
    }
}

/* 一键关灯和开灯 */
void CtrlBulbWindow::on_ctrlButton_clicked()
{

    // 定义一个控制led数据
    char user_buff1[2];
    char user_buff2[2];
    char user_buff3[2];
    char user_buff4[2];
    if(ui->ctrlButton->text() == "关")
    {
        ui->ctrlButton->setText("开");
        QIcon icon(":/image/icon/open.png");
        ui->ctrlButton->setIcon(icon);
        lampled = true;        /* 客厅 */
        bedled = true;         /* 卧室 */
        kitled = true;         /* 厨房 */
        wcled = true;          /* 厕所 */

        user_buff1[0] = 1;
        user_buff1[1] = 7;
        write(fd,user_buff1,sizeof(user_buff1));

        user_buff2[0] = 1;
        user_buff2[1] = 8;
        write(fd,user_buff2,sizeof(user_buff2));

        user_buff3[0] = 1;
        user_buff3[1] = 9;
        write(fd,user_buff3,sizeof(user_buff3));

        user_buff4[0] = 1;
        user_buff4[1] = 10;
        write(fd,user_buff4,sizeof(user_buff4));
        /*设置图标 */
        setIconLed(lampled,bedled,kitled,wcled);
        return ;

    }
    else {
        ui->ctrlButton->setText("关");
        QIcon icon(":/image/icon/close.png");
        ui->ctrlButton->setIcon(icon);

        lampled = false;        /* 客厅 */
        bedled = false;         /* 卧室 */
        kitled = false;         /* 厨房 */
        wcled = false;          /* 厕所 */
        user_buff1[0] = 0;
        user_buff1[1] = 7;
        write(fd,user_buff1,sizeof(user_buff1));

        user_buff2[0] = 0;
        user_buff2[1] = 8;
        write(fd,user_buff2,sizeof(user_buff2));

        user_buff3[0] = 0;
        user_buff3[1] = 9;
        write(fd,user_buff3,sizeof(user_buff3));

        user_buff4[0] = 0;
        user_buff4[1] = 10;
        write(fd,user_buff4,sizeof(user_buff4));
        /*设置图标 */
        setIconLed(lampled,bedled,kitled,wcled);
        return ;
    }



}

 /* 设置图表 */
void CtrlBulbWindow::setIconLed(bool lampled, bool bedled, bool kitled, bool wcled)
{
    if(lampled == false)
    {
        ui->lampButton->setText("已关闭");
        QIcon icon(":/image/icon/close.png");
        ui->lampButton->setIcon(icon);
    }
    else {
        ui->lampButton->setText("已打开");
        QIcon icon(":/image/icon/open.png");
        ui->lampButton->setIcon(icon);
    }

    if(bedled == false)
    {
        ui->bedroonButton->setText("已关闭");
        QIcon icon(":/image/icon/close.png");
        ui->bedroonButton->setIcon(icon);
    }
    else {
        ui->bedroonButton->setText("已打开");
        QIcon icon(":/image/icon/open.png");
        ui->bedroonButton->setIcon(icon);
    }
    if(kitled == false)
    {
        ui->kitchenButton->setText("已关闭");
        QIcon icon(":/image/icon/close.png");
        ui->kitchenButton->setIcon(icon);
    }
    else {
        ui->kitchenButton->setText("已打开");
        QIcon icon(":/image/icon/open.png");
        ui->kitchenButton->setIcon(icon);
    }
    if(wcled == false)
    {
        ui->wcButton->setText("已关闭");
        QIcon icon(":/image/icon/close.png");
        ui->wcButton->setIcon(icon);
    }
    else {
        ui->wcButton->setText("已打开");
        QIcon icon(":/image/icon/open.png");
        ui->wcButton->setIcon(icon);
    }
}

/* 灯的状态 */
void CtrlBulbWindow::newledStatus(bool lampled, bool bedled, bool kitled, bool wcled)
{
    this->lampled = lampled;        /* 客厅 */
    this->bedled = bedled;         /* 卧室 */
    this->kitled = kitled;         /* 厨房 */
    this->wcled = wcled;          /* 厕所 */

    /* 设置灯的状态图标 */
    setIconLed(this->lampled,this->bedled,this->kitled,this->wcled);
}
