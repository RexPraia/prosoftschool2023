#include "mainwindow.h"
#include <QPushButton>
#include <QTimer>
#include <QRandomGenerator>
#include <QVBoxLayout>
#include <QColor>
#include <QString>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QVBoxLayout *m_mainLayout = new QVBoxLayout(this);
    setCentralWidget(new QWidget(this));
    centralWidget()->setLayout(m_mainLayout);
    resize(550,550);
    butSpawn();
}
void MainWindow::butSpawn()
{
    QTimer *timer = new QTimer (this);
    int randTime = QRandomGenerator::global()->bounded(100, 1000);
    timer->setInterval(randTime);
    connect(timer, &QTimer::timeout, this,[this]()
    {
        QPushButton *button = new QPushButton ("*", this);
        int x = QRandomGenerator::global()->bounded(0, this->width()-50);
        int y = 100;
        button->move(x,y);
        button->resize(20, 20);
        button->show();
        int u = QRandomGenerator::global()->bounded(2,4);
        QTimer *timerForMove = new QTimer (this);
         timerForMove->setInterval(35);
        connect(timerForMove, &QTimer::timeout, this, [button, this, u, timerForMove](){button->move(button->x(), button->y()+u); button->show();


            if (button->y() >= this->height())
            {
                QPalette pal = QPalette();
                pal.setColor(QPalette::Window, Qt::red);
                this->setAutoFillBackground(true);
                this->setPalette(pal);

                this->setWindowTitle("You Lose!");
            }
         if (button->underMouse())
         {
            //timerForMove->setInterval(u/2);
            button->move(button->x(), button->y()+u);
         }
                connect(button, &QPushButton::clicked, this, [button, timerForMove](){button->deleteLater(); timerForMove->deleteLater();});
        });
        timerForMove->start();
    });
    timer->start();
}

MainWindow::~MainWindow()
{
}

