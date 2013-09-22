#ifndef LINUXQWINDOW_H
#define LINUXQWINDOW_H

#include <QMainWindow>

namespace Ui {
class LinuxQWindow;
}

class LinuxQWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit LinuxQWindow(QWidget *parent = 0);
    ~LinuxQWindow();
    
private slots:
    void on_exit_clicked();

    void on_calcualte_clicked();

private:
    Ui::LinuxQWindow *ui;
};

#endif // LINUXQWINDOW_H
