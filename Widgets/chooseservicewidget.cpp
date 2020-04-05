#include "chooseservicewidget.h"

ChooseServiceWidget::ChooseServiceWidget(QWidget *parent) : AbstractWidget(parent)
{
    grid = new QGridLayout(this);
    grid->setSpacing(1);
    translateFromBtn = std::make_unique<QComboBox>(this);
    translateIntoBtn = std::make_unique<QComboBox>(this);
    chooseServiceBtn = std::make_unique<QPushButton>("Choose Service", this);
}

void ChooseServiceWidget::addWidgets(){
    grid->addWidget(translateFromBtn.release(), 0, 0);
    grid->addWidget(translateIntoBtn.release(), 0, 1);
    grid->addWidget(chooseServiceBtn.release(), 1, 0, 1,2);
    setLayout(grid);
}
