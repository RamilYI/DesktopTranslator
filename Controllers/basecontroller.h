#ifndef BASECONTROLLER_H
#define BASECONTROLLER_H

#include <QObject>

class BaseController : public QObject
{
    Q_OBJECT
public:
    explicit BaseController(QObject *parent = nullptr);

signals:

};

#endif // BASECONTROLLER_H
