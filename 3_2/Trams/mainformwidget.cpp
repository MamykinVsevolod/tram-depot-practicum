#include "mainformwidget.h"
#include "ui_mainformwidget.h"
mainFormWidget::mainFormWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainFormWidget)
{
    ui->setupUi(this);
    connect(ui ->pushButton,SIGNAL(clicked(bool)),
                 this, SLOT(showAddForm()));
    connect(ui ->pushButton_3,SIGNAL(clicked(bool)),
                 this, SLOT(showPrintForm()));
    connect(ui ->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(showDeleteForm()));
    connect(ui ->pushButton_4, SIGNAL(clicked(bool)), this, SLOT(showOp1Form()));
    connect(ui ->pushButton_5, SIGNAL(clicked(bool)), this, SLOT(showOp2Form()));
    connect(ui ->pushButton_6, SIGNAL(clicked(bool)), this, SLOT(showOp3Form()));
    connect(ui ->pushButton_7, SIGNAL(clicked(bool)), this, SLOT(showOp4Form()));
}

mainFormWidget::~mainFormWidget()
{
    delete ui;
}


void mainFormWidget::showAddForm()
{
    addWin.show();
}

void mainFormWidget::showPrintForm()
{
    printWin.show();
    //printWin.showAll();
    //printWin.showAll();
}

void mainFormWidget::showDeleteForm(){
    //bookFile book;
    //book.delRec("2");
    delWin.show();
}

void mainFormWidget::showOp1Form() {
    op1Win.show();
}

void mainFormWidget::showOp2Form() {
    op2Win.show();
}

void mainFormWidget::showOp3Form() {
    op3Win.show();
}

void mainFormWidget::showOp4Form() {
    op4Win = new operation4Widget();
    op4Win -> show();
}
