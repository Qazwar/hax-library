#pragma once
#include <Psapi.h>

namespace angry_hax
{
	namespace globals
	{
		namespace data
		{
			template<typename T>
			T& GetGlobalAtOffset( HMODULE module, unsigned int offset )
			{
				MODULEINFO mi;
				GetModuleInformation(GetCurrentProcess(),module,&mi,sizeof(MODULEINFO));

				return *((T*)((char*)mi.lpBaseOfDll + offset));
			}
		}
	}
}