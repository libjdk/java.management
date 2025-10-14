#ifndef _javax_management_MBeanServerInvocationHandler_h_
#define _javax_management_MBeanServerInvocationHandler_h_
//$ class javax.management.MBeanServerInvocationHandler
//$ extends java.lang.reflect.InvocationHandler

#include <java/lang/Array.h>
#include <java/lang/reflect/InvocationHandler.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MXBeanProxy;
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace util {
		class WeakHashMap;
	}
}
namespace javax {
	namespace management {
		class MBeanServerConnection;
		class ObjectName;
	}
}

namespace javax {
	namespace management {

class $export MBeanServerInvocationHandler : public ::java::lang::reflect::InvocationHandler {
	$class(MBeanServerInvocationHandler, 0, ::java::lang::reflect::InvocationHandler)
public:
	MBeanServerInvocationHandler();
	void init$(::javax::management::MBeanServerConnection* connection, ::javax::management::ObjectName* objectName);
	void init$(::javax::management::MBeanServerConnection* connection, ::javax::management::ObjectName* objectName, bool isMXBean);
	$Object* doLocally(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* args);
	static ::com::sun::jmx::mbeanserver::MXBeanProxy* findMXBeanProxy($Class* mxbeanInterface);
	virtual ::javax::management::MBeanServerConnection* getMBeanServerConnection();
	virtual ::javax::management::ObjectName* getObjectName();
	virtual $Object* invoke(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* args) override;
	$Object* invokeBroadcasterMethod(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* args);
	static bool isLocal(Object$* proxy, ::java::lang::reflect::Method* method);
	virtual bool isMXBean();
	static $Object* newProxyInstance(::javax::management::MBeanServerConnection* connection, ::javax::management::ObjectName* objectName, $Class* interfaceClass, bool notificationBroadcaster);
	bool shouldDoLocally(Object$* proxy, ::java::lang::reflect::Method* method);
	static ::java::util::WeakHashMap* mxbeanProxies;
	::javax::management::MBeanServerConnection* connection = nullptr;
	::javax::management::ObjectName* objectName = nullptr;
	bool isMXBean$ = false;
};

	} // management
} // javax

#endif // _javax_management_MBeanServerInvocationHandler_h_