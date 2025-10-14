#ifndef _com_sun_jmx_mbeanserver_MXBeanProxy_h_
#define _com_sun_jmx_mbeanserver_MXBeanProxy_h_
//$ class com.sun.jmx.mbeanserver.MXBeanProxy
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace util {
		class Map;
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

class MXBeanProxy : public ::java::lang::Object {
	$class(MXBeanProxy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MXBeanProxy();
	void init$($Class* mxbeanInterface);
	virtual $Object* invoke(::javax::management::MBeanServerConnection* mbsc, ::javax::management::ObjectName* name, ::java::lang::reflect::Method* method, $ObjectArray* args);
	::java::util::Map* handlerMap = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MXBeanProxy_h_