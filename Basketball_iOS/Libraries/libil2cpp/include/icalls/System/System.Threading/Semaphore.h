#pragma once

#include <stdint.h>
#include "il2cpp-config.h"
#include "object-internals.h"

struct Il2CppString;

namespace il2cpp
{
namespace icalls
{
namespace System
{
namespace System
{
namespace Threading
{
    class LIBIL2CPP_CODEGEN_API Semaphore
    {
    public:
#if !NET_4_0
        static intptr_t CreateSemaphore_internal(int32_t initialCount, int32_t maximumCount, Il2CppString* name, bool* created);
        static int32_t ReleaseSemaphore_internal(intptr_t handlePtr, int32_t releaseCount, bool* fail);
#else
        static intptr_t CreateSemaphore_internal40(int32_t initialCount, int32_t maximumCount, Il2CppString* name, int32_t* errorCode);
        static bool ReleaseSemaphore_internal40(intptr_t handlePtr, int32_t releaseCount, int32_t* previousCount);
#endif
        static intptr_t OpenSemaphore_internal(Il2CppString* name, int32_t rights, int32_t* error);
    };
} /* namespace Threading */
} /* namespace System */
} /* namespace System */
} /* namespace icalls */
} /* namespace il2cpp */
