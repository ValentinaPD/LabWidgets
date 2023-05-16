#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QtGui>
#include <QLineEdit>
#include <QLabel>
#include <QTextCodec>
#include <QPushButton>
#include <qboxlayout.h>

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

};


#endif // MAINWINDOW_H
