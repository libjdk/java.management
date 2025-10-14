#ifndef _com_sun_jmx_mbeanserver_DynamicMBean2_h_
#define _com_sun_jmx_mbeanserver_DynamicMBean2_h_
//$ interface com.sun.jmx.mbeanserver.DynamicMBean2
//$ extends javax.management.DynamicMBean

#include <javax/management/DynamicMBean.h>

namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class DynamicMBean2 : public ::javax::management::DynamicMBean {
	$interface(DynamicMBean2, $NO_CLASS_INIT, ::javax::management::DynamicMBean)
public:
	virtual $String* getClassName() {return nullptr;}
	virtual $Object* getResource() {return nullptr;}
	virtual void preRegister2(::javax::management::MBeanServer* mbs, ::javax::management::ObjectName* name) {}
	virtual void registerFailed() {}
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DynamicMBean2_h_