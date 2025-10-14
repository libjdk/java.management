#ifndef _java_lang_management_DefaultPlatformMBeanProvider$5_h_
#define _java_lang_management_DefaultPlatformMBeanProvider$5_h_
//$ class java.lang.management.DefaultPlatformMBeanProvider$5
//$ extends sun.management.spi.PlatformMBeanProvider$PlatformComponent

#include <sun/management/spi/PlatformMBeanProvider$PlatformComponent.h>

namespace java {
	namespace lang {
		namespace management {
			class DefaultPlatformMBeanProvider;
			class MemoryManagerMXBean;
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

class DefaultPlatformMBeanProvider$5 : public ::sun::management::spi::PlatformMBeanProvider$PlatformComponent {
	$class(DefaultPlatformMBeanProvider$5, $NO_CLASS_INIT, ::sun::management::spi::PlatformMBeanProvider$PlatformComponent)
public:
	DefaultPlatformMBeanProvider$5();
	void init$(::java::lang::management::DefaultPlatformMBeanProvider* this$0);
	virtual $String* getObjectNamePattern() override;
	bool isMemoryManager(::java::lang::management::MemoryManagerMXBean* mbean);
	virtual bool isSingleton() override;
	static $String* lambda$nameToMBeanMap$0(::java::lang::management::MemoryManagerMXBean* pmo);
	virtual ::java::util::Set* mbeanInterfaceNames() override;
	virtual ::java::util::Set* mbeanInterfaces() override;
	virtual ::java::util::Map* nameToMBeanMap() override;
	::java::lang::management::DefaultPlatformMBeanProvider* this$0 = nullptr;
	::java::util::Set* memoryManagerMXBeanInterfaceNames = nullptr;
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_DefaultPlatformMBeanProvider$5_h_