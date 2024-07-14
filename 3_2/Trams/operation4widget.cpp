#include "operation4widget.h"
#include "ui_operation4widget.h"
#include <QtCharts/QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QDataStream>
#include <QDebug>
operation4Widget::operation4Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::operation4Widget)
{
    ui->setupUi(this);
    this->setFixedSize(500, 400);
    /*QLineSeries *series = new QLineSeries();
    bookFile book;
    QDataStream in(book.f);
    QVector <int> vec_years(2024, 0);
    recType rec;
    while (!in.atEnd()){
        in >> rec.number >> rec.model >> rec.year >> rec.period;
        int tmp = rec.year.toDouble();
        vec_years[tmp] += 1;
    }
    int j = 0;
    bool flag = false;
    for (int i = 0; i < vec_years.size(); ++i){
        if (vec_years[i] != 0) {
            if (!flag) {
                series->append(j, vec_years[i-1]);
                j += 1;
                flag = true;
            }
            series->append(j, vec_years[i]);
            j += 1;
            qDebug() <<vec_years[i];
        }
    }

    // Create chart, add data, hide legend, and add axis
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    // Customize the title font
    QFont font;
    font.setPixelSize(18);
    chart->setTitleFont(font);
    chart->setTitleBrush(QBrush(Qt::black));
    chart->setTitle("Количество произведенных трамваев по годам");
    // Change the line color and weight
    QPen pen(QRgb(0x000000));
    pen.setWidth(5);
    series->setPen(pen);
    chart->setAnimationOptions(QChart::AllAnimations);
    // Change the x axis categories
    QCategoryAxis *axisX = new QCategoryAxis();
    QCategoryAxis *axisY = new QCategoryAxis();
    j = 0;
    flag = false;
    for (int i = 0; i < vec_years.size(); ++i){
        if (vec_years[i] != 0) {
            if (!flag) {
                QString s; s.setNum(i-1);
                axisX->append(s, j);
                s.setNum(vec_years[i-1]);
                axisY->append(s, j);
                j += 1;
                flag = true;
            }
            QString s; s.setNum(i);
            axisX->append(s, j);
            s.setNum(vec_years[i-1]);
            axisY->append(s, j);
            j += 1;
        }
    }

    series->attachAxis(axisY);

    chart->setAxisX(axisX, series);
    //chart->addAxis(axisY, Qt::AlignLeft);
    // Used to display the chart
    chartView = new QChartView(chart, this);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView -> setFixedSize(500, 400); */
    QLineSeries *series = new QLineSeries();
    bookFile book;
    QDataStream in(book.f);
    QVector <int> vec_years(2024, 0);
    recType rec;
    while (!in.atEnd()){
        in >> rec.number >> rec.model >> rec.year >> rec.period;
        int tmp = rec.year.toDouble();
        vec_years[tmp] += 1;
    }
    int j = 0;
    bool flag = false;
    for (int i = 0; i < vec_years.size(); ++i){
        if (vec_years[i] != 0) {
            if (!flag) {
                series->append(j, vec_years[i-1]);
                j += 1;
                flag = true;
            }
            series->append(j, vec_years[i]);
            j += 1;
            qDebug() <<vec_years[i];
        }
    }
    // Create chart, add data, hide legend, and add axis
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    // Customize the title font
    QFont font;
    font.setPixelSize(18);
    chart->setTitleFont(font);
    chart->setTitleBrush(QBrush(Qt::black));
    chart->setTitle("Количество произведенных трамваев по годам");
    // Change the line color and weight
    QPen pen(QRgb(0x000000));
    pen.setWidth(5);
    series->setPen(pen);
    chart->setAnimationOptions(QChart::AllAnimations);
    // Change the x axis categories
    QCategoryAxis *axisX = new QCategoryAxis();
    QCategoryAxis *axisY = new QCategoryAxis();
    j = 0;
    flag = false;
    for (int i = 0; i < vec_years.size(); ++i){
        if (vec_years[i] != 0) {
            if (!flag) {
                QString s; s.setNum(i-1);
                axisX->append(s, j);
                s.setNum(vec_years[i-1]);
                axisY->append(s, j);
                j += 1;
                flag = true;
            }
            QString s; s.setNum(i);
            axisX->append(s, j);
            s.setNum(vec_years[i]);
            axisY->append(s, j);
            j += 1;
        }
    }
    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);
    chart->setAxisX(axisX, series);
    // Used to display the chart
    chartView = new QChartView(chart, this);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView -> setFixedSize(500, 400);
}

operation4Widget::~operation4Widget()
{
    delete ui;
}

void operation4Widget::showEvent(QShowEvent *event) {
    this->setFixedSize(500, 400);
    QLineSeries *series = new QLineSeries();
    bookFile book;
    QDataStream in(book.f);
    QVector <int> vec_years(2024, 0);
    recType rec;
    while (!in.atEnd()){
        in >> rec.number >> rec.model >> rec.year >> rec.period;
        int tmp = rec.year.toDouble();
        vec_years[tmp] += 1;
    }
    int j = 0;
    for (int i = 0; i < vec_years.size(); ++i){
        if (vec_years[i] != 0) {
            series->append(j, vec_years[i]);
            j += 1;
            qDebug() <<vec_years[i];
        }
    }
    /*series->append(0, 16);
    series->append(1, 25);
    series->append(2, 24);
    series->append(3, 19);
    series->append(4, 33);
    series->append(5, 25);
    series->append(6, 34);*/
    // Create chart, add data, hide legend, and add axis
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    // Customize the title font
    QFont font;
    font.setPixelSize(18);
    chart->setTitleFont(font);
    chart->setTitleBrush(QBrush(Qt::black));
    chart->setTitle("Количество произведенных трамваев по годам");
    // Change the line color and weight
    QPen pen(QRgb(0x000000));
    pen.setWidth(5);
    series->setPen(pen);
    chart->setAnimationOptions(QChart::AllAnimations);
    // Change the x axis categories
    QCategoryAxis *axisX = new QCategoryAxis();
    j = 0;
    for (int i = 0; i < vec_years.size(); ++i){
        if (vec_years[i] != 0) {
            QString s; s.setNum(i);
            axisX->append(s, j);
            j += 1;
        }
    }

    /*axisX->append("1986",0);
    axisX->append("1987",1);
    axisX->append("1988",2);
    axisX->append("1989",3);
    axisX->append("1990",4);
    axisX->append("1991",5);
    axisX->append("1992",6);*/
    chart->setAxisX(axisX, series);

    // Used to display the chart
    chartView = new QChartView(chart, this);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView -> setFixedSize(500, 400);
}
