#pragma once

#ifndef _DATA_MEMORY
#define _DATA_MEMORY
#include "DataMemoryObject.h"
#include "Unit.h"
#include "Struct.h"
#endif

#ifndef _DATA_EXCEPTION
#define _DATA_EXCEPTION
#include "UnitException.h"
#endif

namespace UDCL
{
	namespace Memory
	{
		class _UDCL DataMemoryObject;
		namespace Unit
		{
			class _UDCL DataUnit;
			class _UDCL LinkDataUnit;
			class _UDCL TemplateDataUnit;
		}
		namespace Struct
		{
			namespace Linear
			{
				namespace Constant
				{
					class _UDCL ConstantStruct;
				}
				namespace Linked
				{
					class _UDCL LinkedStruct;
				}
			}
		}
	}
	namespace Debug
	{
	}
	namespace Exception
	{
		namespace Unit
		{
			class _UDCL DataNodeException;
			class _UDCL DataUnitException;
		}
		namespace Struct 
		{
			class _UDCL DataStructException;
		}
	}
	namespace Security
	{
	}
}