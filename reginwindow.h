#ifndef REGINWINDOW_H
#define REGINWINDOW_H

#include <QMainWindow>
#include "loginwindow.h"

#include <QTimer>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>

namespace Ui {
class ReginWindow;
}

class ReginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReginWindow(QWidget *parent = nullptr,QTcpSocket *socket = nullptr);
    ~ReginWindow();

private slots:
    void on_reteunLoginButton_clicked();

    void on_reginsterButton_clicked();

    void on_addNFCCardButton_clicked();
    /* 读卡时间 */
    void getIdTimer();
public slots:
    /* 注册状态 */
    void reginStatus(bool status);
private:
    Ui::ReginWindow *ui;
    unsigned int ID;         // 门禁卡号
    QTimer *timer;           // 读卡计时
    int sec;                 // 每次读卡时间6s;
    QTcpSocket* socket;      // 连接上的套接字
};

#endif // REGINWINDOW_H
