#ifndef _com_sun_jmx_mbeanserver_JmxMBeanServerBuilder_h_
#define _com_sun_jmx_mbeanserver_JmxMBeanServerBuilder_h_
//$ class com.sun.jmx.mbeanserver.JmxMBeanServerBuilder
//$ extends javax.management.MBeanServerBuilder

#include <javax/management/MBeanServerBuilder.h>

namespace javax {
	namespace management {
		class MBeanServer;
		class MBeanServerDelegate;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class JmxMBeanServerBuilder : public ::javax::management::MBeanServerBuilder {
	$class(JmxMBeanServerBuilder, $NO_CLASS_INIT, ::javax::management::MBeanServerBuilder)
public:
	JmxMBeanServerBuilder();
	void init$();
	virtual ::javax::management::MBeanServer* newMBeanServer($String* defaultDomain, ::javax::management::MBeanServer* outer, ::javax::management::MBeanServerDelegate* delegate) override;
	virtual ::javax::management::MBeanServerDelegate* newMBeanServerDelegate() override;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_JmxMBeanServerBuilder_h_