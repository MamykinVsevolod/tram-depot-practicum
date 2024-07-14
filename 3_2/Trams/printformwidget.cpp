#include "printformwidget.h"
#include "ui_printformwidget.h"
#include "mainformwidget.h"
#include <QMessageBox>
void printFormWidget::showRow(int i, recType r) {
    QTableWidgetItem *item; // элемент таблицы
        item = new QTableWidgetItem(); // создаем элемент
        item->setTextAlignment(Qt::AlignHCenter);
        item->setFlags(Qt::NoItemFlags);//запрещаем
                                                                                             // выделение
        item->setText(r.number);   // записываем текст
        ui -> tableWidget->setItem(i,0,item);// привязываем элемент
                                                                             // к таблице
        item = new QTableWidgetItem();// создаем элемент
        item->setTextAlignment(Qt::AlignHCenter);
        item->setFlags(Qt::NoItemFlags); //запрещаем
                                                                                             // выделение
        item->setText(r.model);
        ui -> tableWidget->setItem(i,1,item); // привязываем элемент
        item = new QTableWidgetItem();// создаем элемент
        item->setTextAlignment(Qt::AlignHCenter);
        item->setFlags(Qt::NoItemFlags); //запрещаем
                                                                                             // выделение
        item->setText(r.year); // записываем текст
        ui -> tableWidget->setItem(i,2,item); // привязываем элемент
        item = new QTableWidgetItem();// создаем элемент
        item->setTextAlignment(Qt::AlignHCenter);
        item->setFlags(Qt::NoItemFlags); //запрещаем
                                                                                             // выделение
        item->setText(r.period); // записываем текст
        ui -> tableWidget->setItem(i,3,item); // привязываем элемент
}
printFormWidget::printFormWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::printFormWidget)
{
    ui->setupUi(this);
    //ui->tableWidget = new QTableWidget(10, 4, this);
           ui->tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
           QStringList strlist; // объект Список строк
           strlist << "Номер" << "Модель" << "Год пр-ва" << "Срок службы";
           ui->tableWidget->setHorizontalHeaderLabels(strlist);// включаем заголовок
           ui->tableWidget->setColumnWidth(0, 80);
           ui->tableWidget->setColumnWidth(1, 80);
           ui->tableWidget->setColumnWidth(2, 80);
           ui->tableWidget->setColumnWidth(3, 80);
}

printFormWidget::~printFormWidget()
{
    delete ui;
}

void printFormWidget::showAll(){
    bookFile book;
            if (!book.readRec())
            {    // если файл пустой , то создаем сообщение
                QMessageBox msg(QMessageBox::Critical,
                        "Сообщение",
                        "База пуста",
                        QMessageBox::Ok,0);
                msg.exec(); // выводим сообщение
            }
            else
             {   // иначе - выводим таблицу по строкам
                ui -> tableWidget->setColumnCount(4);
                showRow(0,book.r);
                int i=0;
                while (book.readRec())
                   showRow(++i,book.r);
                ui -> tableWidget->setRowCount(i+1);
                resize(350,330);
                show();
             }
}

void printFormWidget::showEvent(QShowEvent *event) {
    this->showAll();
    this->showAll();
}
bool printFormWidget::event(QEvent *e)
{
    if (e->type() == QEvent::WindowActivate) {
        this->showAll();
        this->showAll();
    }
    return QWidget::event(e);
}
