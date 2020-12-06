#include "reginwindow.h"
#include "ui_reginwindow.h"
#include <QDebug>
#include "gecrfid.h"

ReginWindow::ReginWindow(QWidget *parent,QTcpSocket* socket) :
    QMainWindow(parent),
    ui(new Ui::ReginWindow)
{
    ui->setupUi(this);
    ID = 0;
    this->socket = socket;
}

ReginWindow::~ReginWindow()
{
    delete ui;
}

/* 返回到登录界面 */
void ReginWindow::on_reteunLoginButton_clicked()
{
    //返回上一级界面
    loginWindow* loginWin = dynamic_cast<loginWindow*>(this->parentWidget()) ;
    loginWin->show();
    this->close();
}

/* 完成注册按钮 */
void ReginWindow::on_reginsterButton_clicked()
{
    // 判断用户名和密码和门禁卡是否又信息
    QString usrName = ui->nameLineEdit->text();
    QString passwd = ui->passwdLineEdit->text();
    QString passwdAgain = ui->passwdAgainLineEdit->text();

    // 用户名
    if(usrName == "")
    {
        QMessageBox::warning(this,"注册提示","请填写用户名");
        return ;
    }

    /* 填写密码 */
    if(passwd == "" || passwdAgain == "")
    {
        QMessageBox::warning(this,"注册提示","密码字段不能为空");
        return ;
    }

    /* 添加门禁卡 */
    if(ID < 0)
    {
        QMessageBox::warning(this,"注册提示","门禁卡未添加");
        return ;
    }

    /* 确认密码是否一致 */
    if(passwd != passwdAgain)
    {
        QMessageBox::warning(this,"注册提示","密码匹配");
        ui->passwdLineEdit->clear();
        ui->passwdAgainLineEdit->clear();
        return ;
    }

    /* 将注册信息发送到服务器完成注册 */
    QString reginMsg = QString("regin:%1:%2:%3").arg(usrName).arg(passwd).arg(QString::number(ID));
    socket->write(reginMsg.toUtf8());
}

/* 添加门禁卡 */
void ReginWindow::on_addNFCCardButton_clicked()
{
    sec = 6;
    timer = new QTimer;
    timer->start(1000);
    connect(timer,&QTimer::timeout,this,&ReginWindow::getIdTimer);
    ui->addNFCCardButton->setEnabled(false);
}

/* 读卡时间 */
void ReginWindow::getIdTimer()
{
    // 每隔1s读取一次数据
    ID = readCardId();
    qDebug() <<ID;
    if(ID > 0)
    {
        // 读取成功
        timer->stop();
        sec = 6;
        ui->IDLabel->setText(QString::number(ID));
        ui->addNFCCardButton->setEnabled(true);
    }
    if(sec-- == 0)
    {
        timer->stop();
        sec = 6;
        ui->addNFCCardButton->setEnabled(true);
        ID = 0;
    }
}

/* 注册状态 */
void ReginWindow::reginStatus(bool status)
{
    qDebug()<<"regin"<<status;
    if(status == false)
    {
        QMessageBox::warning(this,"注册提示","注册失败");
        return ;
    }
    if(status == true)
    {
        QMessageBox::information(this,"注册提示","注册成功");
        //返回上一级界面
        loginWindow* loginWin = dynamic_cast<loginWindow*>(this->parentWidget()) ;
        loginWin->show();
        this->close();
        return ;
    }
}

