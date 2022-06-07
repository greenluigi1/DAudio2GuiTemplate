#include "exampleguiapplication.h"
#include <android/log.h>

ExampleGuiApplication::ExampleGuiApplication()
{

}

AppView *ExampleGuiApplication::createAppView(Application *application, const char *componentName)
{
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "TestGuiApplication::createAppView was called: %s", componentName);

    if (!strcmp(componentName, "com.greenluigi1.guiExample.TestAppView"))
    {
        __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "Launching TestGuiAppView");
        ExampleGuiAppView *appView = new ExampleGuiAppView(application, componentName);
        return appView;
    }

    return nullptr;
};

AppService *ExampleGuiApplication::createAppService(Application *application, const char *componentName)
{
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "TestGuiApplication::createAppService was called: %s", componentName);
    return nullptr;
};

EventReceiver *ExampleGuiApplication::createEventReceiver(const char *componentName)
{
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "TestGuiApplication::createEventReceiver was called: %s", componentName);
    return nullptr;
};
