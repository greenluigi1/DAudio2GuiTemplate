#include "ccosutils.h"

const char *ccOSUtils::HDoorPositionToString(const ccos::vehicle::HDoorPosition &doorPosition)
{
    switch(doorPosition){
    case ccos::vehicle::HDoorPosition::FRONT_LEFT:
        return "Front Left";
    case ccos::vehicle::HDoorPosition::FRONT_RIGHT:
        return "Front Right";
    case ccos::vehicle::HDoorPosition::REAR_LEFT:
        return "Rear Left";
    case ccos::vehicle::HDoorPosition::REAR_RIGHT:
        return "Rear Right";
    case ccos::vehicle::HDoorPosition::TAIL:
        return "Tailgate";
    default:
        return "Unknown";
    }
}

const char *ccOSUtils::HTriStateToString(ccos::vehicle::HTriState state)
{
    switch (state)
    {
    case ccos::vehicle::HTriState::FALSE:
        return "False";
    case ccos::vehicle::HTriState::TRUE:
        return "True";
    case ccos::vehicle::HTriState::INVALID:
        return "INVALID";
    case ccos::vehicle::HTriState::MAX:
        return "MAX";
    default:
        return "Other";
    }
}

const char *ccOSUtils::HResultToString(ccos::HResult result)
{
    switch (result)
    {
    case ccos::HResult::INVALID:
        return "Invalid";
    case ccos::HResult::OK:
        return "OK";
    case ccos::HResult::ERROR:
        return "ERROR";
    case ccos::HResult::NOT_SUPPORTED:
        return "NOT_SUPPORTED";
    case ccos::HResult::OUT_OF_RANGE:
        return "OUT_OF_RANGE";
    case ccos::HResult::CONNECTION_FAIL:
        return "CONNECTION_FAIL";
    case ccos::HResult::NO_RESPONSE:
        return "NO_RESPONSE";
    case ccos::HResult::UNAVAILABLE:
        return "UNAVAILABLE";
    case ccos::HResult::NULLPOINTER:
        return "NULLPOINTER";
    case ccos::HResult::NOT_INITIALIZED:
        return "NOT_INITIALIZED";
    case ccos::HResult::TIMEOUT:
        return "TIMEOUT";
    case ccos::HResult::PERMISSION_DENIED:
        return "PERMISSION_DENIED";
    case ccos::HResult::ALREADY_EXIST:
        return "ALREADY_EXIST";
    case ccos::HResult::SOME_UNAVAILABLE:
        return "SOME_UNAVAILABLE";
    case ccos::HResult::INVALID_RESULT:
        return "INVALID_RESULT";
    case ccos::HResult::MAX:
        return "MAX";
    default:
        return "Other";
    }
}
