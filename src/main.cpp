#include "imageview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
        QApplication app(argc, argv);
        ImageView w;
        w.show();

        return app.exec();
}

