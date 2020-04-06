#ifndef ABSTRACTWIDGET_H
#define ABSTRACTWIDGET_H

#include <QWidget>

class AbstractWidget : public QWidget
{
    Q_OBJECT
public:
    explicit AbstractWidget(QWidget *parent = nullptr):QWidget(parent) {};
    void showWidget(){
            this->resize(400, 500);
            this->setWindowTitle("Desktop Translator");
            this->show();
    };
    virtual void addWidgets() = 0;
    virtual ~AbstractWidget(){
        ;
    }
signals:

};

#endif // ABSTRACTWIDGET_H
