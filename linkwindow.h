#ifndef LINKWINDOW_H
#define LINKWINDOW_H

#include <QMainWindow>
#include <QAbstractSocket>
#include <QTcpSocket>
#include <QMessageBox>

namespace Ui {
class LinkWindow;
}

class LinkWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LinkWindow(QWidget *parent = nullptr);
    ~LinkWindow();

private slots:
    void on_returnButton_clicked();

    void on_linkButton_clicked();
    /* 读取服务器发送的信息 */
    void readServerMsg();
private:
    Ui::LinkWindow *ui;
    QTcpSocket *socket;   /* 连接服务器socket*/
};

#endif // LINKWINDOW_H
