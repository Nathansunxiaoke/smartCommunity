#include "repairsbox.h"
#include "ui_repairsbox.h"
#include "usermainwindow.h"

RepairsBox::RepairsBox(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::RepairsBox)
{
    ui->setupUi(this);
}

RepairsBox::~RepairsBox()
{
    delete ui;
}

/* 关闭申请维修界面 */
void RepairsBox::on_ckose2Button_clicked()
{
    //返回上一级界面
    UserMainWindow* usrWin = dynamic_cast<UserMainWindow*>(this->parentWidget()) ;
    usrWin->show();
    this->close();
}

/* 提交维修申请 */
void RepairsBox::on_submitButton_clicked()
{
    QString usr = ui->usrLineEdit->text();
    QString tel = ui->telLineEdit->text();
    QString date = ui->DateLineEdit->text();
    QString address = ui->addressLineEdit->text();
    QString project = ui->projectLineEdit->text();
    QString destrtion = ui->destrionTextEdit->toPlainText();

    if(usr == "" || tel == "" || date == "" || address == "" || project == "" ||  destrtion == "")
    {
        QMessageBox::warning(this,"提交","请将申请表填写完整");
        return ;
    }
    QString subMsg = QString("repairs:%1:%2:%3:%4:%5:%6:").arg(usr).arg(tel).arg(date).arg(address).arg(project).arg(destrtion);
    emit(submitMsg(subMsg));

    //返回上一级界面
    UserMainWindow* userWin = new UserMainWindow;
    userWin->show();
    this->close();
}
