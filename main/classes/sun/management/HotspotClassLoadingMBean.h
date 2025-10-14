#ifndef _sun_management_HotspotClassLoadingMBean_h_
#define _sun_management_HotspotClassLoadingMBean_h_
//$ interface sun.management.HotspotClassLoadingMBean
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace management {

class $export HotspotClassLoadingMBean : public ::java::lang::Object {
	$interface(HotspotClassLoadingMBean, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t getClassInitializationTime() {return 0;}
	virtual int64_t getClassLoadingTime() {return 0;}
	virtual int64_t getClassVerificationTime() {return 0;}
	virtual int64_t getInitializedClassCount() {return 0;}
	virtual ::java::util::List* getInternalClassLoadingCounters() {return nullptr;}
	virtual int64_t getLoadedClassSize() {return 0;}
	virtual int64_t getMethodDataSize() {return 0;}
	virtual int64_t getUnloadedClassSize() {return 0;}
};

	} // management
} // sun

#endif // _sun_management_HotspotClassLoadingMBean_h_