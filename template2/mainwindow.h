#ifndef WIDGET_H
#define WIDGET_H
#include <DMainWindow>
#include <DGuiApplicationHelper>
#include <QWidget>
#include "widget.h"

DWIDGET_USE_NAMESPACE

class MainWindow : public DMainWindow
{
    Q_OBJECT

public:
    MainWindow(DMainWindow *parent = nullptr);
    ~MainWindow();
private:
    QWidget *w=new QWidget;
    void setTheme(DGuiApplicationHelper::ColorType);
};

#endif // WIDGET_H
