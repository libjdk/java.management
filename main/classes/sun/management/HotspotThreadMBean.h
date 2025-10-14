#ifndef _sun_management_HotspotThreadMBean_h_
#define _sun_management_HotspotThreadMBean_h_
//$ interface sun.management.HotspotThreadMBean
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace sun {
	namespace management {

class $export HotspotThreadMBean : public ::java::lang::Object {
	$interface(HotspotThreadMBean, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getInternalThreadCount() {return 0;}
	virtual ::java::util::Map* getInternalThreadCpuTimes() {return nullptr;}
	virtual ::java::util::List* getInternalThreadingCounters() {return nullptr;}
};

	} // management
} // sun

#endif // _sun_management_HotspotThreadMBean_h_