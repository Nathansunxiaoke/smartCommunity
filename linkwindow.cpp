#include "linkwindow.h"
#include "ui_linkwindow.h"
#include <QtDebug>

LinkWindow::LinkWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LinkWindow)
{
    ui->setupUi(this);

    /* 创建tcpSocket客户端套接字 */
    socket = new QTcpSocket;
    /* 建立与服务器端的数据连接 */
    connect(socket,&QTcpSocket::readyRead,this,&LinkWindow::readServerMsg);
}

LinkWindow::~LinkWindow()
{
    delete ui;
}

/* 关闭连接网络界面 */
void LinkWindow::on_returnButton_clicked()
{
    this->close();
}

/* 连接服务器 */
void LinkWindow::on_linkButton_clicked()
{
    QString ip =  ui->iplineEdit->text();
    QString port = ui->portlineEdit->text();

    socket->connectToHost(ip,port.toUShort());
}

/* 读取服务器发送的信息 */
void LinkWindow::readServerMsg()
{
    QByteArray array = socket->readAll();
    if(array == "successful")
    {
        QMessageBox::information(this,"连接提示","连接成功");
        ui->linkButton->setText("已连接");
        return ;
    }
}
