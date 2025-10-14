#ifndef _sun_management_HotspotCompilation_h_
#define _sun_management_HotspotCompilation_h_
//$ class sun.management.HotspotCompilation
//$ extends sun.management.HotspotCompilationMBean

#include <sun/management/HotspotCompilationMBean.h>

#pragma push_macro("CI_COUNTER_NAME_PATTERN")
#undef CI_COUNTER_NAME_PATTERN
#pragma push_macro("COM_SUN_CI")
#undef COM_SUN_CI
#pragma push_macro("JAVA_CI")
#undef JAVA_CI
#pragma push_macro("SUN_CI")
#undef SUN_CI

namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace sun {
	namespace management {
		class MethodInfo;
		class VMManagement;
	}
}
namespace sun {
	namespace management {
		namespace counter {
			class Counter;
			class LongCounter;
			class StringCounter;
		}
	}
}

namespace sun {
	namespace management {

class HotspotCompilation : public ::sun::management::HotspotCompilationMBean {
	$class(HotspotCompilation, 0, ::sun::management::HotspotCompilationMBean)
public:
	HotspotCompilation();
	void init$(::sun::management::VMManagement* vm);
	virtual int64_t getBailoutCompileCount() override;
	virtual int64_t getCompiledMethodCodeSize() override;
	virtual int64_t getCompiledMethodSize() override;
	virtual int32_t getCompilerThreadCount() override;
	virtual ::java::util::List* getCompilerThreadStats() override;
	virtual ::sun::management::MethodInfo* getFailedCompile() override;
	virtual ::java::util::List* getInternalCompilerCounters() override;
	virtual ::sun::management::MethodInfo* getInvalidatedCompile() override;
	virtual int64_t getInvalidatedCompileCount() override;
	virtual ::sun::management::MethodInfo* getLastCompile() override;
	virtual int64_t getTotalCompileCount() override;
	void initCompilerCounters();
	::sun::management::counter::Counter* lookup($String* name);
	::sun::management::VMManagement* jvm = nullptr;
	static $String* JAVA_CI;
	static $String* COM_SUN_CI;
	static $String* SUN_CI;
	static $String* CI_COUNTER_NAME_PATTERN;
	::sun::management::counter::LongCounter* compilerThreads = nullptr;
	::sun::management::counter::LongCounter* totalCompiles = nullptr;
	::sun::management::counter::LongCounter* totalBailouts = nullptr;
	::sun::management::counter::LongCounter* totalInvalidates = nullptr;
	::sun::management::counter::LongCounter* nmethodCodeSize = nullptr;
	::sun::management::counter::LongCounter* nmethodSize = nullptr;
	::sun::management::counter::StringCounter* lastMethod = nullptr;
	::sun::management::counter::LongCounter* lastSize = nullptr;
	::sun::management::counter::LongCounter* lastType = nullptr;
	::sun::management::counter::StringCounter* lastFailedMethod = nullptr;
	::sun::management::counter::LongCounter* lastFailedType = nullptr;
	::sun::management::counter::StringCounter* lastInvalidatedMethod = nullptr;
	::sun::management::counter::LongCounter* lastInvalidatedType = nullptr;
	::java::util::List* threads = nullptr;
	int32_t numActiveThreads = 0;
	::java::util::Map* counters = nullptr;
};

	} // management
} // sun

#pragma pop_macro("CI_COUNTER_NAME_PATTERN")
#pragma pop_macro("COM_SUN_CI")
#pragma pop_macro("JAVA_CI")
#pragma pop_macro("SUN_CI")

#endif // _sun_management_HotspotCompilation_h_