#ifndef _com_sun_jmx_mbeanserver_MBeanInstantiator$1_h_
#define _com_sun_jmx_mbeanserver_MBeanInstantiator$1_h_
//$ class com.sun.jmx.mbeanserver.MBeanInstantiator$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MBeanInstantiator;
			}
		}
	}
}
namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MBeanInstantiator$1 : public ::java::security::PrivilegedAction {
	$class(MBeanInstantiator$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	MBeanInstantiator$1();
	void init$(::com::sun::jmx::mbeanserver::MBeanInstantiator* this$0, ::javax::management::ObjectName* val$name);
	virtual $Object* run() override;
	::com::sun::jmx::mbeanserver::MBeanInstantiator* this$0 = nullptr;
	::javax::management::ObjectName* val$name = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MBeanInstantiator$1_h_