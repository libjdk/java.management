#ifndef _sun_management_HotspotCompilationMBean_h_
#define _sun_management_HotspotCompilationMBean_h_
//$ interface sun.management.HotspotCompilationMBean
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace management {
		class MethodInfo;
	}
}

namespace sun {
	namespace management {

class $export HotspotCompilationMBean : public ::java::lang::Object {
	$interface(HotspotCompilationMBean, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t getBailoutCompileCount() {return 0;}
	virtual int64_t getCompiledMethodCodeSize() {return 0;}
	virtual int64_t getCompiledMethodSize() {return 0;}
	virtual int32_t getCompilerThreadCount() {return 0;}
	virtual ::java::util::List* getCompilerThreadStats() {return nullptr;}
	virtual ::sun::management::MethodInfo* getFailedCompile() {return nullptr;}
	virtual ::java::util::List* getInternalCompilerCounters() {return nullptr;}
	virtual ::sun::management::MethodInfo* getInvalidatedCompile() {return nullptr;}
	virtual int64_t getInvalidatedCompileCount() {return 0;}
	virtual ::sun::management::MethodInfo* getLastCompile() {return nullptr;}
	virtual int64_t getTotalCompileCount() {return 0;}
};

	} // management
} // sun

#endif // _sun_management_HotspotCompilationMBean_h_