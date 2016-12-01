#include "AutoMemoryOpener.h"

namespace angry_hax
{
	namespace memory
	{
		AutoMemoryOpener::AutoMemoryOpener(void* start_addr, void* end_addr) : MemoryOpener(start_addr, end_addr)
		{
			OpenMemory();
		}

		AutoMemoryOpener::AutoMemoryOpener(HANDLE process, HMODULE module) : MemoryOpener(process, module)
		{
			OpenMemory();
		}

		AutoMemoryOpener::~AutoMemoryOpener()
		{
			CloseMemory();
		}
	}
}
