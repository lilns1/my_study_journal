#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#define TIMEOUT 1 * 1000

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    int picID;

private:
    Ui::Widget *ui;
    int MytimerId;

private slots :
    void on_startButton_clicked();
    void timerEvent(QTimerEvent *event);
    void on_stopButton_clicked();
};
#endif // WIDGET_H
