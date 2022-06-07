#ifndef CCOSUTILS_H
#define CCOSUTILS_H
#include <HBody.h>

namespace ccOSUtils
{
    const char *HDoorPositionToString(const ccos::vehicle::HDoorPosition &doorPosition);
    const char *HTriStateToString(ccos::vehicle::HTriState state);
    const char *HResultToString(ccos::HResult result);
}

#endif // CCOSUTILS_H
