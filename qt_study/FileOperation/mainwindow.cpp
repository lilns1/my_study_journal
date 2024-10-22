#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui -> newAction, &QAction::triggered, this, &MainWindow::newActionslot);
    connect(ui -> openAction, &QAction::triggered, this, &MainWindow::openActionslot);
    connect(ui -> saveAction, &QAction::triggered, this, &MainWindow::saveActionslot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newActionslot()
{
    ui -> textEdit -> clear();
    this -> setWindowTitle("新建文件夹.txt");
}

void MainWindow::openActionslot()
{
    QString fileName = QFileDialog::getOpenFileName(this, "选择一个文件", QCoreApplication::applicationFilePath(), "*.cpp");

    if (fileName.isEmpty())
    {
        QMessageBox::warning(this, "警告", "请选择一个文件");
    }
    else
    {
        // qDebug() << fileName;
        QFile file(fileName);
        file.open(QIODevice::ReadOnly);
        QByteArray ba = file.readAll();
        ui -> textEdit -> setText(QString(ba));
        file.close();
    }
}

void MainWindow::saveActionslot(){
    QString fileName = QFileDialog::getSaveFileName(this, "选择一个文件",
                                                    QCoreApplication::applicationFilePath());
    if(fileName.isEmpty())
    {
        QMessageBox::warning(this, "警告", "请选择一个文件");
    }
    else
    {
        QFile file(fileName);
        file.open(QIODevice::WriteOnly);
        QByteArray ba;
        ba.append(ui -> textEdit -> toPlainText().toUtf8());
        file.write(ba);
        file.close();
    }
}

void MainWindow::keyPressEvent(QKeyEvent *k)
{
    if (k -> modifiers() == Qt::ControlModifier && k -> key() == Qt::Key_S)
    {
        saveActionslot();
    }
}

void MainWindow::mousePressEvent(QMouseEvent *m)
{
    QPoint pt = m -> pos();
    qDebug() << pt;

    if (m -> button() == Qt::LeftButton)
    {
        qDebug() << "左键被按下";
    }
    else if (m -> button() == Qt::RightButton)
    {
        qDebug() << "右键被按下";
    }
}
