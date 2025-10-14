#ifndef _com_sun_jmx_mbeanserver_StandardMBeanSupport_h_
#define _com_sun_jmx_mbeanserver_StandardMBeanSupport_h_
//$ class com.sun.jmx.mbeanserver.StandardMBeanSupport
//$ extends com.sun.jmx.mbeanserver.MBeanSupport

#include <com/sun/jmx/mbeanserver/MBeanSupport.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MBeanIntrospector;
			}
		}
	}
}
namespace javax {
	namespace management {
		class MBeanInfo;
		class MBeanServer;
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class StandardMBeanSupport : public ::com::sun::jmx::mbeanserver::MBeanSupport {
	$class(StandardMBeanSupport, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::MBeanSupport)
public:
	StandardMBeanSupport();
	void init$(Object$* resource, $Class* mbeanInterfaceType);
	virtual $Object* getCookie() override;
	virtual ::javax::management::MBeanInfo* getMBeanInfo() override;
	virtual ::com::sun::jmx::mbeanserver::MBeanIntrospector* getMBeanIntrospector() override;
	virtual void register$(::javax::management::MBeanServer* mbs, ::javax::management::ObjectName* name) override;
	virtual void unregister() override;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_StandardMBeanSupport_h_