#include "basecontroller.h"
#include "menuwidgetcontroller.h"
#include "chooseservicewidgetcontroller.h"

BaseController::BaseController(AbstractController* controller, QObject *parent) : QObject(parent)
{
    m_controller = controller;
    m_controller->setContext(this);
}

void BaseController::ShowWindow(){
    m_controller->setup();
}

void BaseController::TransitionTo(AbstractController* controller){
    m_controller = controller;
}
