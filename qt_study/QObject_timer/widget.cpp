#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    picID = 2;

    QPixmap pic("E:/桌面/first/image/1.png");
    ui -> label -> setPixmap(pic);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    MytimerId =  this -> startTimer(TIMEOUT);

}

void Widget::timerEvent(QTimerEvent *event){
    if(event -> timerId() != MytimerId)
        return;
    QString path("E:/桌面/first/image/");
    path += QString::number(picID) + ".png";
    QPixmap pic(path);
    ui -> label -> setPixmap(pic);
    picID ++;
    if(picID == 4) picID = 1;
}



void Widget::on_stopButton_clicked()
{
    this -> killTimer(MytimerId);
}

