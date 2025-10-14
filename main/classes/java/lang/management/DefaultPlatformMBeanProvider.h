#ifndef _java_lang_management_DefaultPlatformMBeanProvider_h_
#define _java_lang_management_DefaultPlatformMBeanProvider_h_
//$ class java.lang.management.DefaultPlatformMBeanProvider
//$ extends sun.management.spi.PlatformMBeanProvider

#include <sun/management/spi/PlatformMBeanProvider.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace lang {
		namespace management {

class DefaultPlatformMBeanProvider : public ::sun::management::spi::PlatformMBeanProvider {
	$class(DefaultPlatformMBeanProvider, $NO_CLASS_INIT, ::sun::management::spi::PlatformMBeanProvider)
public:
	DefaultPlatformMBeanProvider();
	void init$();
	virtual ::java::util::List* getPlatformComponentList() override;
	::java::util::List* init();
	::java::util::List* mxbeanList = nullptr;
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_DefaultPlatformMBeanProvider_h_