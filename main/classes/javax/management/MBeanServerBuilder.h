#ifndef _javax_management_MBeanServerBuilder_h_
#define _javax_management_MBeanServerBuilder_h_
//$ class javax.management.MBeanServerBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {
		class MBeanServer;
		class MBeanServerDelegate;
	}
}

namespace javax {
	namespace management {

class $export MBeanServerBuilder : public ::java::lang::Object {
	$class(MBeanServerBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MBeanServerBuilder();
	void init$();
	virtual ::javax::management::MBeanServer* newMBeanServer($String* defaultDomain, ::javax::management::MBeanServer* outer, ::javax::management::MBeanServerDelegate* delegate);
	virtual ::javax::management::MBeanServerDelegate* newMBeanServerDelegate();
};

	} // management
} // javax

#endif // _javax_management_MBeanServerBuilder_h_