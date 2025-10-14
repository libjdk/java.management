#ifndef _sun_management_spi_PlatformMBeanProvider$PlatformComponent_h_
#define _sun_management_spi_PlatformMBeanProvider$PlatformComponent_h_
//$ interface sun.management.spi.PlatformMBeanProvider$PlatformComponent
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}

namespace sun {
	namespace management {
		namespace spi {

class $export PlatformMBeanProvider$PlatformComponent : public ::java::lang::Object {
	$interface(PlatformMBeanProvider$PlatformComponent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::List* getMBeans($Class* mbeanIntf);
	virtual $String* getObjectNamePattern() {return nullptr;}
	virtual bool isSingleton();
	virtual ::java::util::Set* mbeanInterfaceNames() {return nullptr;}
	virtual ::java::util::Set* mbeanInterfaces() {return nullptr;}
	virtual ::java::util::Map* nameToMBeanMap() {return nullptr;}
	virtual bool shouldRegister();
};

		} // spi
	} // management
} // sun

#endif // _sun_management_spi_PlatformMBeanProvider$PlatformComponent_h_