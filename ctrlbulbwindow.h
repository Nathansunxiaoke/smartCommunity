#ifndef CTRLBULBWINDOW_H
#define CTRLBULBWINDOW_H

#include <QMainWindow>

extern "C"
{
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <unistd.h>
}

namespace Ui {
class CtrlBulbWindow;
}

class CtrlBulbWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CtrlBulbWindow(QWidget *parent = nullptr);
    ~CtrlBulbWindow();

private slots:
    void on_closeButton_clicked();

    void on_lampButton_clicked();

    void on_bedroonButton_clicked();

    void on_kitchenButton_clicked();

    void on_wcButton_clicked();

    void on_ctrlButton_clicked();
private:
    /* 设置图表 */
    void setIconLed(bool lampled,bool bedled,bool kitled,bool wcled);
public slots:
    /* 灯的状态 */
    void newledStatus(bool lampled,bool bedled,bool kitled,bool wcled);
signals:
    /* 修改后灯的状态 */
    void changeledStaus(bool lampled,bool bedled,bool kitled,bool wcled);
private:
    Ui::CtrlBulbWindow *ui;
    int fd;              /* 灯 */
    /* bulb */
    bool lampled;        /* 客厅 */
    bool bedled;         /* 卧室 */
    bool kitled;         /* 厨房 */
    bool wcled;          /* 厕所 */
    bool oneKey;         /* 一键控制 */
};

#endif // CTRLBULBWINDOW_H
