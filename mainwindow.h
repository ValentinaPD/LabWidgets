#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QFrame>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
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

#endif // MAINWINDOW_H
