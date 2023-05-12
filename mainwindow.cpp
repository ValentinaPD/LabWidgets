#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
void MainWindow::begin()
{

}
void MainWindow::calc()
{

}
MainWindow::~MainWindow()
{
    delete ui;
}
