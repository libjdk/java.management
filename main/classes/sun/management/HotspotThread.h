#ifndef _sun_management_HotspotThread_h_
#define _sun_management_HotspotThread_h_
//$ class sun.management.HotspotThread
//$ extends sun.management.HotspotThreadMBean

#include <java/lang/Array.h>
#include <sun/management/HotspotThreadMBean.h>

#pragma push_macro("COM_SUN_THREADS")
#undef COM_SUN_THREADS
#pragma push_macro("JAVA_THREADS")
#undef JAVA_THREADS
#pragma push_macro("SUN_THREADS")
#undef SUN_THREADS
#pragma push_macro("THREADS_COUNTER_NAME_PATTERN")
#undef THREADS_COUNTER_NAME_PATTERN

namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace sun {
	namespace management {
		class VMManagement;
	}
}

namespace sun {
	namespace management {

class HotspotThread : public ::sun::management::HotspotThreadMBean {
	$class(HotspotThread, 0, ::sun::management::HotspotThreadMBean)
public:
	HotspotThread();
	void init$(::sun::management::VMManagement* vm);
	virtual int32_t getInternalThreadCount() override;
	virtual ::java::util::Map* getInternalThreadCpuTimes() override;
	virtual int32_t getInternalThreadTimes0($StringArray* names, $longs* times);
	virtual ::java::util::List* getInternalThreadingCounters() override;
	::sun::management::VMManagement* jvm = nullptr;
	static $String* JAVA_THREADS;
	static $String* COM_SUN_THREADS;
	static $String* SUN_THREADS;
	static $String* THREADS_COUNTER_NAME_PATTERN;
};

	} // management
} // sun

#pragma pop_macro("COM_SUN_THREADS")
#pragma pop_macro("JAVA_THREADS")
#pragma pop_macro("SUN_THREADS")
#pragma pop_macro("THREADS_COUNTER_NAME_PATTERN")

#endif // _sun_management_HotspotThread_h_