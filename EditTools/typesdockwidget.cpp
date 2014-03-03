#include "typesdockwidget.h"
#include "ui_typesdockwidget.h"

TypesDockWidget::TypesDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::TypesDockWidget)
{
    ui->setupUi(this);
}

TypesDockWidget::~TypesDockWidget()
{
    delete ui;
}
