#include "addformwidget.h"
#include "mainformwidget.h"
#include "printformwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainFormWidget w;
    w.show();
    return a.exec();
}
