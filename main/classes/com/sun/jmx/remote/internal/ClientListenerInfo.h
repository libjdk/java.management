#ifndef _com_sun_jmx_remote_internal_ClientListenerInfo_h_
#define _com_sun_jmx_remote_internal_ClientListenerInfo_h_
//$ class com.sun.jmx.remote.internal.ClientListenerInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace javax {
	namespace management {
		class NotificationFilter;
		class NotificationListener;
		class ObjectName;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			class Subject;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class $export ClientListenerInfo : public ::java::lang::Object {
	$class(ClientListenerInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClientListenerInfo();
	void init$(::java::lang::Integer* listenerID, ::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback, ::javax::security::auth::Subject* delegationSubject);
	virtual ::javax::security::auth::Subject* getDelegationSubject();
	virtual $Object* getHandback();
	virtual ::javax::management::NotificationListener* getListener();
	virtual ::java::lang::Integer* getListenerID();
	virtual ::javax::management::NotificationFilter* getNotificationFilter();
	virtual ::javax::management::ObjectName* getObjectName();
	virtual bool sameAs(::javax::management::ObjectName* name);
	virtual bool sameAs(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener);
	virtual bool sameAs(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback);
	::javax::management::ObjectName* name = nullptr;
	::java::lang::Integer* listenerID = nullptr;
	::javax::management::NotificationFilter* filter = nullptr;
	::javax::management::NotificationListener* listener = nullptr;
	$Object* handback = nullptr;
	::javax::security::auth::Subject* delegationSubject = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ClientListenerInfo_h_