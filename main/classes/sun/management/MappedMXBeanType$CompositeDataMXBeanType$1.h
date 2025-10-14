#ifndef _sun_management_MappedMXBeanType$CompositeDataMXBeanType$1_h_
#define _sun_management_MappedMXBeanType$CompositeDataMXBeanType$1_h_
//$ class sun.management.MappedMXBeanType$CompositeDataMXBeanType$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace sun {
	namespace management {
		class MappedMXBeanType$CompositeDataMXBeanType;
	}
}

namespace sun {
	namespace management {

class MappedMXBeanType$CompositeDataMXBeanType$1 : public ::java::security::PrivilegedExceptionAction {
	$class(MappedMXBeanType$CompositeDataMXBeanType$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	MappedMXBeanType$CompositeDataMXBeanType$1();
	void init$(::sun::management::MappedMXBeanType$CompositeDataMXBeanType* this$0);
	virtual $Object* run() override;
	::sun::management::MappedMXBeanType$CompositeDataMXBeanType* this$0 = nullptr;
};

	} // management
} // sun

#endif // _sun_management_MappedMXBeanType$CompositeDataMXBeanType$1_h_