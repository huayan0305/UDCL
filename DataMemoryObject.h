//DataMemoryObject.h

#pragma once

namespace UDCL
{ 
	namespace Memory
	{
		class _UDCL DataMemoryObject
		{
		//method
		public:
			DataMemoryObject();
			virtual ~DataMemoryObject();
			void virtual ThrowException() = 0;
			void virtual EndException() = 0;
		//varible
		protected:
			long tagError;
		};
	}
}


