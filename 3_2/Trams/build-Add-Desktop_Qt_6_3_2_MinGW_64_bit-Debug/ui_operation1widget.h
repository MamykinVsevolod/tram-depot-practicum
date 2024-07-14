/********************************************************************************
** Form generated from reading UI file 'operation1widget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATION1WIDGET_H
#define UI_OPERATION1WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_operation1Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *operation1Widget)
    {
        if (operation1Widget->objectName().isEmpty())
            operation1Widget->setObjectName(QString::fromUtf8("operation1Widget"));
        operation1Widget->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        operation1Widget->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(operation1Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableWidget = new QTableWidget(1, 1, operation1Widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QStringList strlist; // объект Список строк
        strlist << "Модель";

        tableWidget->setColumnWidth(0, 120);
        tableWidget->setHorizontalHeaderLabels(strlist);// включаем заголовок

        horizontalLayout->addWidget(tableWidget);


        retranslateUi(operation1Widget);

        QMetaObject::connectSlotsByName(operation1Widget);
    } // setupUi

    void retranslateUi(QWidget *operation1Widget)
    {
        operation1Widget->setWindowTitle(QCoreApplication::translate("operation1Widget", "\320\236\320\277\320\265\321\200\320\260\321\206\320\270\321\217 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class operation1Widget: public Ui_operation1Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATION1WIDGET_H
