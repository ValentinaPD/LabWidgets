#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QFrame>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QValidator>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
    QTextCodec *codec;
    QFrame *frame;
    QLabel *inputLabel;
    QLineEdit *inputEdit;
    QLabel *outputLabel;
    QLineEdit *outputEdit;
    QPushButton *nextButton;
    QPushButton *exitButton;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void begin();
    void calc();
private:
    Ui::MainWindow *ui;
};
class StrValidator:public QValidator // класс компонента проверки ввода
{

public:
StrValidator(QObject *parent):QValidator(parent){}
virtual State validate(QString &str,int &pos)const
{
return Acceptable; // метод всегда принимает вводимую строку
}
};
#endif // MAINWINDOW_H
