#ifndef MUSICWINDOW_H
#define MUSICWINDOW_H

#include <QMainWindow>

namespace Ui {
class MusicWindow;
}

class MusicWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MusicWindow(QWidget *parent = nullptr);
    ~MusicWindow();

private:
    Ui::MusicWindow *ui;
};

#endif // MUSICWINDOW_H
