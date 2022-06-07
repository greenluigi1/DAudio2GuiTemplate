#include "exampleeventreceiver.h"
#include <android/log.h>
#include <string>

ExampleEventReceiver::ExampleEventReceiver()
{

}

void ExampleEventReceiver::onReceive(const char *event, int32_t argc, const char **argv)
{
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "TestEventReceiver::onReceive Event was called: %s (%d arguments)", event, argc);
}
