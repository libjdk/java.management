#ifndef _com_sun_jmx_remote_internal_ServerNotifForwarder_h_
#define _com_sun_jmx_remote_internal_ServerNotifForwarder_h_
//$ class com.sun.jmx.remote.internal.ServerNotifForwarder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {
					class NotificationBuffer;
					class ServerNotifForwarder$NotifForwarderBufferFilter;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {
					class NotificationAccessController;
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
		class Exception;
		class Integer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
		class NotificationFilter;
		class ObjectName;
	}
}
namespace javax {
	namespace management {
		namespace remote {
			class NotificationResult;
			class TargetedNotification;
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

class $import ServerNotifForwarder : public ::java::lang::Object {
	$class(ServerNotifForwarder, 0, ::java::lang::Object)
public:
	ServerNotifForwarder();
	void init$(::javax::management::MBeanServer* mbeanServer, ::java::util::Map* env, ::com::sun::jmx::remote::internal::NotificationBuffer* notifBuffer, $String* connectionId);
	virtual ::java::lang::Integer* addNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationFilter* filter);
	bool allowNotificationEmission(::javax::management::ObjectName* name, ::javax::management::remote::TargetedNotification* tn);
	void checkMBeanPermission(::javax::management::ObjectName* name, $String* actions);
	static void checkMBeanPermission(::javax::management::MBeanServer* mbs, ::javax::management::ObjectName* name, $String* actions);
	void checkState();
	static ::java::lang::Exception* extractException(::java::lang::Exception* e);
	virtual ::javax::management::remote::NotificationResult* fetchNotifs(int64_t startSequenceNumber, int64_t timeout, int32_t maxNotifications);
	::java::lang::Integer* getListenerID();
	::javax::security::auth::Subject* getSubject();
	virtual void removeNotificationListener(::javax::management::ObjectName* name, $Array<::java::lang::Integer>* listenerIDs);
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::java::lang::Integer* listenerID);
	void snoopOnUnregister(::javax::management::remote::NotificationResult* nr);
	virtual void terminate();
	::com::sun::jmx::remote::internal::ServerNotifForwarder$NotifForwarderBufferFilter* bufferFilter = nullptr;
	::javax::management::MBeanServer* mbeanServer = nullptr;
	$String* connectionId = nullptr;
	int64_t connectionTimeout = 0;
	static int32_t listenerCounter;
	static $ints* listenerCounterLock;
	::com::sun::jmx::remote::internal::NotificationBuffer* notifBuffer = nullptr;
	::java::util::Map* listenerMap = nullptr;
	bool terminated = false;
	$ints* terminationLock = nullptr;
	static $String* broadcasterClass;
	bool checkNotificationEmission = false;
	::com::sun::jmx::remote::security::NotificationAccessController* notificationAccessController = nullptr;
	static ::com::sun::jmx::remote::util::ClassLogger* logger;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ServerNotifForwarder_h_