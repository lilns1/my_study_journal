#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    server = new QTcpServer;

    server -> listen(QHostAddress::AnyIPv4, PORT);

    connect(server, &QTcpServer::newConnection, this, &Widget::newClientHandler);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::newClientHandler()
{
    QTcpSocket *socket = server -> nextPendingConnection();

    ui -> iplineEdit -> setText(socket ->peerAddress().toString());
    ui->portlineEdit->setText(QString::number(socket->peerPort()));

    // connect(socket, &QTcpSocket::readyRead, this, &Widget::ClientInfoSlot);
    myTread *t = new myTread(socket);
    t->start();

    connect(t, &myTread::sendToWidget, this, &Widget::treadSlot);
}

// void Widget::ClientInfoSlot()
// {
//     QTcpSocket *s = (QTcpSocket *)sender();
//     ui->mainlineEdit->setText(QString(s->readAll()));
// }

void Widget::treadSlot(QByteArray b)
{
    ui->mainlineEdit->setText(QString(b));
}
