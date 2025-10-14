#ifndef _com_sun_jmx_mbeanserver_MXBeanSupport_h_
#define _com_sun_jmx_mbeanserver_MXBeanSupport_h_
//$ class com.sun.jmx.mbeanserver.MXBeanSupport
//$ extends com.sun.jmx.mbeanserver.MBeanSupport

#include <com/sun/jmx/mbeanserver/MBeanSupport.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MBeanIntrospector;
				class MXBeanLookup;
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
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

class MXBeanSupport : public ::com::sun::jmx::mbeanserver::MBeanSupport {
	$class(MXBeanSupport, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::MBeanSupport)
public:
	MXBeanSupport();
	void init$(Object$* resource, $Class* mxbeanInterface);
	static $Class* findMXBeanInterface($Class* resourceClass);
	virtual $Object* getCookie() override;
	virtual ::com::sun::jmx::mbeanserver::MBeanIntrospector* getMBeanIntrospector() override;
	virtual void register$(::javax::management::MBeanServer* server, ::javax::management::ObjectName* name) override;
	static ::java::util::Set* transitiveInterfaces($Class* c);
	static void transitiveInterfaces($Class* c, ::java::util::Set* intfs);
	virtual void unregister() override;
	$Object* lock = nullptr;
	::com::sun::jmx::mbeanserver::MXBeanLookup* mxbeanLookup = nullptr;
	::javax::management::ObjectName* objectName = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MXBeanSupport_h_