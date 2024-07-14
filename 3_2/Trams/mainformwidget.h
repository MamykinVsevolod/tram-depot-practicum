#ifndef MAINFORMWIDGET_H
#define MAINFORMWIDGET_H

#include <QWidget>
#include "addformwidget.h"
#include "printformwidget.h"
#include "bookFile.h"
#include "deleteformwidget.h"
#include "operation1widget.h"
#include "operation2widget.h"
#include "operation3widget.h"
#include "operation4widget.h"
QT_BEGIN_NAMESPACE
namespace Ui { class mainFormWidget; }
QT_END_NAMESPACE

class mainFormWidget : public QWidget
{
    Q_OBJECT

public:
    mainFormWidget(QWidget *parent = nullptr);
    ~mainFormWidget();
    addFormWidget addWin;
    printFormWidget printWin;
    deleteFormWidget delWin;
    operation1Widget op1Win;
    operation2Widget op2Win;
    operation3Widget op3Win;
    operation4Widget *op4Win;

private slots:
    void showAddForm();
    void showPrintForm();
    void showDeleteForm();
    void showOp1Form();
    void showOp2Form();
    void showOp3Form();
    void showOp4Form();
private:
    Ui::mainFormWidget *ui;
};
#endif // MAINFORMWIDGET_H
