#ifndef _com_sun_jmx_mbeanserver_SunJmxMBeanServer_h_
#define _com_sun_jmx_mbeanserver_SunJmxMBeanServer_h_
//$ interface com.sun.jmx.mbeanserver.SunJmxMBeanServer
//$ extends javax.management.MBeanServer

#include <javax/management/MBeanServer.h>

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
		class MBeanServerDelegate;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class SunJmxMBeanServer : public ::javax::management::MBeanServer {
	$interface(SunJmxMBeanServer, $NO_CLASS_INIT, ::javax::management::MBeanServer)
public:
	virtual ::com::sun::jmx::mbeanserver::MBeanInstantiator* getMBeanInstantiator() {return nullptr;}
	virtual ::javax::management::MBeanServerDelegate* getMBeanServerDelegate() {return nullptr;}
	virtual ::javax::management::MBeanServer* getMBeanServerInterceptor() {return nullptr;}
	virtual bool interceptorsEnabled() {return false;}
	virtual void setMBeanServerInterceptor(::javax::management::MBeanServer* interceptor) {}
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_SunJmxMBeanServer_h_