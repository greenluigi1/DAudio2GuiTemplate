#ifndef EXAMPLEGUIAPPLICATION_H
#define EXAMPLEGUIAPPLICATION_H

#include <helix/app/ApplicationQt.h>
#include <helix/app/AppView.h>
#include <helix/display/HelixQt.h>
#include <helix/app/EventReceiver.h>
#include <helix/app/AppManager.h>
#include "exampleguiappview.h"

class ExampleGuiApplication : public ApplicationQt
{
public:
    ExampleGuiApplication();
protected:
    AppView *createAppView(Application *application, const char *componentName) override;
    AppService *createAppService(Application *application, const char *componentName) override;
    EventReceiver *createEventReceiver(const char *componentName) override;
};

#endif // EXAMPLEGUIAPPLICATION_H
