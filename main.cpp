#include <QtGui/QApplication>
#include "linuxqwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LinuxQWindow w;
    w.show();
    
    return a.exec();
}
