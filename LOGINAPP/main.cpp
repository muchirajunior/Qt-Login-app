#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
int main(int argc, char *argv[])
{

 QApplication app(argc, argv);
 QSplashScreen *spalsh= new QSplashScreen;
 spalsh->showMessage("muchira junior login ",  Qt::AlignLeft, Qt::black);
 spalsh->show();

 MainWindow w;
 QTimer::singleShot(2000,spalsh,SLOT(close()));
 QTimer::singleShot(2000,&w,SLOT(show()));

    return app.exec();

}
