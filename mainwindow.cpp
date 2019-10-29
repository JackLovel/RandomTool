#include "mainwindow.h"
#include <QFont>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("随机数生成器"));
    resize(500, 400);

    QFont font;
    font.setPointSize(15);
    font.setFamily("微软雅黑");

    widget = new QWidget();
    layout = new QVBoxLayout();
    label = new QLabel();

    label->setFont(font);

    button = new QPushButton("产生随机数");
    button->setFont(font);
    connect(button, &QPushButton::clicked, this, &MainWindow::randomSlot);

    layout->addWidget(label);
    layout->addWidget(button);
    widget->setLayout(layout);

    setCentralWidget(widget);
}

MainWindow::~MainWindow()
{

}

void  MainWindow::randomSlot()
{
    QTime time = QTime::currentTime();
    qsrand(time.msec() + time.second() * 1000);
    int value = qrand() % 100;

    label->setText(QString("结果：%1").arg(value));
}

