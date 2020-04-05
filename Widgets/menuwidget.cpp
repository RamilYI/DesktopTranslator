#include "menuwidget.h"

MenuWidget::MenuWidget(QWidget *parent) : AbstractWidget(parent)
{
        grid = new QGridLayout(this);
        grid->setSpacing(1);
        translateFromBtn = std::make_unique<QComboBox>(this);
        translateIntoBtn = std::make_unique<QComboBox>(this);
        chooseServiceBtn = std::make_unique<QPushButton>("Choose Service", this);
        showHistoryBtn = std::make_unique<QPushButton>("History", this);
        addDictBtn = std::make_unique<QPushButton>("Add custom dictionary", this);
        hotkeysSettingsBtn = std::make_unique<QPushButton>("Hotkeys settings", this);
        exitBtn = std::make_unique<QPushButton>("Exit", this);
}

void MenuWidget::addWidgets(){
        grid->addWidget(translateFromBtn.release(), 0, 0);
        grid->addWidget(translateIntoBtn.release(), 0, 1);
        grid->addWidget(chooseServiceBtn.release(), 1, 0, 1,2);
        grid->addWidget(showHistoryBtn.release(), 2, 0, 1,2);
        grid->addWidget(addDictBtn.release(), 3, 0, 1,2);
        grid->addWidget(hotkeysSettingsBtn.release(), 4, 0, 1,2);
        grid->addWidget(exitBtn.release(), 5, 0, 1,2);
        setLayout(grid);
}
