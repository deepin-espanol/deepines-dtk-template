#include "mainwindow.h"
#include <DWidgetUtil>
#include <DSearchEdit>
#include <DTitlebar>
#include <QDebug>
#include <QMenu>
#include <QAction>

MainWindow::MainWindow(DMainWindow *parent)
    : DMainWindow(parent)
{
    setCentralWidget(w);
    moveToCenter(this);
    MainWindow::resize(630,500);

    DSearchEdit *searchEdit = new DSearchEdit;
    titlebar()->setCustomWidget(searchEdit);
    searchEdit->setFixedWidth(200);
    searchEdit->show();

    QMenu *menu=new QMenu;
    QAction *action=new QAction("Action");
    menu->addAction(action);
    titlebar()->setMenu(menu);

    titlebar()->setIcon(QIcon(":/logo.svg"));

    connect(DGuiApplicationHelper::instance(), &DGuiApplicationHelper::themeTypeChanged,this,&MainWindow::setTheme);
}

MainWindow::~MainWindow()
{
    delete w;
}

void MainWindow::setTheme(DGuiApplicationHelper::ColorType theme)
{
    if(theme==DGuiApplicationHelper::LightType){
        qDebug()<<"Lighe";
    }else {
        qDebug()<<"Dark";
    }
}
