#ifndef _com_sun_jmx_mbeanserver_MXBeanProxy$Handler_h_
#define _com_sun_jmx_mbeanserver_MXBeanProxy$Handler_h_
//$ class com.sun.jmx.mbeanserver.MXBeanProxy$Handler
//$ extends java.lang.Object

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

class MXBeanProxy$Handler : public ::java::lang::Object {
	$class(MXBeanProxy$Handler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MXBeanProxy$Handler();
	void init$($String* name, ::com::sun::jmx::mbeanserver::ConvertingMethod* cm);
	virtual ::com::sun::jmx::mbeanserver::ConvertingMethod* getConvertingMethod();
	virtual $String* getName();
	virtual $Object* invoke(::javax::management::MBeanServerConnection* mbsc, ::javax::management::ObjectName* name, $ObjectArray* args) {return nullptr;}
	$String* name = nullptr;
	::com::sun::jmx::mbeanserver::ConvertingMethod* convertingMethod = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MXBeanProxy$Handler_h_