#ifndef _com_sun_jmx_mbeanserver_MXBeanProxy$InvokeHandler_h_
#define _com_sun_jmx_mbeanserver_MXBeanProxy$InvokeHandler_h_
//$ class com.sun.jmx.mbeanserver.MXBeanProxy$InvokeHandler
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

class MXBeanProxy$InvokeHandler : public ::com::sun::jmx::mbeanserver::MXBeanProxy$Handler {
	$class(MXBeanProxy$InvokeHandler, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::MXBeanProxy$Handler)
public:
	MXBeanProxy$InvokeHandler();
	void init$($String* operationName, $StringArray* signature, ::com::sun::jmx::mbeanserver::ConvertingMethod* cm);
	virtual $Object* invoke(::javax::management::MBeanServerConnection* mbsc, ::javax::management::ObjectName* name, $ObjectArray* args) override;
	$StringArray* signature = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MXBeanProxy$InvokeHandler_h_