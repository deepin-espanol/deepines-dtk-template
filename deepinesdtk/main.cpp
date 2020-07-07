#include "mainwindow.h"
#include <DApplication>
#include <QApplication>
#include <DWidgetUtil>
#include <DAboutDialog>

DWIDGET_USE_NAMESPACE
int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();
    DApplication a(argc, argv);
    DAboutDialog dialog;

     a.setAttribute(Qt::AA_UseHighDpiPixmaps);
     a.setProductName("Deepines Template");
     a.setApplicationName("Deepines Template");
     a.setAboutDialog(&dialog);

     //Title
     dialog.setWindowTitle("Deepines Template");
     //descrition
     dialog.setProductName("<span>Description</span>");
     //Icons
        //a.setProductIcon(QIcon(":/imege/deepines-template.svg"));
        //dialog.setProductIcon(QIcon(":/imege/deepines-template.svg"));
     //Organization logo
        //dialog.setCompanyLogo(QPixmap(":/image/deepines.png"));
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
