#ifndef DELETEFORMWIDGET_H
#define DELETEFORMWIDGET_H

#include <QWidget>
#include <bookFile.h>
namespace Ui {
class deleteFormWidget;
}

class deleteFormWidget : public QWidget
{
    Q_OBJECT

public:
    explicit deleteFormWidget(QWidget *parent = nullptr);
    ~deleteFormWidget();

private:
    Ui::deleteFormWidget *ui;
public slots:
    void DeleteRecord();
};


#endif // DELETEFORMWIDGET_H
