#include "menuwidgetcontroller.h"
#include "chooseservicewidgetcontroller.h"

MenuWidgetController::MenuWidgetController(QObject *parent) : AbstractController(parent)
{
    settings = &Settings::getInstance();
    languageMap = {{"English", "en"},{"Russian","ru"}};
    QStringList langs = {"English", "Russian"};
    settings->translateFrom = langs[0];
    settings->translateInto = langs[0];
    ui.translateFromBtn->addItems(langs);
    ui.translateIntoBtn->addItems(langs);
}

void MenuWidgetController::setup(){
    connectWidgets();
    ui.addWidgets();
    ui.showWidget();
}

void MenuWidgetController::connectWidgets(){
    connect(ui.exitBtn.get(), &QPushButton::clicked, qApp, &QApplication::quit);
    connect(ui.translateFromBtn.get(), static_cast<void(QComboBox::*)(const QString &)>(&QComboBox::activated),
            this, &MenuWidgetController::setDestLang);
    connect(ui.translateIntoBtn.get(), static_cast<void(QComboBox::*)(const QString &)>(&QComboBox::activated),
            this, &MenuWidgetController::setSrcLang);
    connect(ui.chooseServiceBtn.get(), &QPushButton::clicked, this, &MenuWidgetController::createChooseServiceWidget);
}

void MenuWidgetController::setDestLang(const QString & destParameter){
    settings->translateFrom = destParameter;
}

void MenuWidgetController::setSrcLang(const QString & srcParameter){
    settings->translateInto = srcParameter;
}

void MenuWidgetController::createChooseServiceWidget(){
    ui.close();
    auto chooseServiceController = new ChooseServiceWIdgetController;
    m_BaseController->TransitionTo(chooseServiceController);
    m_BaseController->ShowWindow();
}
