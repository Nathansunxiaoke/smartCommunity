#ifndef REPAIRSBOX_H
#define REPAIRSBOX_H

//#include <QWidget>
#include <QMainWindow>
#include <QMessageBox>
#include <QTcpSocket>

namespace Ui {
class RepairsBox;
}

class RepairsBox : public QMainWindow
{
    Q_OBJECT

public:
    explicit RepairsBox(QWidget *parent = nullptr);
    ~RepairsBox();

private slots:
    void on_ckose2Button_clicked();

    void on_submitButton_clicked();
 signals:
    void submitMsg(const QString& msg);
private:
    Ui::RepairsBox *ui;
};

#endif // REPAIRSBOX_H
