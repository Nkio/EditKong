#include "enemieswidget.h"
#include "ui_enemieswidget.h"

EnemiesWidget::EnemiesWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EnemiesWidget)
{
    ui->setupUi(this);
}

EnemiesWidget::~EnemiesWidget()
{
    delete ui;
}
