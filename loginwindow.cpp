#include "loginwindow.h"
#include "ui_loginwindow.h"

loginWindow::loginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    rcvMsg = true;

    //播放广告
    playVideo(":/image/ad.gif");
    ui->loginWidget->hide();

    /* 初始化界面 */
    initLoginMenu();

    /* 连接网络 */
    initLink();
    /* 将输入行加入事件过滤器 */
    ui->lNamelineEdit->installEventFilter(this);
    ui->lpasswdlineEdit->installEventFilter(this);
}

loginWindow::~loginWindow()
{
    delete ui;
}

bool loginWindow::eventFilter(QObject *watched, QEvent *event)
{

    if ( (watched == ui->lNamelineEdit) && (event->type() == QEvent::MouseButtonPress) )
    {
        qDebug()<<"ddddddddddddddd";
        callKeyBoard();
        ui->lNamelineEdit->setFocus();
    }
    else if ( (watched == ui->lpasswdlineEdit) && (event->type() == QEvent::MouseButtonPress) )
    {
        qDebug()<<"xxxxxxxxxxxxxxxxxxxxxx";
        callKeyBoard();
        ui->lpasswdlineEdit->setFocus();
    }

    return QMainWindow::eventFilter(watched,event);
}

/* 条用软键盘 */
void loginWindow::callKeyBoard()
{
    ui->myWidget->show();
}

/* 播放gif图片 */
void loginWindow::playVideo(const QString& image)
{
    ad = new QMovie(image);
    QSize size(ui->adLabel->size());
    ad->setScaledSize(size);
    ui->adLabel->setMovie(ad);
    ad->start();

    // 3s后自动停止，进入界面并设置图片
    skipTimer = new QTimer;
    sec = 4;
    skipTimer->start(1000);
    connect(skipTimer,&QTimer::timeout,this,&loginWindow::countDown);
}

/* 初始化登录界面 */
void loginWindow::initLoginMenu()
{
    /* 隐藏wifi图片 */
    ui->wifilabel->hide();
    ui->myWidget->hide();
}

/* 初始化连接网络 */
void loginWindow::initLink()
{
    /* 创建tcpSocket客户端套接字 */
    socket = new QTcpSocket;
    /* 建立与服务器端的数据连接 */
    QString ip;
    QString port;
    if(rcvMsg == true)
    {
        connect(socket,&QTcpSocket::readyRead,this,&loginWindow::readServerMsg);
        ip =  QString(IPADDRESS);  /* 默认是 192.168.20.59 */
        port= QString(PORT);      /* 默认是5555 */
        rcvMsg = false;
    }

    socket->connectToHost(ip,port.toUShort());
}

/* 点击跳过广告 */
void loginWindow::on_skipButton_clicked()
{
    ad->stop();
    ui->skipButton->close();

    skipTimer->stop();
    ui->loginWidget->show();
    QPixmap map(":/image/logIn1.jpg");
    ui->adLabel->setPixmap(map);
}

/* 广告事件倒计时 */
void loginWindow::countDown()
{
    // 倒计数文字
    QString timeLabel = QString("%1s后跳过").arg(--sec);
    ui->skipButton->setText(timeLabel);

    // 跳过
    if(sec == -1)
    {
        ui->loginWidget->show();
        ad->stop();
        skipTimer->stop();
        ui->skipButton->close();
        QPixmap map(":/image/logIn1.jpg");
        ui->adLabel->setPixmap(map);
    }
}

/* 注册账户 */
void loginWindow::on_reginButton_clicked()
{
    ReginWindow *reginwin = new ReginWindow(this,socket);
    connect(this,&loginWindow::reginstatus,reginwin,&ReginWindow::reginStatus);
    reginwin->show();
    this->hide();
}

/* 连接服务器 */
void loginWindow::on_linkButton_clicked()
{
    LinkWindow *lwin = new LinkWindow;
    lwin->show();
}

/* 读取服务器发送的信息 */
void loginWindow::readServerMsg()
{
    QByteArray array = socket->readAll();

    qDebug()<<"login:"<<array;
    /* 连接服务器成功 */
    if(array == "successful")
    {
#if 0
        QMessageBox::information(this,"连接提示","连接成功");
        ui->linkButton->setText("已连接");
        return ;
#endif
        ui->wifilabel->show();
        return ;
    }

    /* 登录结果处理 */
    if(array == "loginTrue")
    {
        /* 登录成功 */
        UserMainWindow *usrMenu = new UserMainWindow(this,socket);
        connect(usrMenu,&UserMainWindow::sndNetwork,this,&loginWindow::rcvLinkNework);
        usrMenu->show();
        this->hide();
        initLink();
    }
    if(array == "loginError")
    {
        QMessageBox::warning(this,"登录提示","用户名不存在或密码不正确");
        return ;
    }
    if(array == "reginerror")
    {
        /* 注册失败 */
        emit(reginstatus(false));
        return ;
    }
    if(array == "reginsuccessful")
    {
        /* 注册失败 */
        emit(reginstatus(true));
        return ;
    }
}

/* 登录界面 */
void loginWindow::on_loginButton_clicked()
{
    QString loginName = ui->lNamelineEdit->text();
    QString loginPasswd = ui->lpasswdlineEdit->text();

    if(loginName == "" || loginPasswd == "")
    {
        /* 用户和密码为空 */
        QMessageBox::warning(this,"登录提示","用户名或密码为空");
        return ;
    }

    /* 发送登录信息到服务器验证 */
    QString loginMsg = QString("login:%1:%2").arg(loginName).arg(loginPasswd);
    socket->write(loginMsg.toUtf8());

}

/* 接收用户界面信号 */
void loginWindow::rcvLinkNework()
{
    rcvMsg = true;

    initLink();

}

/* 编写完成 */
void loginWindow::on_lNamelineEdit_editingFinished()
{
    qDebug()<<"hh";
    ui->myWidget->hide();
}

void loginWindow::on_lpasswdlineEdit_editingFinished()
{
    qDebug()<<"dd";
    ui->myWidget->hide();
}
