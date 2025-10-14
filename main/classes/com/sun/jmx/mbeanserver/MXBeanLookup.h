#ifndef _com_sun_jmx_mbeanserver_MXBeanLookup_h_
#define _com_sun_jmx_mbeanserver_MXBeanLookup_h_
//$ class com.sun.jmx.mbeanserver.MXBeanLookup
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class WeakIdentityHashMap;
			}
		}
	}
}
namespace java {
	namespace lang {
		class ThreadLocal;
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

class MXBeanLookup : public ::java::lang::Object {
	$class(MXBeanLookup, 0, ::java::lang::Object)
public:
	MXBeanLookup();
	void init$(::javax::management::MBeanServerConnection* mbsc);
	virtual void addReference(::javax::management::ObjectName* name, Object$* mxbean);
	static ::com::sun::jmx::mbeanserver::MXBeanLookup* getLookup();
	static ::com::sun::jmx::mbeanserver::MXBeanLookup* lookupFor(::javax::management::MBeanServerConnection* mbsc);
	virtual ::javax::management::ObjectName* mxbeanToObjectName(Object$* mxbean);
	virtual $Object* objectNameToMXBean(::javax::management::ObjectName* name, $Class* type);
	virtual bool removeReference(::javax::management::ObjectName* name, Object$* mxbean);
	static void setLookup(::com::sun::jmx::mbeanserver::MXBeanLookup* lookup);
	static ::java::lang::ThreadLocal* currentLookup;
	::javax::management::MBeanServerConnection* mbsc = nullptr;
	::com::sun::jmx::mbeanserver::WeakIdentityHashMap* mxbeanToObjectName$ = nullptr;
	::java::util::Map* objectNameToProxy = nullptr;
	static ::com::sun::jmx::mbeanserver::WeakIdentityHashMap* mbscToLookup;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MXBeanLookup_h_