#ifndef MENUWIDGETCONTROLLER_H
#define MENUWIDGETCONTROLLER_H

#include <QObject>
#include <QWidget>

class MenuWidgetController : public QObject
{
    Q_OBJECT
public:
    explicit MenuWidgetController(QObject *parent = nullptr);

signals:

};

#endif // MENUWIDGETCONTROLLER_H
