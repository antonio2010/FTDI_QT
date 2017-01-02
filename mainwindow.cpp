#include <windows.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ftd2xx.h"
#include "libMPSSE_i2c.h"

uint32 i2cNumChannels = 0;
FT_STATUS i2cStatus = 0;

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
     i2cStatus = I2C_GetNumChannels(&i2cNumChannels);
}
