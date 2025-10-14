#ifndef _java_lang_management_DefaultPlatformMBeanProvider$11_h_
#define _java_lang_management_DefaultPlatformMBeanProvider$11_h_
//$ class java.lang.management.DefaultPlatformMBeanProvider$11
//$ extends sun.management.spi.PlatformMBeanProvider$PlatformComponent

#include <sun/management/spi/PlatformMBeanProvider$PlatformComponent.h>

namespace java {
	namespace lang {
		namespace management {
			class DefaultPlatformMBeanProvider;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace java {
	namespace lang {
		namespace management {

class DefaultPlatformMBeanProvider$11 : public ::sun::management::spi::PlatformMBeanProvider$PlatformComponent {
	$class(DefaultPlatformMBeanProvider$11, $NO_CLASS_INIT, ::sun::management::spi::PlatformMBeanProvider$PlatformComponent)
public:
	DefaultPlatformMBeanProvider$11();
	void init$(::java::lang::management::DefaultPlatformMBeanProvider* this$0);
	virtual $String* getObjectNamePattern() override;
	virtual ::java::util::Set* mbeanInterfaceNames() override;
	virtual ::java::util::Set* mbeanInterfaces() override;
	virtual ::java::util::Map* nameToMBeanMap() override;
	::java::lang::management::DefaultPlatformMBeanProvider* this$0 = nullptr;
	::java::util::Set* operatingSystemMXBeanInterfaceNames = nullptr;
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_DefaultPlatformMBeanProvider$11_h_