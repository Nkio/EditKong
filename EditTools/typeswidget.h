#ifndef TYPESWIDGET_H
#define TYPESWIDGET_H

#include <QWidget>

namespace Ui {
class TypesWidget;
}

class TypesWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TypesWidget(QWidget *parent = 0);
    ~TypesWidget();

private:
    Ui::TypesWidget *ui;
};

#endif // TYPESWIDGET_H
