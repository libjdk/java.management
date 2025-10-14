#ifndef _sun_management_RuntimeImpl_h_
#define _sun_management_RuntimeImpl_h_
//$ class sun.management.RuntimeImpl
//$ extends java.lang.management.RuntimeMXBean

#include <java/lang/management/RuntimeMXBean.h>

namespace java {
	namespace util {
		class List;
		class Map;
	}
}
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

class RuntimeImpl : public ::java::lang::management::RuntimeMXBean {
	$class(RuntimeImpl, $NO_CLASS_INIT, ::java::lang::management::RuntimeMXBean)
public:
	RuntimeImpl();
	void init$(::sun::management::VMManagement* vm);
	virtual $String* getBootClassPath() override;
	virtual $String* getClassPath() override;
	virtual ::java::util::List* getInputArguments() override;
	virtual $String* getLibraryPath() override;
	virtual $String* getManagementSpecVersion() override;
	virtual $String* getName() override;
	virtual ::javax::management::ObjectName* getObjectName() override;
	virtual $String* getSpecName() override;
	virtual $String* getSpecVendor() override;
	virtual $String* getSpecVersion() override;
	virtual int64_t getStartTime() override;
	virtual ::java::util::Map* getSystemProperties() override;
	virtual int64_t getUptime() override;
	virtual $String* getVmName() override;
	virtual $String* getVmVendor() override;
	virtual $String* getVmVersion() override;
	virtual bool isBootClassPathSupported() override;
	::sun::management::VMManagement* jvm = nullptr;
	int64_t vmStartupTime = 0;
};

	} // management
} // sun

#endif // _sun_management_RuntimeImpl_h_