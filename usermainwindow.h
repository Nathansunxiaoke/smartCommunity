#ifndef USERMAINWINDOW_H
#define USERMAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTime>
#include <QTimer>
#include <QDate>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMovie>

#include "repairsbox.h"  /* 申请维修界面 */
#include "ctrlbulbwindow.h" /* 控制灯界面 */
#include "videowindow.h" /* 视频播放界面 */



namespace Ui {
class UserMainWindow;
}

class UserMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserMainWindow(QWidget *parent = nullptr,QTcpSocket *socket = nullptr);
    ~UserMainWindow();
private slots:
    /* 更新时间日期 */
    void upDateTimer();
    /* 更新天气 */
    void upWeather();
    /* 更新广告 */
    void upAd();
    /* 跟新消息推送 */
    void upTextNews();
    void parsingJson(QNetworkReply *reply);
    void on_serverButton_clicked();

    void on_retuenButton_clicked();
    /* 提交订单 */
    void sndSubmitServer(const QString& msg);
    void on_ledButton_clicked();
    /* 接收新的灯状态 */
    void rcvChangeledStatus(bool lampled,bool bedled,bool kitled,bool wcled);
    void on_videoButton_clicked();

signals:
    void sndNetwork();
    /* 灯的状态 */
    void oldledStatus(bool lampled,bool bedled,bool kitled,bool wcled);
private:
    /* 初始化灯光控制 */
    void initBlub();
    /* 服务器信息处理 */
    void readServerMsg();
    /* 初始化定时器 */
    void initTimer();

private:
    Ui::UserMainWindow *ui;
    QTcpSocket *socket;            /* 连接网络的套接字 */
    QTimer *tTimer;                 /* 时间定时 */
    QTimer *wTimer;                 /* 天气定时 */
    QTimer *adTimer;                /* 广告定时器 */
    QTimer *NTimer;                 /* 新闻定时器 */
    int ncount;                     /* 新闻个数 */
    QNetworkAccessManager *manager;  /* 网络管理 */
    QStringList adList;              /* 广告内容 */
    int adcount;                     /* 广告个数 */
    QMovie *ad;
    QStringList newText;
    bool timerFlag;

    /* bulb */
    bool lampled;        /* 客厅 */
    bool bedled;         /* 卧室 */
    bool kitled;         /* 厨房 */
    bool wcled;          /* 厕所 */
};

#endif // USERMAINWINDOW_H
