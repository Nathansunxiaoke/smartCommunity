#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QMovie>
#include <QThread>
#include <QTimer>
#include <QTcpSocket>
#include <QEvent>

#include "reginwindow.h"       /* 注册窗口 */
#include "linkwindow.h"        /* 连接服务器窗口 */
#include "usermainwindow.h"    /* 用户主界面 */

#define SETPNG ":/image/icon/set.png";     /* 连接Wifi图片 */

#define IPADDRESS "192.168.20.59"
#define PORT "5555"

namespace Ui {
class loginWindow;
}

class loginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginWindow(QWidget *parent = nullptr);
    ~loginWindow();
    /* 调用软键盘 */
    void callKeyBoard();
protected:
    /* 事件 */
    bool eventFilter(QObject *watched, QEvent *event);

private slots:
    void on_skipButton_clicked();
    /* 广告事件倒计时 */
    void countDown();

    void on_reginButton_clicked();

    void on_linkButton_clicked();

    /* 读取服务器发送的信息 */
    void readServerMsg();
    void on_loginButton_clicked();
    /* 接收用户界面信号 */
    void rcvLinkNework();

    void on_lNamelineEdit_editingFinished();

    void on_lpasswdlineEdit_editingFinished();

private:
    /* 播放gif图片 */
    void playVideo(const QString& image);
    /* 初始化登录界面 */
    void initLoginMenu();
    /* 初始化连接网络 */
    void initLink();
signals:
    /* 注册成功 */
    void reginstatus(bool status);
private:
    Ui::loginWindow *ui;
    QMovie *ad;              // 广告
    QTimer *skipTimer;       // 跳过计时
    int sec;                 // 3s秒
    bool rcvMsg;             // 接收消息
    QTcpSocket *socket;   /* 连接服务器socket*/
};

#endif // LOGINWINDOW_H
