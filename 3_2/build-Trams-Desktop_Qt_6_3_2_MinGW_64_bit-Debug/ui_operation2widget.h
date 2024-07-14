/********************************************************************************
** Form generated from reading UI file 'operation2widget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATION2WIDGET_H
#define UI_OPERATION2WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_operation2Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *operation2Widget)
    {
        if (operation2Widget->objectName().isEmpty())
            operation2Widget->setObjectName(QString::fromUtf8("operation2Widget"));
        operation2Widget->resize(366, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Embarcadero/Studio/Projects/Database/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        operation2Widget->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(operation2Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableWidget = new QTableWidget(1, 2, operation2Widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setRowCount(1);

        horizontalLayout->addWidget(tableWidget);


        retranslateUi(operation2Widget);

        QMetaObject::connectSlotsByName(operation2Widget);
    } // setupUi

    void retranslateUi(QWidget *operation2Widget)
    {
        operation2Widget->setWindowTitle(QCoreApplication::translate("operation2Widget", "\320\236\320\277\320\265\321\200\320\260\321\206\320\270\321\217 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class operation2Widget: public Ui_operation2Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATION2WIDGET_H
