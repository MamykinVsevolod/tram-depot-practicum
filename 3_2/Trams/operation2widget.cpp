#include "operation2widget.h"
#include "ui_operation2widget.h"

operation2Widget::operation2Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::operation2Widget)
{
    ui->setupUi(this);
    this->setFixedSize(230, 250);
    QStringList strlist; // объект Список строк
    strlist << "Номер" << "Модель";
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setColumnWidth(0, 80);
    ui->tableWidget->setColumnWidth(1, 80);
    ui->tableWidget->setHorizontalHeaderLabels(strlist);// включаем загол
    ui->tableWidget->setRowCount(1);
}

operation2Widget::~operation2Widget()
{
    delete ui;
}

void operation2Widget::showEvent(QShowEvent *event){
    ui ->tableWidget -> setRowCount(1);
    bookFile book;
    QDataStream in(book.f);
    book.f->seek(0);
    recType rec;
    int i = 0;
    while(!in.atEnd()){
        in >> rec.number >> rec.model >> rec.year >> rec.period;
        if (2023 - rec.year.toDouble() > rec.period.toDouble()) {
            ui -> tableWidget->setRowCount(i+1);
            QTableWidgetItem *item; // элемент таблицы
            item = new QTableWidgetItem(); // создаем элемент
            item->setTextAlignment(Qt::AlignHCenter);
            item->setFlags(Qt::NoItemFlags);//запрещаем                                                                                    // выделение
            item->setText(rec.number);
             ui -> tableWidget->setItem(i,0,item);// привязываем элемент// записываем текст
            item = new QTableWidgetItem(); // создаем элемент
            item->setTextAlignment(Qt::AlignHCenter);
            item->setFlags(Qt::NoItemFlags);//запрещаем                                                                                    // выделение
            item->setText(rec.model);
            ui -> tableWidget->setItem(i,1,item);// привязываем элемент
            i+=1;
        }
    }
}
