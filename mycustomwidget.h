#ifndef MYCUSTOMWIDGET_H
#define MYCUSTOMWIDGET_H

#include <QWidget>

namespace Ui {
class myCustomWidget;
}

class myCustomWidget : public QWidget
{
    Q_OBJECT

public:
    explicit myCustomWidget(QWidget *parent = 0);
    ~myCustomWidget();

private slots:
    void addData();
    void setValue();


private:
    Ui::myCustomWidget *ui;
    QTimer* dataTimer;
};

#endif // MYCUSTOMWIDGET_H
