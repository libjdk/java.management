#ifndef _java_lang_management_DefaultPlatformMBeanProvider$6_h_
#define _java_lang_management_DefaultPlatformMBeanProvider$6_h_
//$ class java.lang.management.DefaultPlatformMBeanProvider$6
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

class DefaultPlatformMBeanProvider$6 : public ::sun::management::spi::PlatformMBeanProvider$PlatformComponent {
	$class(DefaultPlatformMBeanProvider$6, $NO_CLASS_INIT, ::sun::management::spi::PlatformMBeanProvider$PlatformComponent)
public:
	DefaultPlatformMBeanProvider$6();
	void init$(::java::lang::management::DefaultPlatformMBeanProvider* this$0);
	virtual $String* getObjectNamePattern() override;
	virtual bool isSingleton() override;
	virtual ::java::util::Set* mbeanInterfaceNames() override;
	virtual ::java::util::Set* mbeanInterfaces() override;
	virtual ::java::util::Map* nameToMBeanMap() override;
	::java::lang::management::DefaultPlatformMBeanProvider* this$0 = nullptr;
	::java::util::Set* memoryPoolMXBeanInterfaceNames = nullptr;
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_DefaultPlatformMBeanProvider$6_h_