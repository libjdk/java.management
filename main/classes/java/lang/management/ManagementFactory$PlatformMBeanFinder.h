#ifndef _java_lang_management_ManagementFactory$PlatformMBeanFinder_h_
#define _java_lang_management_ManagementFactory$PlatformMBeanFinder_h_
//$ class java.lang.management.ManagementFactory$PlatformMBeanFinder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace management {
		namespace spi {
			class PlatformMBeanProvider$PlatformComponent;
		}
	}
}

namespace java {
	namespace lang {
		namespace management {

class ManagementFactory$PlatformMBeanFinder : public ::java::lang::Object {
	$class(ManagementFactory$PlatformMBeanFinder, 0, ::java::lang::Object)
public:
	ManagementFactory$PlatformMBeanFinder();
	void init$();
	static ::sun::management::spi::PlatformMBeanProvider$PlatformComponent* findFirst($Class* mbeanIntf);
	static ::sun::management::spi::PlatformMBeanProvider$PlatformComponent* findSingleton($Class* mbeanIntf);
	static ::java::util::Map* getMap();
	static bool lambda$findFirst$0($String* name, ::sun::management::spi::PlatformMBeanProvider$PlatformComponent* pc);
	static ::sun::management::spi::PlatformMBeanProvider$PlatformComponent* lambda$findSingleton$2($Class* mbeanIntf, ::sun::management::spi::PlatformMBeanProvider$PlatformComponent* p1, ::sun::management::spi::PlatformMBeanProvider$PlatformComponent* p2);
	static ::java::util::Map* componentMap;
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_ManagementFactory$PlatformMBeanFinder_h_