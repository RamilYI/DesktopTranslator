#ifndef BASECONTROLLER_H
#define BASECONTROLLER_H

#include <QObject>
#include "Common/WIDGETS.h"
#include <memory>
class AbstractController;

class BaseController : public QObject
{
    Q_OBJECT
public:
    explicit BaseController(AbstractController* controller, QObject *parent = nullptr);
    void ShowWindow();
    void TransitionTo(AbstractController* controller);
private:
    AbstractController* m_controller;
};

#endif // BASECONTROLLER_H
