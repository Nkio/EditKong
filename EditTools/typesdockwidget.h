#ifndef TYPESDOCKWIDGET_H
#define TYPESDOCKWIDGET_H

#include <QDockWidget>

namespace Ui {
class TypesDockWidget;
}

class TypesDockWidget : public QDockWidget
{
    Q_OBJECT

public:
    explicit TypesDockWidget(QWidget *parent = 0);
    ~TypesDockWidget();

private:
    Ui::TypesDockWidget *ui;
};

#endif // TYPESDOCKWIDGET_H
