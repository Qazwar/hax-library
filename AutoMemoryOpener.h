#pragma once
/*************************************************
* RAII class to open automatically on obj create *
*************************************************/

#include "MemoryOpener.h"

namespace angry_hax
{
	namespace memory
	{
		class AutoMemoryOpener : public MemoryOpener
		{
		public:
			AutoMemoryOpener(void* start_addr, void* end_addr);
			AutoMemoryOpener(HANDLE process, HMODULE module);
			~AutoMemoryOpener();
		private:
		};
	}
}
