#include "addformwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    addFormWidget w;
    w.show();
    return a.exec();
}
