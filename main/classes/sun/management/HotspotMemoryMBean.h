#ifndef _sun_management_HotspotMemoryMBean_h_
#define _sun_management_HotspotMemoryMBean_h_
//$ interface sun.management.HotspotMemoryMBean
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace management {

class $export HotspotMemoryMBean : public ::java::lang::Object {
	$interface(HotspotMemoryMBean, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::List* getInternalMemoryCounters() {return nullptr;}
};

	} // management
} // sun

#endif // _sun_management_HotspotMemoryMBean_h_