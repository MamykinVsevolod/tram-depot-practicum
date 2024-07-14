#include "addformwidget.h"
#include "ui_addformwidget.h"
#include "bookFile.h"
#include "mainFormwidget.h"
#include <QDebug>
#include <QIntValidator>
#include <QMessageBox>
addFormWidget::addFormWidget(QWidget *parent)
    : QWidget(parent)
    , ui2(new Ui::addFormWidget)
{
    ui2->setupUi(this);
    connect(ui2 -> pushButton, SIGNAL(clicked(bool)),
                this, SLOT(addRecord()));
    ui2->lineEdit->setValidator( new QIntValidator(0, 10000, this) );
    ui2->lineEdit_3->setValidator( new QIntValidator(0, 1000, this) );
    ui2->lineEdit_4->setValidator( new QIntValidator(0, 10, this) );
    ui2->lineEdit -> setFixedSize(180, 20);
    ui2->lineEdit_2 -> setFixedSize(180, 20);
    ui2->lineEdit_3 -> setFixedSize(180, 20);
    ui2->lineEdit_4 -> setFixedSize(180, 20);
    QIcon icon;
    icon.addFile(QString::fromUtf8("../../../../Embarcadero/Studio/Projects/Database/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
    this->setWindowIcon(icon);
}

addFormWidget::~addFormWidget()
{
    delete ui2;
}

void addFormWidget::addRecord(){
    bookFile book;
    recType r;
    /*r.fam=familyEdit->text();
    r.name=nameEdit->text();
    r.nom=nomerEdit->text();
    familyEdit->clear();
    nameEdit->clear();
    nomerEdit->clear();
    */
    r.number = ui2 -> lineEdit -> text();
    r.model = ui2 -> lineEdit_2 -> text();
    r.year = ui2 -> lineEdit_3 -> text();
    r.period = ui2 -> lineEdit_4 -> text();
    qDebug() << r.number << r.model << r.year << r.period;
    ui2 -> lineEdit -> clear();
    ui2 -> lineEdit_2 -> clear();
    ui2 -> lineEdit_3 -> clear();
    ui2 -> lineEdit_4 -> clear();
    book.addRec(r);
    QMessageBox msg(QMessageBox::Information,
           "Сообщение",
           "Запись добавлена!",
           QMessageBox::Ok,0);
    msg.exec();// выводим сообщение на экран
}
