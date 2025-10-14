#ifndef _sun_management_HotspotRuntime_h_
#define _sun_management_HotspotRuntime_h_
//$ class sun.management.HotspotRuntime
//$ extends sun.management.HotspotRuntimeMBean

#include <sun/management/HotspotRuntimeMBean.h>

#pragma push_macro("COM_SUN_PROPERTY")
#undef COM_SUN_PROPERTY
#pragma push_macro("COM_SUN_RT")
#undef COM_SUN_RT
#pragma push_macro("JAVA_PROPERTY")
#undef JAVA_PROPERTY
#pragma push_macro("JAVA_RT")
#undef JAVA_RT
#pragma push_macro("RT_COUNTER_NAME_PATTERN")
#undef RT_COUNTER_NAME_PATTERN
#pragma push_macro("SUN_PROPERTY")
#undef SUN_PROPERTY
#pragma push_macro("SUN_RT")
#undef SUN_RT

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

class HotspotRuntime : public ::sun::management::HotspotRuntimeMBean {
	$class(HotspotRuntime, 0, ::sun::management::HotspotRuntimeMBean)
public:
	HotspotRuntime();
	void init$(::sun::management::VMManagement* vm);
	virtual ::java::util::List* getInternalRuntimeCounters() override;
	virtual int64_t getSafepointCount() override;
	virtual int64_t getSafepointSyncTime() override;
	virtual int64_t getTotalSafepointTime() override;
	::sun::management::VMManagement* jvm = nullptr;
	static $String* JAVA_RT;
	static $String* COM_SUN_RT;
	static $String* SUN_RT;
	static $String* JAVA_PROPERTY;
	static $String* COM_SUN_PROPERTY;
	static $String* SUN_PROPERTY;
	static $String* RT_COUNTER_NAME_PATTERN;
};

	} // management
} // sun

#pragma pop_macro("COM_SUN_PROPERTY")
#pragma pop_macro("COM_SUN_RT")
#pragma pop_macro("JAVA_PROPERTY")
#pragma pop_macro("JAVA_RT")
#pragma pop_macro("RT_COUNTER_NAME_PATTERN")
#pragma pop_macro("SUN_PROPERTY")
#pragma pop_macro("SUN_RT")

#endif // _sun_management_HotspotRuntime_h_