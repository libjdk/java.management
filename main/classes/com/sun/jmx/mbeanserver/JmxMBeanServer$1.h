#ifndef _com_sun_jmx_mbeanserver_JmxMBeanServer$1_h_
#define _com_sun_jmx_mbeanserver_JmxMBeanServer$1_h_
//$ class com.sun.jmx.mbeanserver.JmxMBeanServer$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class JmxMBeanServer;
				class MBeanInstantiator;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class JmxMBeanServer$1 : public ::java::security::PrivilegedAction {
	$class(JmxMBeanServer$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	JmxMBeanServer$1();
	void init$(::com::sun::jmx::mbeanserver::JmxMBeanServer* this$0, ::com::sun::jmx::mbeanserver::MBeanInstantiator* val$fInstantiator);
	virtual $Object* run() override;
	::com::sun::jmx::mbeanserver::JmxMBeanServer* this$0 = nullptr;
	::com::sun::jmx::mbeanserver::MBeanInstantiator* val$fInstantiator = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_JmxMBeanServer$1_h_