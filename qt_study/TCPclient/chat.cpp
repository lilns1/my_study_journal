#include "chat.h"
#include "ui_chat.h"

chat::chat(QTcpSocket *socket, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::chat)
{
    ui->setupUi(this);
    this->socket = socket;
}

chat::~chat()
{
    delete ui;
}


void chat::on_clearButton_clicked()
{
    ui->lineEdit->clear();
}



void chat::on_sendButton_clicked()
{
    socket->write(ui->lineEdit->text().toUtf8());
}

