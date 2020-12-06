#include "videowindow.h"
#include "ui_videowindow.h"

#include "usermainwindow.h" /* 用户主界面 */

VideoWindow::VideoWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VideoWindow)
{
    ui->setupUi(this);
    statusflag = false;
}

VideoWindow::~VideoWindow()
{
    delete ui;
}

/* 返回用户主界面 */
void VideoWindow::on_returnButton_clicked()
{
    //返回上一级界面
    UserMainWindow* usrWin = dynamic_cast<UserMainWindow*>(this->parentWidget()) ;
    usrWin->show();
    QString playfile = QString("killall -9 mplayer  &");
    ui->playMeunwidget->close();
    this->close();
}

/* 添加播放文件 */
void VideoWindow::on_addVideoButton_clicked()
{
    /* 获取播放文件 */
    videofiles = QFileDialog::getOpenFileNames(this,"添加文件",".");
    ui->playerListWidget->addItems(videofiles);
}

/* 单击需要播放的文件 */
void VideoWindow::on_playerListWidget_itemClicked(QListWidgetItem *item)
{
    playRow = ui->playerListWidget->currentRow();
}

/* 开始播放 */
void VideoWindow::on_startPlayButton_clicked()
{
    if(ui->playerListWidget->count() == 0)
    {
        return ;
    }

    if(statusflag == false)
    {
        QString playfile = QString("mplayer -zoom -x 580 -y 400 %1 &").arg(videofiles.at(playRow));
        ui->startPlayButton->setStyleSheet("border-image: url(:/image/icon/stop.png);border-radius: 40px");
        system(playfile.toUtf8());
        statusflag = true;
        return ;
    }
    if(statusflag == true)
    {
        QString playfile = QString("killall -9 mplayer  &");
        ui->startPlayButton->setStyleSheet("border-image: url(:/image/icon/start.png);border-radius: 40px");
        ui->playMeunwidget->close();
        system(playfile.toUtf8());
        statusflag = false;
        return ;
    }

}
