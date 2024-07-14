/********************************************************************************
** Form generated from reading UI file 'operation4widget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATION4WIDGET_H
#define UI_OPERATION4WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_operation4Widget
{
public:

    void setupUi(QWidget *operation4Widget)
    {
        if (operation4Widget->objectName().isEmpty())
            operation4Widget->setObjectName(QString::fromUtf8("operation4Widget"));
        operation4Widget->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Embarcadero/Studio/Projects/Database/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        operation4Widget->setWindowIcon(icon);

        retranslateUi(operation4Widget);

        QMetaObject::connectSlotsByName(operation4Widget);
    } // setupUi

    void retranslateUi(QWidget *operation4Widget)
    {
        operation4Widget->setWindowTitle(QCoreApplication::translate("operation4Widget", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class operation4Widget: public Ui_operation4Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATION4WIDGET_H
