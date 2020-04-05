#ifndef MENUWIDGET_H
#define MENUWIDGET_H

#include <QWidget>
#include <QApplication>
#include <QGridLayout>
#include <QComboBox>
#include <QPushButton>
#include "abstractwidget.h"

class MenuWidget : public AbstractWidget
{
    Q_OBJECT
public:
    explicit MenuWidget(QWidget *parent = nullptr);
    void addWidgets() override;
        QGridLayout* grid;
        std::unique_ptr<QComboBox> translateFromBtn;
        std::unique_ptr<QComboBox> translateIntoBtn;
        std::unique_ptr<QPushButton> chooseServiceBtn;
        std::unique_ptr<QPushButton> showHistoryBtn;
        std::unique_ptr<QPushButton> addDictBtn;
        std::unique_ptr<QPushButton> hotkeysSettingsBtn;
        std::unique_ptr<QPushButton> exitBtn;
signals:

};

#endif // MENUWIDGET_H
