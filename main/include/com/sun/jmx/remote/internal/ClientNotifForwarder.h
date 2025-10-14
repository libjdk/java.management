#ifndef _com_sun_jmx_remote_internal_ClientNotifForwarder_h_
#define _com_sun_jmx_remote_internal_ClientNotifForwarder_h_
//$ class com.sun.jmx.remote.internal.ClientNotifForwarder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("STARTED")
#undef STARTED
#pragma push_macro("STARTING")
#undef STARTING
#pragma push_macro("STOPPED")
#undef STOPPED
#pragma push_macro("STOPPING")
#undef STOPPING
#pragma push_macro("TERMINATED")
#undef TERMINATED

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {
					class ClientListenerInfo;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {
					class ClassLogger;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class Integer;
		class Thread;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Executor;
		}
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
	namespace management {
		namespace remote {
			class NotificationResult;
		}
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

class $import ClientNotifForwarder : public ::java::lang::Object {
	$class(ClientNotifForwarder, 0, ::java::lang::Object)
public:
	ClientNotifForwarder();
	void init$(::java::util::Map* env);
	void init$(::java::lang::ClassLoader* defaultClassLoader, ::java::util::Map* env);
	virtual ::java::lang::Integer* addListenerForMBeanRemovedNotif() {return nullptr;}
	virtual void addNotificationListener(::java::lang::Integer* listenerID, ::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback, ::javax::security::auth::Subject* delegationSubject);
	void beforeRemove();
	virtual ::javax::management::remote::NotificationResult* fetchNotifs(int64_t clientSequenceNumber, int32_t maxNotifications, int64_t timeout) {return nullptr;}
	virtual ::java::lang::Integer* getListenerId(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback);
	virtual $Array<::java::lang::Integer>* getListenerIds(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener);
	void init(bool reconnected);
	virtual void lostNotifs($String* message, int64_t number) {}
	virtual void postReconnection($Array<::com::sun::jmx::remote::internal::ClientListenerInfo>* listenerInfos);
	virtual $Array<::com::sun::jmx::remote::internal::ClientListenerInfo>* preReconnection();
	virtual void removeListenerForMBeanRemovedNotif(::java::lang::Integer* id) {}
	virtual $Array<::java::lang::Integer>* removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener);
	virtual ::java::lang::Integer* removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback);
	virtual $Array<::java::lang::Integer>* removeNotificationListener(::javax::management::ObjectName* name);
	void setState(int32_t newState);
	virtual void terminate();
	::java::security::AccessControlContext* acc = nullptr;
	static int32_t threadId;
	::java::lang::ClassLoader* defaultClassLoader = nullptr;
	::java::util::concurrent::Executor* executor = nullptr;
	::java::util::Map* infoList = nullptr;
	int64_t clientSequenceNumber = 0;
	int32_t maxNotifications = 0;
	int64_t timeout = 0;
	::java::lang::Integer* mbeanRemovedNotifID = nullptr;
	$Thread* currentFetchThread = nullptr;
	static const int32_t STARTING = 0;
	static const int32_t STARTED = 1;
	static const int32_t STOPPING = 2;
	static const int32_t STOPPED = 3;
	static const int32_t TERMINATED = 4;
	int32_t state = 0;
	bool beingReconnected = false;
	static ::com::sun::jmx::remote::util::ClassLogger* logger;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#pragma pop_macro("STARTED")
#pragma pop_macro("STARTING")
#pragma pop_macro("STOPPED")
#pragma pop_macro("STOPPING")
#pragma pop_macro("TERMINATED")

#endif // _com_sun_jmx_remote_internal_ClientNotifForwarder_h_