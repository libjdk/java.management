#ifndef _sun_management_CompilationImpl_h_
#define _sun_management_CompilationImpl_h_
//$ class sun.management.CompilationImpl
//$ extends java.lang.management.CompilationMXBean

#include <java/lang/management/CompilationMXBean.h>

namespace javax {
	namespace management {
		class ObjectName;
	}
}
namespace sun {
	namespace management {
		class VMManagement;
	}
}

namespace sun {
	namespace management {

class CompilationImpl : public ::java::lang::management::CompilationMXBean {
	$class(CompilationImpl, $NO_CLASS_INIT, ::java::lang::management::CompilationMXBean)
public:
	CompilationImpl();
	void init$(::sun::management::VMManagement* vm);
	virtual $String* getName() override;
	virtual ::javax::management::ObjectName* getObjectName() override;
	virtual int64_t getTotalCompilationTime() override;
	virtual bool isCompilationTimeMonitoringSupported() override;
	::sun::management::VMManagement* jvm = nullptr;
	$String* name = nullptr;
};

	} // management
} // sun

#endif // _sun_management_CompilationImpl_h_