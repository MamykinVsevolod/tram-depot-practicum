#include "operation3widget.h"
#include "ui_operation3widget.h"
#include <QDataStream>
operation3Widget::operation3Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::operation3Widget)
{
    ui->setupUi(this);
    this->setFixedSize(280, 100);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(showInformation()));
}

operation3Widget::~operation3Widget()
{
    delete ui;
}

void operation3Widget::showEvent(QShowEvent *event) {
    ui -> label_2 -> setVisible(false);
    ui -> lineEdit_2 -> setVisible(false);
    ui -> lineEdit_2 -> setText("0");
}

void operation3Widget::showInformation() {
    QString mod = ui -> lineEdit -> text();
    bookFile book;
    QDataStream in(book.f);
    recType rec;
    int counter = 0;
    while (!in.atEnd()){
        in >> rec.number >> rec.model >> rec.year >> rec.period;
        if (rec.model == mod) {
            counter += 1;
        }
    }
    ui -> lineEdit_2 -> setVisible(true);
    ui -> label_2 -> setVisible(true);
    QString s;
    ui -> lineEdit_2 -> setText(s.setNum(counter));
}
