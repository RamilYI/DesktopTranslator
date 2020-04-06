#ifndef MENUWIDGETCONTROLLER_H
#define MENUWIDGETCONTROLLER_H

#include <QObject>
#include "abstractcontroller.h"
#include "basecontroller.h"
#include "Widgets/menuwidget.h"
#include "Common/Settings.h"
#include <memory>
class MenuWidgetController : public AbstractController
{
    Q_OBJECT
public:
    explicit MenuWidgetController(QObject *parent = nullptr);
    void setup() override;
private:
    void connectWidgets();
    Settings* settings;
    MenuWidget ui;
    std::map<QString, QString> languageMap;
private slots:
    void setDestLang(const QString& destParameter);
    void setSrcLang(const QString& destParameter);
    void createChooseServiceWidget();
signals:

};

#endif // MENUWIDGETCONTROLLER_H
