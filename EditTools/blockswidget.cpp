#include "blockswidget.h"
#include "ui_blockswidget.h"

BlocksWidget::BlocksWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BlocksWidget)
{
    ui->setupUi(this);
}

BlocksWidget::~BlocksWidget()
{
    delete ui;
}
