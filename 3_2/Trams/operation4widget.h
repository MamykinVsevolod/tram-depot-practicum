#ifndef OPERATION4WIDGET_H
#define OPERATION4WIDGET_H

#include <QWidget>
#include <bookFile.h>
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
namespace Ui {
class operation4Widget;
}

class operation4Widget : public QWidget
{
    Q_OBJECT

public:
    explicit operation4Widget(QWidget *parent = nullptr);
    ~operation4Widget();
    QChartView *chartView;

private:
    Ui::operation4Widget *ui;
public slots:
    void showEvent(QShowEvent *event);
};

#endif // OPERATION4WIDGET_H
