#ifndef SERVERWINDOW_H
#define SERVERWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QtDebug>
#include <QCameraViewfinder>
#include <QVideoWidget>
#include <QCameraInfo>
#include <QVideoWidgetControl>
#include <QTime>


#define SERVERPORT 5555

namespace Ui {
class ServerWindow;
}

class ServerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ServerWindow(QWidget *parent = nullptr);
    ~ServerWindow();
private slots:
    /* 连接上的新客户端 */
    void newClient();
    /* 接收客户发送的消息 */
    void readClientMsg();

    void on_openButton_clicked();

    void on_communtityTabWidget_currentChanged(int index);

    void on_sndMsgButton_clicked();

private:
    /* 启动服务器 */
    void initServer();
    /* 创建社区数据库 */
    void createSqlbase();
    /* 将注册信息写入数据库 */
    void reginMsgHand();
    /* 用户登录验证 */
    void loginMsgHand();
    /* 用户维修信息 */
    void repairMesgHand();
    /* 初始化数据库信息到ui */
    void initDateBaseInfo();
private:
    Ui::ServerWindow *ui;
    QTcpServer *server;                 /* tcpserver 服务器 */
    QTcpSocket *socket;                 /* 连接上客户端的服务器 */
    QStringList msgHang;                /* 客户端发送的信息处理 */
    QList<QCameraInfo> cameras;         /* 多摄像头 */
    QList<QTcpSocket *> socketList;     /* 连接上的客户端 */
};

#endif // SERVERWINDOW_H
