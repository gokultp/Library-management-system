#include "library_main.h"
#include <QApplication>
#include<QSplashScreen>
#include<unistd.h>
#include<QTimer>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);



    QPixmap pixmap(":/new/prefix1/splash.png");
        QSplashScreen splash(pixmap);



 splash.show();



    Library_Main w;
w.setWindowOpacity(0);
    w.showMaximized();
    QTimer::singleShot(4000, &splash, SLOT(close()));
    QTimer::singleShot(4000, &w, SLOT(sh()));

    
    return app.exec();
}


