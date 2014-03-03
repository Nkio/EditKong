#ifndef BLOCKSWIDGET_H
#define BLOCKSWIDGET_H

#include <QWidget>

namespace Ui {
class BlocksWidget;
}

class BlocksWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BlocksWidget(QWidget *parent = 0);
    ~BlocksWidget();

private:
    Ui::BlocksWidget *ui;
};

#endif // BLOCKSWIDGET_H
