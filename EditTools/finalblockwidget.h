#ifndef FINALBLOCKWIDGET_H
#define FINALBLOCKWIDGET_H

#include <QWidget>

namespace Ui {
class FinalBlockWidget;
}

class FinalBlockWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FinalBlockWidget(QWidget *parent = 0);
    ~FinalBlockWidget();

private:
    Ui::FinalBlockWidget *ui;
};

#endif // FINALBLOCKWIDGET_H
