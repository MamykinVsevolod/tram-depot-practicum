#include "addformwidget.h"
#include "ui_addformwidget.h"
//#include "bookFile.h"
#include "mainFormwidget.h"


addFormWidget::addFormWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addFormWidget)
{
    ui->setupUi(this);
}

addFormWidget::~addFormWidget()
{
    delete ui;
}

