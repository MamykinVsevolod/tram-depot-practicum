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
        printFormWidget->setFixedSize(385, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Embarcadero/Studio/Projects/Database/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        printFormWidget->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(printFormWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableWidget = new QTableWidget(10, 4, printFormWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QStringList strlist; // объект Список строк
        strlist << "Номер" << "Модель" << "Год пр-ва" << "Срок службы";
        tableWidget->setHorizontalHeaderLabels(strlist);// включаем заголовок
        tableWidget->setColumnWidth(0, 80);
        tableWidget->setColumnWidth(1, 80);
        tableWidget->setColumnWidth(2, 80);
        tableWidget->setColumnWidth(3, 80);

        horizontalLayout->addWidget(tableWidget);


        retranslateUi(printFormWidget);

        QMetaObject::connectSlotsByName(printFormWidget);
    } // setupUi

    void retranslateUi(QWidget *printFormWidget)
    {
        printFormWidget->setWindowTitle(QCoreApplication::translate("printFormWidget", "База данных", nullptr));
    } // retranslateUi

};

namespace Ui {
    class printFormWidget: public Ui_printFormWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTFORMWIDGET_H
