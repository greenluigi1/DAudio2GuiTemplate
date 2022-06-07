#ifndef EXAMPLEEVENTRECEIVER_H
#define EXAMPLEEVENTRECEIVER_H

#include <helix/app/EventReceiver.h>

class ExampleEventReceiver : public EventReceiver
{
public:
    ExampleEventReceiver();
    void onReceive(const char *event, int32_t argc, const char *argv[]) override;
};

#endif // EXAMPLEEVENTRECEIVER_H
