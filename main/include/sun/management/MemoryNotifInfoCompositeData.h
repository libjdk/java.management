#ifndef _sun_management_MemoryNotifInfoCompositeData_h_
#define _sun_management_MemoryNotifInfoCompositeData_h_
//$ class sun.management.MemoryNotifInfoCompositeData
//$ extends sun.management.LazyCompositeData

#include <java/lang/Array.h>
#include <sun/management/LazyCompositeData.h>

#pragma push_macro("COUNT")
#undef COUNT
#pragma push_macro("POOL_NAME")
#undef POOL_NAME
#pragma push_macro("USAGE")
#undef USAGE

namespace java {
	namespace lang {
		namespace management {
			class MemoryNotificationInfo;
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

class $import MemoryNotifInfoCompositeData : public ::sun::management::LazyCompositeData {
	$class(MemoryNotifInfoCompositeData, 0, ::sun::management::LazyCompositeData)
public:
	MemoryNotifInfoCompositeData();
	void init$(::java::lang::management::MemoryNotificationInfo* info);
	virtual ::javax::management::openmbean::CompositeData* getCompositeData() override;
	static int64_t getCount(::javax::management::openmbean::CompositeData* cd);
	virtual ::java::lang::management::MemoryNotificationInfo* getMemoryNotifInfo();
	static $String* getPoolName(::javax::management::openmbean::CompositeData* cd);
	static ::java::lang::management::MemoryUsage* getUsage(::javax::management::openmbean::CompositeData* cd);
	static ::javax::management::openmbean::CompositeData* toCompositeData(::java::lang::management::MemoryNotificationInfo* info);
	static void validateCompositeData(::javax::management::openmbean::CompositeData* cd);
	::java::lang::management::MemoryNotificationInfo* memoryNotifInfo = nullptr;
	static ::javax::management::openmbean::CompositeType* memoryNotifInfoCompositeType;
	static $String* POOL_NAME;
	static $String* USAGE;
	static $String* COUNT;
	static $StringArray* memoryNotifInfoItemNames;
	static const int64_t serialVersionUID = (int64_t)0xE6F2E9CA149B2065;
};

	} // management
} // sun

#pragma pop_macro("COUNT")
#pragma pop_macro("POOL_NAME")
#pragma pop_macro("USAGE")

#endif // _sun_management_MemoryNotifInfoCompositeData_h_