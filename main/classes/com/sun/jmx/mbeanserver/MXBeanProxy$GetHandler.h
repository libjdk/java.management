#ifndef _com_sun_jmx_mbeanserver_MXBeanProxy$GetHandler_h_
#define _com_sun_jmx_mbeanserver_MXBeanProxy$GetHandler_h_
//$ class com.sun.jmx.mbeanserver.MXBeanProxy$GetHandler
//$ extends com.sun.jmx.mbeanserver.MXBeanProxy$Handler

#include <com/sun/jmx/mbeanserver/MXBeanProxy$Handler.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class ConvertingMethod;
			}
		}
	}
}
namespace javax {
	namespace management {
		class MBeanServerConnection;
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MXBeanProxy$GetHandler : public ::com::sun::jmx::mbeanserver::MXBeanProxy$Handler {
	$class(MXBeanProxy$GetHandler, 0, ::com::sun::jmx::mbeanserver::MXBeanProxy$Handler)
public:
	MXBeanProxy$GetHandler();
	void init$($String* attributeName, ::com::sun::jmx::mbeanserver::ConvertingMethod* cm);
	virtual $Object* invoke(::javax::management::MBeanServerConnection* mbsc, ::javax::management::ObjectName* name, $ObjectArray* args) override;
	static bool $assertionsDisabled;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MXBeanProxy$GetHandler_h_