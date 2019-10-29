#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QDebug>
#include <QLabel>
#include <QVBoxLayout>
#include <QString>
#include <QWidget>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void randomSlot();

private:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *layout;
    QPushButton *button;
};
#endif // MAINWINDOW_H
