#ifndef TARGETWIDGET_H
#define TARGETWIDGET_H

#include <QWidget>

namespace Ui {
class TargetWidget;
}

class TargetWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TargetWidget(QWidget *parent = 0);
    ~TargetWidget();

private:
    Ui::TargetWidget *ui;
};

#endif // TARGETWIDGET_H
