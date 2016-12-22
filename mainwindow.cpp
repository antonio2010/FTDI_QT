#include <windows.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ftd2xx.h"
#include "libMPSSE_i2c.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Init_libMPSSE();
}
