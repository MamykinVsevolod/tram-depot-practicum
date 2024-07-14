#include "deleteformwidget.h"
#include "ui_deleteformwidget.h"
#include <QIntValidator>
deleteFormWidget::deleteFormWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deleteFormWidget)
{
    ui->setupUi(this);
    this->setFixedSize(230, 150);
    QIcon icon;
    icon.addFile(QString::fromUtf8("../../../../Embarcadero/Studio/Projects/Database/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
    this->setWindowIcon(icon);
    this->setWindowTitle("Удаление");
    ui->lineEdit->setValidator(new QIntValidator(0, 10000, this));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(DeleteRecord()));
}

deleteFormWidget::~deleteFormWidget()
{
    delete ui;
}

void deleteFormWidget::DeleteRecord(){
    bookFile book;
    QString num = ui->lineEdit->text();
    book.delRec(num);
    ui->lineEdit->clear();
}
