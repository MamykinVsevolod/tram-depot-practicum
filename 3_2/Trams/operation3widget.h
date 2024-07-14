#ifndef OPERATION3WIDGET_H
#define OPERATION3WIDGET_H

#include <QWidget>
#include <bookFile.h>
namespace Ui {
class operation3Widget;
}

class operation3Widget : public QWidget
{
    Q_OBJECT

public:
    explicit operation3Widget(QWidget *parent = nullptr);
    ~operation3Widget();

private:
    Ui::operation3Widget *ui;
public slots:
    void showEvent(QShowEvent *event);
    void showInformation();
};

#endif // OPERATION3WIDGET_H
