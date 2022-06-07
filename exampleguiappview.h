#ifndef EXAMPLEGUIAPPVIEW_H
#define EXAMPLEGUIAPPVIEW_H

#include <helix/app/ApplicationQt.h>
#include <helix/app/AppView.h>
#include <helix/display/HelixQt.h>
#include <helix/app/EventReceiver.h>
#include <helix/app/AppManager.h>
#include "mainwindow.h"
#include <android/log.h>
#include "exampleeventreceiver.h"

class ExampleGuiAppView : public AppView
{
public:
    ExampleGuiAppView(Application *application, const char *name);
    void onCreate(int32_t argc, const char *argv[]) override;
    void onStart() override;
    void onNewStart(int32_t argc, const char *argv[]) override;
    void onStop() override;
    void onDestroy() override;
private:
    MainWindow *mainWindow;
    ExampleEventReceiver *eventReceiver;

};

#endif // EXAMPLEGUIAPPVIEW_H
