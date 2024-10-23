#include "mytread.h"

myTread::myTread(QTcpSocket *s)
{
    socket = s;
}

void myTread::run()
{
    connect(socket, &QTcpSocket::readyRead, this, &myTread::ClientInfoslot);
}

void myTread::ClientInfoslot()
{
    // qDebug() << socket->readAll();
    QByteArray ba = socket->readAll();
    emit sendToWidget(ba);
}
