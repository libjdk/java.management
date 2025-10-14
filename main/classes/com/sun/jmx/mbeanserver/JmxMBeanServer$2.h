#ifndef _com_sun_jmx_mbeanserver_JmxMBeanServer$2_h_
#define _com_sun_jmx_mbeanserver_JmxMBeanServer$2_h_
//$ class com.sun.jmx.mbeanserver.JmxMBeanServer$2
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

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

class JmxMBeanServer$2 : public ::java::security::PrivilegedExceptionAction {
	$class(JmxMBeanServer$2, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	JmxMBeanServer$2();
	void init$(::com::sun::jmx::mbeanserver::JmxMBeanServer* this$0);
	virtual $Object* run() override;
	::com::sun::jmx::mbeanserver::JmxMBeanServer* this$0 = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_JmxMBeanServer$2_h_