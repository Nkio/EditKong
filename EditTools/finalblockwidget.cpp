#include "finalblockwidget.h"
#include "ui_finalblockwidget.h"

FinalBlockWidget::FinalBlockWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FinalBlockWidget)
{
    ui->setupUi(this);
}

FinalBlockWidget::~FinalBlockWidget()
{
    delete ui;
}
