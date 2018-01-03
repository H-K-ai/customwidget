#include "mycustomwidget.h"
#include "ui_mycustomwidget.h"
#include <QTimer>

myCustomWidget::myCustomWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myCustomWidget)
{
    ui->setupUi(this);
    ui->curveChart->setTitle("简单曲线");



    dataTimer = new QTimer(this);
    dataTimer->setInterval(300);
    connect(dataTimer, SIGNAL(timeout()), this, SLOT(addData()));
    connect(dataTimer,SIGNAL(timeout()),this,SLOT(setValue()));
    dataTimer->start();
}

myCustomWidget::~myCustomWidget()
{
    delete ui;
}


void myCustomWidget::addData()
{
    ui->curveChart->addData(qrand()%100);
}


void myCustomWidget::setValue()
{
     ui->roundProgressBar->setValue(qrand()%100);

}


