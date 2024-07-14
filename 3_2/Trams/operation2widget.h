#ifndef OPERATION2WIDGET_H
#define OPERATION2WIDGET_H

#include <QWidget>
#include "bookFile.h"
namespace Ui {
class operation2Widget;
}

class operation2Widget : public QWidget
{
    Q_OBJECT

public:
    explicit operation2Widget(QWidget *parent = nullptr);
    ~operation2Widget();

private:
    Ui::operation2Widget *ui;
public slots:
    void showEvent(QShowEvent *event);
};


#endif // OPERATION2WIDGET_H
