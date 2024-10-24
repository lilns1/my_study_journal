#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QKeyEvent>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void keyPressEvent(QKeyEvent *key);
    void mousePressEvent(QMouseEvent *mouse);

private:
    Ui::MainWindow *ui;

private slots :
    void newActionslot();
    void openActionslot();
    void saveActionslot();
};
#endif // MAINWINDOW_H
