#ifndef _sun_management_HotspotRuntimeMBean_h_
#define _sun_management_HotspotRuntimeMBean_h_
//$ interface sun.management.HotspotRuntimeMBean
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace management {

class $export HotspotRuntimeMBean : public ::java::lang::Object {
	$interface(HotspotRuntimeMBean, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::List* getInternalRuntimeCounters() {return nullptr;}
	virtual int64_t getSafepointCount() {return 0;}
	virtual int64_t getSafepointSyncTime() {return 0;}
	virtual int64_t getTotalSafepointTime() {return 0;}
};

	} // management
} // sun

#endif // _sun_management_HotspotRuntimeMBean_h_