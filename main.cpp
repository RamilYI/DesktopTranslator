#include "widget.h"

#include <QApplication>
#include "Controllers/basecontroller.h"
#include "Controllers/abstractcontroller.h"
#include "Controllers/chooseservicewidgetcontroller.h"
#include "Controllers/menuwidgetcontroller.h"
#include <memory>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto menuWidgetController = new MenuWidgetController;
    BaseController controller(menuWidgetController);
    controller.ShowWindow();
    return a.exec();
}
