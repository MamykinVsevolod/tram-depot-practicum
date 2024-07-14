#ifndef OPERATION1WIDGET_H
#define OPERATION1WIDGET_H

#include <QWidget>
#include <bookFile.h>
namespace Ui {
class operation1Widget;
}

class operation1Widget : public QWidget
{
    Q_OBJECT

public:
    explicit operation1Widget(QWidget *parent = nullptr);
    ~operation1Widget();

private:
    Ui::operation1Widget *ui;
public slots:
    void printModels();
};

#endif // OPERATION1WIDGET_H
