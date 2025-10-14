#ifndef _sun_management_spi_PlatformMBeanProvider_h_
#define _sun_management_spi_PlatformMBeanProvider_h_
//$ class sun.management.spi.PlatformMBeanProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace management {
		namespace spi {

class $import PlatformMBeanProvider : public ::java::lang::Object {
	$class(PlatformMBeanProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PlatformMBeanProvider();
	void init$();
	void init$(::java::lang::Void* unused);
	static ::java::lang::Void* checkSubclassPermission();
	virtual ::java::util::List* getPlatformComponentList() {return nullptr;}
};

		} // spi
	} // management
} // sun

#endif // _sun_management_spi_PlatformMBeanProvider_h_