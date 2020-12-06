#include "usermainwindow.h"
#include "ui_usermainwindow.h"
#include <QDebug>
#include "loginwindow.h" /* 登陆界面 */

UserMainWindow::UserMainWindow(QWidget *parent,QTcpSocket *socket) :
    QMainWindow(parent),
    ui(new Ui::UserMainWindow)
{
    ui->setupUi(this);
    this->socket = socket;
    /* 建立与服务器端的数据连接 */
    connect(socket,&QTcpSocket::readyRead,this,&UserMainWindow::readServerMsg);

    /* 隐藏功能界面  */
   // ui->funListwidget->hide();

    /* 初始化定时器 */
    initTimer();
    manager = new QNetworkAccessManager;
    connect(this->manager,&QNetworkAccessManager::finished,this,&UserMainWindow::parsingJson);
    adcount = 0;
    upAd();
    upWeather();
    /* 初始化灯 */
    initBlub();
    ncount = 0;
}

UserMainWindow::~UserMainWindow()
{
    delete ui;
}

/* 更新时间日期 */
void UserMainWindow::upDateTimer()
{
    ui->Timelabel->setText(QDate::currentDate().toString("ddd   ") + QTime::currentTime().toString("hh:mm"));
    ui->dateLabel->setText(QDate::currentDate().toString("yyyy年M月d日"));
}

void UserMainWindow::upWeather()
{
    //设置发送数据
    QNetworkRequest network_request;
    QString url = QString("http://apis.juhe.cn/simpleWeather/query?city=广州&key=75e93e009c3c1b9a25656816ee4ab0f7");
    network_request.setUrl(QUrl(url));
    //发送信息
    manager->get(network_request);
}

/* 更新广告 */
void UserMainWindow::upAd()
{
    qDebug()<<"adcount"<<adcount;
    if(adcount < 3)
    {
        QPixmap ad(adList.at(adcount++));
        ad.scaled(ui->adlabel->size());
        ui->adlabel->setPixmap(ad);
        return ;
    }
    if(adcount == 3)
    {
        adcount = 0;
    }
}

/* 跟新消息推送 */
void UserMainWindow::upTextNews()
{
   if(newText.size() == 0)
   {
       /* 无内容 */
       return ;
   }
   if(newText.size() == 1)
   {
       ui->newLabel->setText(newText.at(0));
       return ;
   }
   if(newText.size() == 2)
   {
       ui->newLabel->setText(newText.at(ncount++));
       if(ncount == 2)
       {
           ncount = 0;
       }
       return ;
   }
   if(newText.size() == 3)
   {
       ui->newLabel->setText(newText.at(ncount++));
       if(ncount == 3)
       {
           ncount = 0;
       }
       return ;
   }
   return ;
}

/* 解析数据 */
void UserMainWindow::parsingJson(QNetworkReply *reply)
{
    QByteArray array  = reply->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject object = doc.object();
    QJsonObject objresults = object.value("result").toObject();
    QJsonObject objdata = objresults.value("realtime").toObject();

    QString weather = QString(objdata.value("info").toString());

    if(weather == "晴")
    {
        QPixmap map(":/image/weather/sun.jpg");
        map.scaled(ui->weatherWidget->size());
        ui->weatherBackgoundlabel->setPixmap(map);
    }
    if(weather == "多云")
    {
        QPixmap map(":/image/weather/cloudy.jpg");
        map.scaled(ui->weatherWidget->size());
        ui->weatherBackgoundlabel->setPixmap(map);
    }

    ui->wSituationlabel->setText(weather);       // 天气

    ui->templabel->setText(objdata.value("temperature").toString());  // 温度
}

/* 服务器信息处理 */
void UserMainWindow::readServerMsg()
{
    QByteArray array = socket->readAll();
    qDebug() <<array <<array.size();
    QString msgHandle(array);
    QStringList info = msgHandle.split(":");

    /* 消息推送处理 */
    if(info[0] == "news")
    {
        info.removeAt(0);
        if(newText.size() > 2)
        {
            newText.removeAt(0);
        }
        newText.append(info);
        qDebug()<<"newtext"<<newText.size();
        info.clear();
        return ;
    }
}

/* 初始化定时器 */
void UserMainWindow::initTimer()
{
    tTimer = new QTimer;
    tTimer->start(1000);
    connect(tTimer,&QTimer::timeout,this,&UserMainWindow::upDateTimer,Qt::UniqueConnection);

    wTimer = new QTimer;
    wTimer->start(1000*60*5);
    connect(wTimer,&QTimer::timeout,this,&UserMainWindow::upWeather,Qt::UniqueConnection);

    adTimer = new QTimer;
    adTimer->start(3000);
    connect(adTimer,&QTimer::timeout,this,&UserMainWindow::upAd,Qt::UniqueConnection);
    adList<<":/image/ad/1.jpg"<<":/image/ad/2.jpg"<<":/image/ad/3.jpg";

    NTimer = new QTimer;
    NTimer->start(1000*5);
    connect(NTimer,&QTimer::timeout,this,&UserMainWindow::upTextNews,Qt::UniqueConnection);
    newText<<"温馨提示:云想衣裳花想容,春风拂槛露华浓.若非群玉山头见,会向瑶台月下逢."
          <<"温馨提示：李白喝醉了诗写的很好！！！";
}

/* 物业服务 */
void UserMainWindow::on_serverButton_clicked()
{
    RepairsBox *repairwin = new RepairsBox(this);
    connect(repairwin,&RepairsBox::submitMsg,this,&UserMainWindow::sndSubmitServer);
    repairwin->show();
    this->hide();
}

/* 退出登陆 */
void UserMainWindow::on_retuenButton_clicked()
{
    //返回上一级界面
    loginWindow* loginWin = dynamic_cast<loginWindow*>(this->parentWidget()) ;

    /* 关闭定时器 */
    tTimer->stop();
    wTimer->stop();
    adTimer->stop();
    NTimer->stop();

    delete  tTimer;
    delete  wTimer;

    emit(sndNetwork());
    loginWin->show();
    this->close();
}

/* 提交订单 */
void UserMainWindow::sndSubmitServer(const QString& msg)
{
    socket->write(msg.toUtf8());
}

/* 转到控制灯界面 */
void UserMainWindow::on_ledButton_clicked()
{
    CtrlBulbWindow *bulbWin = new CtrlBulbWindow(this);
    connect(this,&UserMainWindow::oldledStatus,bulbWin,&CtrlBulbWindow::newledStatus);

    connect(bulbWin,&CtrlBulbWindow::changeledStaus,this,&UserMainWindow::rcvChangeledStatus);
    bulbWin->show();
    emit(oldledStatus(lampled,bedled,kitled,wcled));
}

/* 接收新的灯状态 */
void UserMainWindow::rcvChangeledStatus(bool lampled, bool bedled, bool kitled, bool wcled)
{
    this->lampled = lampled;        /* 客厅 */
    this->bedled = bedled;          /* 卧室 */
    this->kitled = kitled;          /* 厨房 */
    this->wcled = wcled;            /* 厕所 */
}

/* 初始化灯 */
void UserMainWindow::initBlub()
{
    lampled = false;        /* 客厅 */
    bedled = false;         /* 卧室 */
    kitled = false;         /* 厨房 */
    wcled = false;          /* 厕所 */
}

/* 切换到视频界面 */
void UserMainWindow::on_videoButton_clicked()
{
    VideoWindow *vWin = new VideoWindow(this);
    vWin->show();
    this->hide();
}
