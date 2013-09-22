#include "linuxqwindow.h"
#include "ui_linuxqwindow.h"
#include <math.h>
LinuxQWindow::LinuxQWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LinuxQWindow)
{
    ui->setupUi(this);
}

LinuxQWindow::~LinuxQWindow()
{
    delete ui;
}

void LinuxQWindow::on_exit_clicked()
{
    close();
}

void LinuxQWindow::on_calcualte_clicked()
{
    double a = ui->aa->value();
    double b = ui->bb->value();
    double c = ui->cc->value();
    double delta = pow(b,2) - (4*a*c);
    if(delta == 0) {
        ui->eqcase->setText("The equation has equal solution");
        ui->delta->setNum(delta);
        double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 *a);
        double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 *a);
        ui->x1->setNum(x1);
        ui->x2->setNum(x2);
    } else if (delta <= 0) {
        ui->eqcase->setText("The equation has no solution");
        ui->delta->setNum(delta);
        ui->x1->setText("None");
        ui->x2->setText("None");
    } else {
    ui->eqcase->setText("The equation has tow solutions");
    double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 *a);
    double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 *a);
    ui->delta->setNum(delta);
    ui->x1->setNum(x1);
    ui->x2->setNum(x2);
    }
}
