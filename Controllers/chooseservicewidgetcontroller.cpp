#include "chooseservicewidgetcontroller.h"

ChooseServiceWIdgetController::ChooseServiceWIdgetController(QObject *parent) : AbstractController(parent)
{

}

void ChooseServiceWIdgetController::setup(){
    ui.addWidgets();
    ui.showWidget();
}
