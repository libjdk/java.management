#ifndef _sun_management_ManagementFactoryHelper$PlatformLoggingImpl_h_
#define _sun_management_ManagementFactoryHelper$PlatformLoggingImpl_h_
//$ class sun.management.ManagementFactoryHelper$PlatformLoggingImpl
//$ extends java.lang.management.PlatformLoggingMXBean

#include <java/lang/management/PlatformLoggingMXBean.h>

#pragma push_macro("MBEAN")
#undef MBEAN

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace management {
		class ObjectName;
	}
}
namespace sun {
	namespace management {
		class ManagementFactoryHelper$LoggingMXBeanAccess;
	}
}

namespace sun {
	namespace management {

class $export ManagementFactoryHelper$PlatformLoggingImpl : public ::java::lang::management::PlatformLoggingMXBean {
	$class(ManagementFactoryHelper$PlatformLoggingImpl, 0, ::java::lang::management::PlatformLoggingMXBean)
public:
	ManagementFactoryHelper$PlatformLoggingImpl();
	void init$(::sun::management::ManagementFactoryHelper$LoggingMXBeanAccess* loggingAccess);
	static ::sun::management::ManagementFactoryHelper$PlatformLoggingImpl* getInstance();
	virtual $String* getLoggerLevel($String* loggerName) override;
	virtual ::java::util::List* getLoggerNames() override;
	virtual ::javax::management::ObjectName* getObjectName() override;
	virtual $String* getParentLoggerName($String* loggerName) override;
	virtual void setLoggerLevel($String* loggerName, $String* levelName) override;
	::sun::management::ManagementFactoryHelper$LoggingMXBeanAccess* loggingAccess = nullptr;
	$volatile(::javax::management::ObjectName*) objname = nullptr;
	static ::java::lang::management::PlatformLoggingMXBean* MBEAN;
};

	} // management
} // sun

#pragma pop_macro("MBEAN")

#endif // _sun_management_ManagementFactoryHelper$PlatformLoggingImpl_h_