#ifndef _sun_management_HotspotMemory_h_
#define _sun_management_HotspotMemory_h_
//$ class sun.management.HotspotMemory
//$ extends sun.management.HotspotMemoryMBean

#include <sun/management/HotspotMemoryMBean.h>

#pragma push_macro("COM_SUN_GC")
#undef COM_SUN_GC
#pragma push_macro("GC_COUNTER_NAME_PATTERN")
#undef GC_COUNTER_NAME_PATTERN
#pragma push_macro("JAVA_GC")
#undef JAVA_GC
#pragma push_macro("SUN_GC")
#undef SUN_GC

namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace management {
		class VMManagement;
	}
}

namespace sun {
	namespace management {

class HotspotMemory : public ::sun::management::HotspotMemoryMBean {
	$class(HotspotMemory, 0, ::sun::management::HotspotMemoryMBean)
public:
	HotspotMemory();
	void init$(::sun::management::VMManagement* vm);
	virtual ::java::util::List* getInternalMemoryCounters() override;
	::sun::management::VMManagement* jvm = nullptr;
	static $String* JAVA_GC;
	static $String* COM_SUN_GC;
	static $String* SUN_GC;
	static $String* GC_COUNTER_NAME_PATTERN;
};

	} // management
} // sun

#pragma pop_macro("COM_SUN_GC")
#pragma pop_macro("GC_COUNTER_NAME_PATTERN")
#pragma pop_macro("JAVA_GC")
#pragma pop_macro("SUN_GC")

#endif // _sun_management_HotspotMemory_h_