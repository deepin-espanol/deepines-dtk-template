#include "mainwindow.h"
#include <DApplication>
#include <DWidgetUtil>
#include <DAboutDialog>

DWIDGET_USE_NAMESPACE
int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();
    DApplication a(argc, argv);
    DAboutDialog dialog;
    a.loadTranslator();
    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
    a.setApplicationName("Deepines Template1");
    a.setProductName("Deepines Template1");
    a.setAboutDialog(&dialog);

    //Title
     dialog.setWindowTitle("Deepines Template1");
     //descrition
     dialog.setProductName("<span>Description</span>");
     //Icons
     dialog.setProductIcon(QIcon("://logo.svg"));
     //Organization logo
     dialog.setCompanyLogo(QPixmap("://Logo-Racoon.png"));
     //about
     dialog.setDescription(
         "<span style=' font-size:8pt; font-weight:600;'>Deepin en Español </span>"
         "<a href='https://deepinenespañol.org'>https://deepinenespañol.org</a><br/>"
         "<span style=' font-size:8pt; font-weight:600;'>Deepin Latin Code - developers</span>");
     dialog.setVersion(DApplication::buildVersion("Version 0.1"));
     dialog.setWebsiteName("deepinenespañol.org");
     dialog.setWebsiteLink("https://deepinenespañol.org");


    MainWindow w;
    w.show();

    Dtk::Widget::moveToCenter(&w);
    return a.exec();
}
