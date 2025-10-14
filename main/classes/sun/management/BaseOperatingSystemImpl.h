#ifndef _sun_management_BaseOperatingSystemImpl_h_
#define _sun_management_BaseOperatingSystemImpl_h_
//$ class sun.management.BaseOperatingSystemImpl
//$ extends java.lang.management.OperatingSystemMXBean

#include <java/lang/Array.h>
#include <java/lang/management/OperatingSystemMXBean.h>

namespace javax {
	namespace management {
		class ObjectName;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace management {
		class VMManagement;
	}
}

namespace sun {
	namespace management {

class $export BaseOperatingSystemImpl : public ::java::lang::management::OperatingSystemMXBean {
	$class(BaseOperatingSystemImpl, 0, ::java::lang::management::OperatingSystemMXBean)
public:
	BaseOperatingSystemImpl();
	void init$(::sun::management::VMManagement* vm);
	virtual $String* getArch() override;
	virtual int32_t getAvailableProcessors() override;
	virtual $String* getName() override;
	virtual ::javax::management::ObjectName* getObjectName() override;
	virtual double getSystemLoadAverage() override;
	virtual $String* getVersion() override;
	::sun::management::VMManagement* jvm = nullptr;
	static ::jdk::internal::misc::Unsafe* unsafe;
	$doubles* loadavg = nullptr;
};

	} // management
} // sun

#endif // _sun_management_BaseOperatingSystemImpl_h_