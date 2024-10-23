#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    socket = new QTcpSocket;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_connectButton_clicked()
{
    QString ip = ui -> iplineEdit ->text();
    QString port = ui -> portlineEdit -> text();

    socket -> connectToHost(QHostAddress(ip), port.toShort());

    connect(socket, &QTcpSocket::connected, [this](){
        QMessageBox::information(this, "连接提示", "连接成功");
        chat *c = new chat(socket);
        this->hide();
        c->show();
    });

    connect(socket, &QTcpSocket::disconnected, [this](){
        QMessageBox::warning(this, "连接提示", "丢失连接");
    });
}


void Widget::on_cancelButton_clicked()
{
    this -> close();
}

