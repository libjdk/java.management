#ifndef _sun_management_HotspotClassLoading_h_
#define _sun_management_HotspotClassLoading_h_
//$ class sun.management.HotspotClassLoading
//$ extends sun.management.HotspotClassLoadingMBean

#include <sun/management/HotspotClassLoadingMBean.h>

#pragma push_macro("CLS_COUNTER_NAME_PATTERN")
#undef CLS_COUNTER_NAME_PATTERN
#pragma push_macro("COM_SUN_CLS")
#undef COM_SUN_CLS
#pragma push_macro("JAVA_CLS")
#undef JAVA_CLS
#pragma push_macro("SUN_CLS")
#undef SUN_CLS

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

class HotspotClassLoading : public ::sun::management::HotspotClassLoadingMBean {
	$class(HotspotClassLoading, 0, ::sun::management::HotspotClassLoadingMBean)
public:
	HotspotClassLoading();
	void init$(::sun::management::VMManagement* vm);
	virtual int64_t getClassInitializationTime() override;
	virtual int64_t getClassLoadingTime() override;
	virtual int64_t getClassVerificationTime() override;
	virtual int64_t getInitializedClassCount() override;
	virtual ::java::util::List* getInternalClassLoadingCounters() override;
	virtual int64_t getLoadedClassSize() override;
	virtual int64_t getMethodDataSize() override;
	virtual int64_t getUnloadedClassSize() override;
	::sun::management::VMManagement* jvm = nullptr;
	static $String* JAVA_CLS;
	static $String* COM_SUN_CLS;
	static $String* SUN_CLS;
	static $String* CLS_COUNTER_NAME_PATTERN;
};

	} // management
} // sun

#pragma pop_macro("CLS_COUNTER_NAME_PATTERN")
#pragma pop_macro("COM_SUN_CLS")
#pragma pop_macro("JAVA_CLS")
#pragma pop_macro("SUN_CLS")

#endif // _sun_management_HotspotClassLoading_h_