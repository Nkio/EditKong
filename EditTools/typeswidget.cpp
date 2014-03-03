#include "typeswidget.h"
#include "ui_typeswidget.h"

TypesWidget::TypesWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TypesWidget)
{
    ui->setupUi(this);
}

TypesWidget::~TypesWidget()
{
    delete ui;
}
