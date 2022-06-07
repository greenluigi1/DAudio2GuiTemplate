
#include <QApplication>
#include <android/log.h>
#include "exampleguiapplication.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QGuiApplication::setQuitOnLastWindowClosed(true);
    ExampleGuiApplication testApplication = ExampleGuiApplication();
    testApplication.init(app, argc, argv);

    return app.exec();
}
