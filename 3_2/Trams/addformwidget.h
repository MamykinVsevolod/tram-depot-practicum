#ifndef ADDFORMWIDGET_H
#define ADDFORMWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class addFormWidget; }
QT_END_NAMESPACE

class addFormWidget : public QWidget
{
    Q_OBJECT

public:
    addFormWidget(QWidget *parent = nullptr);
    ~addFormWidget();

private:
    Ui::addFormWidget *ui2;
public slots:
    void addRecord();
};
#endif // ADDFORMWIDGET_H
