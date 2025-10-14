#ifndef _sun_management_MemoryUsageCompositeData_h_
#define _sun_management_MemoryUsageCompositeData_h_
//$ class sun.management.MemoryUsageCompositeData
//$ extends sun.management.LazyCompositeData

#include <java/lang/Array.h>
#include <sun/management/LazyCompositeData.h>

#pragma push_macro("COMMITTED")
#undef COMMITTED
#pragma push_macro("INIT")
#undef INIT
#pragma push_macro("MAX")
#undef MAX
#pragma push_macro("USED")
#undef USED

namespace java {
	namespace lang {
		namespace management {
			class MemoryUsage;
		}
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class CompositeData;
			class CompositeType;
		}
	}
}

namespace sun {
	namespace management {

class $export MemoryUsageCompositeData : public ::sun::management::LazyCompositeData {
	$class(MemoryUsageCompositeData, 0, ::sun::management::LazyCompositeData)
public:
	MemoryUsageCompositeData();
	void init$(::java::lang::management::MemoryUsage* u);
	static int64_t getCommitted(::javax::management::openmbean::CompositeData* cd);
	virtual ::javax::management::openmbean::CompositeData* getCompositeData() override;
	static int64_t getInit(::javax::management::openmbean::CompositeData* cd);
	static int64_t getMax(::javax::management::openmbean::CompositeData* cd);
	virtual ::java::lang::management::MemoryUsage* getMemoryUsage();
	static ::javax::management::openmbean::CompositeType* getMemoryUsageCompositeType();
	static int64_t getUsed(::javax::management::openmbean::CompositeData* cd);
	static ::javax::management::openmbean::CompositeData* toCompositeData(::java::lang::management::MemoryUsage* u);
	static void validateCompositeData(::javax::management::openmbean::CompositeData* cd);
	::java::lang::management::MemoryUsage* usage = nullptr;
	static ::javax::management::openmbean::CompositeType* memoryUsageCompositeType;
	static $String* INIT;
	static $String* USED;
	static $String* COMMITTED;
	static $String* MAX;
	static $StringArray* memoryUsageItemNames;
	static const int64_t serialVersionUID = (int64_t)0x89FAAFE6AB561CA1;
};

	} // management
} // sun

#pragma pop_macro("COMMITTED")
#pragma pop_macro("INIT")
#pragma pop_macro("MAX")
#pragma pop_macro("USED")

#endif // _sun_management_MemoryUsageCompositeData_h_