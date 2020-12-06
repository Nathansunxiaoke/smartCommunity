#ifndef VIDEOWINDOW_H
#define VIDEOWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QListWidgetItem>


namespace Ui {
class VideoWindow;
}

class VideoWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit VideoWindow(QWidget *parent = nullptr);
    ~VideoWindow();

private slots:
    void on_returnButton_clicked();

    void on_addVideoButton_clicked();

    void on_playerListWidget_itemClicked(QListWidgetItem *item);

    void on_startPlayButton_clicked();

private:
    Ui::VideoWindow *ui;
    QStringList videofiles;     /* 播放视频文件 */
    QString playFile;           /* 需要播放问文件 */
    int playRow;                /* 播放位置 */
    bool statusflag;            /* 播放标志 */
};

#endif // VIDEOWINDOW_H
