#include "exampleguiappview.h"

ExampleGuiAppView::ExampleGuiAppView(Application *application, const char *name)
    : AppView(application, name)
{
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "TestGuiAppView::Constructor called");
}

void ExampleGuiAppView::onCreate(int32_t argc, const char *argv[])
{
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "TestGuiAppView::onCreate called");
    mainWindow = new MainWindow(this, 0);
    HelixQt::Window::init(mainWindow, this);
    HelixQt::Window::setViewSizeAlwaysFull(mainWindow, false);

    eventReceiver = new ExampleEventReceiver();

    this->getAppManager()->registerEventReceiver("com.mobis.caudio.ACTION.DOOR_OPEN", this->eventReceiver);
}

void ExampleGuiAppView::onStart()
{
    __android_log_print(ANDROID_LOG_DEBUG, "TestGuiAppView", "TestGuiAppView::onStart called");
    HelixQt::Window::show(mainWindow);
}

void ExampleGuiAppView::onNewStart(int32_t argc, const char **argv)
{
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "TestGuiAppView::onNewStart called");
    HelixQt::Window::show(mainWindow);
}

void ExampleGuiAppView::onStop()
{
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "TestGuiAppView::onStop called");
    HelixQt::Window::hide(mainWindow);
}

void ExampleGuiAppView::onDestroy()
{
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "TestGuiAppView::onDestroy called");

    if (mainWindow)
    {
        HelixQt::Window::finish(mainWindow);
        delete mainWindow;
    }

    this->getAppManager()->unregisterEventReceiver("com.mobis.caudio.ACTION.DOOR_OPEN", this->eventReceiver);

    if (eventReceiver)
    {
        delete eventReceiver;
    }

    qApp->quit();
}
