#include "loginwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginWindow w;
    w.setWindowIcon(QIcon(":/image/icon/win.png"));
    w.setWindowTitle("未来家园");
    w.show();

    return a.exec();
}
