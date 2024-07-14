/********************************************************************************
** Form generated from reading UI file 'mainformwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORMWIDGET_H
#define UI_MAINFORMWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainFormWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QWidget *mainFormWidget)
    {
        if (mainFormWidget->objectName().isEmpty())
            mainFormWidget->setObjectName(QString::fromUtf8("mainFormWidget"));
        mainFormWidget->setMaximumSize(QSize(395, 280));
        mainFormWidget->setFixedSize(280, 220);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Embarcadero/Studio/Projects/Database/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        mainFormWidget->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(mainFormWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(mainFormWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(mainFormWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(mainFormWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(mainFormWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(mainFormWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(mainFormWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(mainFormWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(mainFormWidget);

        QMetaObject::connectSlotsByName(mainFormWidget);
    } // setupUi

    void retranslateUi(QWidget *mainFormWidget)
    {
        mainFormWidget->setWindowTitle(QCoreApplication::translate("mainFormWidget", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205 \321\202\321\200\320\260\320\274\320\262\320\260\320\265\320\262", nullptr));
        pushButton->setText(QCoreApplication::translate("mainFormWidget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mainFormWidget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("mainFormWidget", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        pushButton_4->setText(QCoreApplication::translate("mainFormWidget", "\320\237\320\276\320\270\321\201\320\272 \320\274\320\276\320\264\320\265\320\273\320\265\320\271 \321\202\321\200\320\260\320\274\320\262\320\260\320\265\320\262", nullptr));
        pushButton_5->setText(QCoreApplication::translate("mainFormWidget", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\275\320\276\320\274\320\265\321\200\320\260 \320\274\320\276\320\264\320\265\320\273\320\265\320\271", nullptr));
        pushButton_6->setText(QCoreApplication::translate("mainFormWidget", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\321\200\320\260\320\274\320\262\320\260\320\265\320\262 \320\267\320\260\320\264\320\260\320\275\320\275\320\276\320\271 \320\274\320\276\320\264\320\265\320\273\320\270", nullptr));
        pushButton_7->setText(QCoreApplication::translate("mainFormWidget", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainFormWidget: public Ui_mainFormWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORMWIDGET_H
