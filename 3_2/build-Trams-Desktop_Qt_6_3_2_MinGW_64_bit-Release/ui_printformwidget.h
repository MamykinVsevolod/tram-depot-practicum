/********************************************************************************
** Form generated from reading UI file 'printformwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTFORMWIDGET_H
#define UI_PRINTFORMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_printFormWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *printFormWidget)
    {
        if (printFormWidget->objectName().isEmpty())
            printFormWidget->setObjectName(QString::fromUtf8("printFormWidget"));
        printFormWidget->resize(400, 300);
        horizontalLayout = new QHBoxLayout(printFormWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableWidget = new QTableWidget(printFormWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        horizontalLayout->addWidget(tableWidget);


        retranslateUi(printFormWidget);

        QMetaObject::connectSlotsByName(printFormWidget);
    } // setupUi

    void retranslateUi(QWidget *printFormWidget)
    {
        printFormWidget->setWindowTitle(QCoreApplication::translate("printFormWidget", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class printFormWidget: public Ui_printFormWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTFORMWIDGET_H
