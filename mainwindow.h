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

class Counter:public QLineEdit
{
Q_OBJECT
public:
Counter(const QString & contents, QWidget *parent=0):
QLineEdit(contents,parent){}
signals:
void tick_signal();
public slots:
void add_one()
{
QString str=text();
int r=str.toInt();
if (r!=0 && r%5 ==0) emit tick_signal();
r++;
str.setNum(r);
setText(str);
}
};
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    //~MainWindow();
protected:
QTextCodec *codec;
QLabel *label1,*label2;
Counter *edit1,*edit2;
QPushButton *calcbutton;
QPushButton *exitbutton;
private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
