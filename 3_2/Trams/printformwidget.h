#ifndef PRINTFORMWIDGET_H
#define PRINTFORMWIDGET_H

#include <QWidget>
#include <bookFile.h>
namespace Ui {
class printFormWidget;
}

class printFormWidget : public QWidget
{
    Q_OBJECT

public:
    explicit printFormWidget(QWidget *parent = nullptr);
    ~printFormWidget();
    void showRow(int i,recType r);
    void showAll();
    void showEvent(QShowEvent *event);
    bool event(QEvent *e);

private:
    Ui::printFormWidget *ui;
};

#endif // PRINTFORMWIDGET_H
