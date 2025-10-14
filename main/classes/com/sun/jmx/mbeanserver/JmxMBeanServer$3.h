#ifndef _com_sun_jmx_mbeanserver_JmxMBeanServer$3_h_
#define _com_sun_jmx_mbeanserver_JmxMBeanServer$3_h_
//$ class com.sun.jmx.mbeanserver.JmxMBeanServer$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class JmxMBeanServer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class JmxMBeanServer$3 : public ::java::security::PrivilegedAction {
	$class(JmxMBeanServer$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	JmxMBeanServer$3();
	void init$(::com::sun::jmx::mbeanserver::JmxMBeanServer* this$0);
	virtual $Object* run() override;
	::com::sun::jmx::mbeanserver::JmxMBeanServer* this$0 = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_JmxMBeanServer$3_h_