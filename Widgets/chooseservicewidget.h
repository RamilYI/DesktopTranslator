#ifndef CHOOSESERVICEWIDGET_H
#define CHOOSESERVICEWIDGET_H

#include <QWidget>
#include <QWidget>
#include <QApplication>
#include <QGridLayout>
#include <QComboBox>
#include <QPushButton>
#include "abstractwidget.h"

class ChooseServiceWidget : public AbstractWidget
{
    Q_OBJECT
public:
    explicit ChooseServiceWidget(QWidget *parent = nullptr);
    void addWidgets() override;
    QGridLayout* grid;
    std::unique_ptr<QComboBox> translateFromBtn;
    std::unique_ptr<QComboBox> translateIntoBtn;
    std::unique_ptr<QPushButton> chooseServiceBtn;
signals:

};

#endif // CHOOSESERVICEWIDGET_H
