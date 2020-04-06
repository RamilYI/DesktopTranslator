#ifndef ABSTRACTCONTROLLER_H
#define ABSTRACTCONTROLLER_H

#include <QObject>
#include <memory>
#include "basecontroller.h"
// переименовать basecontroller в контроллерманагер
class AbstractController : public QObject
{
    Q_OBJECT
public:
    explicit AbstractController(QObject *parent = nullptr):QObject(parent) {};
    virtual void setup() = 0;
    void setContext(BaseController* baseController){
        m_BaseController = baseController;
    }
    virtual ~AbstractController(){
        delete m_BaseController;
    }
protected:
    BaseController* m_BaseController;
signals:

};

#endif // ABSTRACTCONTROLLER_H
