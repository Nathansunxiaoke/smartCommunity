#include "serverwindow.h"
#include "ui_serverwindow.h"

ServerWindow::ServerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ServerWindow)
{
    ui->setupUi(this);

    /* 启动服务器 */
    initServer();

    /* 创建一个社区数据库 */
    createSqlbase();

    cameras = QCameraInfo::availableCameras();

    /* 初始化数据库信息到ui */
    initDateBaseInfo();
}

ServerWindow::~ServerWindow()
{
    delete ui;
}

/* 连接上的新客户端 */
void ServerWindow::newClient()
{
    /* 新客户端连接上 */
    socket =  server->nextPendingConnection();
    socketList.append(socket);
    /* 连接客户端与服务器发送消息的信号和槽 */
    connect(socket,&QTcpSocket::readyRead,this,&ServerWindow::readClientMsg);

    /* 发送连接成功 */
    QString msgbuf = QString("successful");
    socket->write(msgbuf.toUtf8());
}

/* 接收客户发送的消息 */
void ServerWindow::readClientMsg()
{
    /* 判断客户端 */
    QObject *object = sender();
    QTcpSocket *msocket = dynamic_cast<QTcpSocket *>(object);
    msgHang = QString(msocket->readAll()).split(":");

    qDebug()<<msgHang;
    /* 消息处理 */
   if(msgHang[0] == "regin")
   {
       /* 用户注册 */
       reginMsgHand();
       return ;
   }
   if(msgHang[0] == "login")
   {
       /* 用户登录验证 */
       loginMsgHand();
       return ;
   }
   if(msgHang[0] == "repairs")
   {
       /* 用户维修信息 */
       repairMesgHand();
       return ;
   }
}

/* 启动服务器 */
void ServerWindow::initServer()
{
    /* 初始化Tcpserver */
    server = new QTcpServer;

    /* 设置服务器监听窗口 */
    server->listen(QHostAddress::Any,SERVERPORT);   /* 默认5555 */

    /* 设置连接上的客户端信号与槽 */
    connect(server,&QTcpServer::newConnection,this,&ServerWindow::newClient);
}

/* 创建社区数据库 */
void ServerWindow::createSqlbase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("smartCommunity.db");

    if(!db.open())
    {
        /* 打开失败 */
        QMessageBox::warning(this,"提示","数据库读取异常");
        return;
    }

    /* 创建户主信息表 */
    QSqlQuery query(db);
    QString sqltable = QString("CREATE TABLE if not exists Uers("
                               "ID INTEGER PRIMARY KEY,"
                               "Name TEXT NOT NULL,"
                               "password CHAR NOT NULL,"
                               "CardID INTEGER);");
    query.prepare(sqltable);

    /* 执行sql指令 */
    if(!query.exec())
    {
        /* 创建户主表失败 */
        QMessageBox::warning(this,"提示","户主表不存在");
        return ;
    }
    /* 创建业务维修表 */
    sqltable = QString("CREATE TABLE if not exists RepiarBill("
                       "ID INTEGER PRIMARY KEY,"
                       "usr TEXT NOT NULl,"
                       "tel TEXT NOT NULl,"
                       "date TEXT NOT NULl,"
                       "address TEXT NOT NULl,"
                       "project TEXT NOT NULl,"
                       "destrtion TEXT NOT NULl,"
                       "time TEXT NOT NULl,"
                       "status TEXT NOT NULl);");
    query.prepare(sqltable);

    /* 执行sql指令 */
    if(!query.exec())
    {
        qDebug()<<query.lastError();
        /* 创建户主表失败 */
        QMessageBox::warning(this,"提示","创建维修单表失败");
        return ;
    }

}

