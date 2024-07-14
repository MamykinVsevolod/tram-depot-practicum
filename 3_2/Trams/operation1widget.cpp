#include "operation1widget.h"
#include "ui_operation1widget.h"
#include <QDataStream>
#include <QDebug>
#include <QIntValidator>
operation1Widget::operation1Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::operation1Widget)
{
    ui->setupUi(this);
    this->setFixedSize(200, 230);
    QIcon icon;
    icon.addFile(QString::fromUtf8("../../../../Embarcadero/Studio/Projects/Database/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
    this->setWindowIcon(icon);
    QStringList strlist; // объект Список строк
    strlist << "Модель";
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setColumnWidth(0, 120);
    ui->tableWidget->setHorizontalHeaderLabels(strlist);// включаем заголовок
    ui->lineEdit->setValidator( new QIntValidator(0, 1000, this) );
    ui->tableWidget->
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(printModels()));
}

operation1Widget::~operation1Widget()
{
    delete ui;
}

void operation1Widget::printModels(){
    QString year = ui->lineEdit->text();
    ui->lineEdit->clear();
    for (int i = 0; i < ui -> tableWidget -> rowCount(); ++i) {
        ui -> tableWidget -> removeRow(i);
    }
    bookFile book;
    QDataStream in(book.f);
    book.f->seek(0);
    recType rec;
    int i = 0;
    QVector <QString> myvec;
    while (!in.atEnd()){
        in >> rec.number >> rec.model >> rec.year >> rec.period;
        qDebug() << rec.number;
        if (year.toDouble() <= rec.year.toDouble()) {
            bool flag = false;
            for (int j = 0; j < myvec.size(); ++j) {
                if (rec.model == myvec[j]) flag=true;
            }
            if (flag == false) {
                QTableWidgetItem *item; // элемент таблицы
                item = new QTableWidgetItem(); // создаем элемент
                item->setTextAlignment(Qt::AlignHCenter);
                item->setFlags(Qt::NoItemFlags);//запрещаем                                                                                    // выделение
                item->setText(rec.model);   // записываем текст
                ui -> tableWidget->setRowCount(i+1);
                ui -> tableWidget->setItem(i,0,item);// привязываем элемент
                i+=1;
            }
            myvec.push_back(rec.model);
        }
    }
    ui -> tableWidget->setRowCount(i);
}
