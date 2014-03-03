#ifndef ENEMIESWIDGET_H
#define ENEMIESWIDGET_H

#include <QWidget>

namespace Ui {
class EnemiesWidget;
}

class EnemiesWidget : public QWidget
{
    Q_OBJECT

public:
    explicit EnemiesWidget(QWidget *parent = 0);
    ~EnemiesWidget();

private:
    Ui::EnemiesWidget *ui;
};

#endif // ENEMIESWIDGET_H
