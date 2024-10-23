#ifndef MYTREAD_H
#define MYTREAD_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <QDebug>

class myTread : public QThread
{
    Q_OBJECT
public:
    myTread(QTcpSocket *s);
    void run();

signals:
    void sendToWidget(QByteArray b);

private:
    QTcpSocket *socket;

private slots:
    void ClientInfoslot();
};

#endif // MYTREAD_H