/* 将注册信息写入数据库 */
void ServerWindow::reginMsgHand()
{
    /* 将用户名和密码写入注册表 */
    QSqlQuery query;
    //+++++++++++++++++++++++++++++++++++需要添加CardID
#if 0
    msgHang.insert(3,"123");
#endif

    QString usrName = QString(msgHang[1]);
    QString password = QString(msgHang[2]);
    QString CardID = QString(msgHang[3]);
    QString sqlInsert = QString("INSERT INTO Uers(Name,Password,CardID)"
                                " values('%1','%2','%3');").arg(msgHang[1]).arg(msgHang[2]).arg(msgHang[3]);

    query.prepare(sqlInsert);
    if(!query.exec())
    {
        /* 数据加入失败 */
        qDebug()<<query.lastError();
        QMessageBox::warning(this,"提示","用户数据加入数据表失败");
        socket->write(QString("reginerror").toUtf8());
        return ;
    }
    socket->write(QString("reginsuccessful").toUtf8());
}

/* 用户登录验证 */
void ServerWindow::loginMsgHand()
{
    QSqlQuery query;

    QString loginName = QString(msgHang[1]);
    QString loginPasswd = QString(msgHang[2]);

    QString sqlselect = QString("SELECT * FROM Uers");

    query.prepare(sqlselect);
    if(!query.exec())
    {
        qDebug()<<"select"<<query.lastError();
        return ;
    }
    while(query.next())
    {
        if(query.value("name").toString() == loginName &&
                query.value("password") == loginPasswd)
        {
            /* 登录用户密码正确 */
            socket->write(QString("loginTrue").toUtf8());
            msgHang.clear();
            return ;
        }
    }
    /* 登录错误 */
    socket->write(QString("loginError").toUtf8());
    msgHang.clear();
    return ;
}

/* 用户维修信息 */
void ServerWindow::repairMesgHand()
{
    QSqlQuery query;

    QString sqlname = QString("SELECT name FROM Uers WHERE name = %1").arg(msgHang[1]);
    query.prepare(sqlname);
    if(!query.exec())
    {
        /* 申请人用户不存在 */
        return ;
    }
    QString usr = QString(msgHang[1]);
    QString tel = QString(msgHang[2]);
    QString date = QString(msgHang[3]);
    QString address = QString(msgHang[4]);
    QString project = QString(msgHang[5]);
    QString destrtion = QString(msgHang[6]);
    QString time = QString(QTime::currentTime().toString("hh:mm:ss"));
    QString status = QString("未受理");

    QString insertSql = QString("INSERT INTO RepiarBill(usr,tel,date,address,project,destrtion,time,status)"
                                " VALUES('%1','%2','%3','%4','%5','%6','%7','%8');")
                                 .arg(usr).arg(tel).arg(date).arg(address)
                                 .arg(project).arg(destrtion).arg(time).arg(status);
    qDebug()<<insertSql;
    query.prepare(insertSql);
    if(!query.exec())
    {
        /* 数据加入失败 */
        qDebug()<<query.lastError();
        QMessageBox::warning(this,"提示","用户数据加入数据表失败");
        return ;
    }
}

/* 初始化数据库信息到ui */
void ServerWindow::initDateBaseInfo()
{
    /* 将业主信息加载到表 */
    QSqlQuery query;
    QString sqlSelect = QString("SELECT * FROM Uers");
    query.prepare(sqlSelect);
    if(!query.exec())
    {
        /* 初始化业主信息失败 */
        QMessageBox::warning(this,"提示","初始化业主信息到表失败");
        return ;
    }
}

/* 开启监控模式 */
void ServerWindow::on_openButton_clicked()
{
    foreach (const QCameraInfo &cameraInfo, cameras)
    {
        QCamera *camera = new QCamera(cameraInfo.deviceName().toUtf8());

        QCameraViewfinder *viewfinder = new QCameraViewfinder(ui->cameraOnewidget);
          viewfinder->resize(ui->cameraOnewidget->size());          viewfinder->show();
          //[3]绑定摄像头和摄像头画面控件
          camera->setViewfinder(viewfinder);

          //[4] 打开摄像头
          camera->start();
    }
}

/* 判断当前表内容 */
void ServerWindow::on_communtityTabWidget_currentChanged(int index)
{
    qDebug()<<"index"<<index;
}

/* 向客户端推送消息 */
void ServerWindow::on_sndMsgButton_clicked()
{
    QString news = QString("news:" + ui->msgBufftextEdit->toPlainText());

    foreach(QTcpSocket *socket,socketList)
    {
        socket->write(news.toUtf8());
    }
}
