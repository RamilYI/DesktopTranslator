#ifndef CHOOSESERVICEWIDGETCONTROLLER_H
#define CHOOSESERVICEWIDGETCONTROLLER_H

#include <QObject>
#include "abstractcontroller.h"
#include "Widgets/chooseservicewidget.h"
class ChooseServiceWIdgetController : public AbstractController
{
    Q_OBJECT
public:
    ChooseServiceWIdgetController(QObject *parent = nullptr);
    void setup() override;
private:
    ChooseServiceWidget ui;
};

#endif // CHOOSESERVICEWIDGETCONTROLLER_H
