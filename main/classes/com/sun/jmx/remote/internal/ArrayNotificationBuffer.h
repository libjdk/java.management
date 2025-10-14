#ifndef _com_sun_jmx_remote_internal_ArrayNotificationBuffer_h_
#define _com_sun_jmx_remote_internal_ArrayNotificationBuffer_h_
//$ class com.sun.jmx.remote.internal.ArrayNotificationBuffer
//$ extends com.sun.jmx.remote.internal.NotificationBuffer

#include <com/sun/jmx/remote/internal/NotificationBuffer.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {
					class ArrayNotificationBuffer$NamedNotification;
					class ArrayNotificationBuffer$ShareBuffer;
					class ArrayQueue;
					class NotificationBufferFilter;
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
	}
}
namespace java {
	namespace util {
		class Collection;
		class HashMap;
		class Map;
		class Set;
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
		class MBeanServerNotification;
		class NotificationFilter;
		class NotificationListener;
		class ObjectName;
		class QueryExp;
	}
}
namespace javax {
	namespace management {
		namespace remote {
			class NotificationResult;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class $export ArrayNotificationBuffer : public ::com::sun::jmx::remote::internal::NotificationBuffer {
	$class(ArrayNotificationBuffer, 0, ::com::sun::jmx::remote::internal::NotificationBuffer)
public:
	ArrayNotificationBuffer();
	void init$(::javax::management::MBeanServer* mbs, int32_t queueSize);
	void addBufferListener(::javax::management::ObjectName* name);
	virtual void addNotification(::com::sun::jmx::remote::internal::ArrayNotificationBuffer$NamedNotification* notif);
	void addNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback);
	virtual void addSharer(::com::sun::jmx::remote::internal::ArrayNotificationBuffer$ShareBuffer* sharer);
	void checkNoLocks();
	void createListeners();
	void createdNotification(::javax::management::MBeanServerNotification* n);
	void destroyListeners();
	virtual void dispose() override;
	void dropNotification();
	virtual int64_t earliestSequenceNumber();
	static ::java::lang::Exception* extractException(::java::lang::Exception* e);
	virtual ::javax::management::remote::NotificationResult* fetchNotifications(::com::sun::jmx::remote::internal::NotificationBufferFilter* filter, int64_t startSequenceNumber, int64_t timeout, int32_t maxNotifications) override;
	static ::com::sun::jmx::remote::internal::NotificationBuffer* getNotificationBuffer(::javax::management::MBeanServer* mbs, ::java::util::Map* env);
	bool isDisposed();
	static bool isInstanceOf(::javax::management::MBeanServer* mbs, ::javax::management::ObjectName* name, $String* className);
	virtual int64_t nextSequenceNumber();
	virtual ::com::sun::jmx::remote::internal::ArrayNotificationBuffer$NamedNotification* notificationAt(int64_t seqNo);
	::java::util::Set* queryNames(::javax::management::ObjectName* name, ::javax::management::QueryExp* query);
	void removeBufferListener(::javax::management::ObjectName* name);
	static void removeNotificationBuffer(::javax::management::MBeanServer* mbs);
	void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener);
	void removeSharer(::com::sun::jmx::remote::internal::ArrayNotificationBuffer$ShareBuffer* sharer);
	void resize(int32_t newSize);
	bool disposed = false;
	static $Object* globalLock;
	static ::java::util::HashMap* mbsToBuffer;
	::java::util::Collection* sharers = nullptr;
	::javax::management::NotificationListener* bufferListener = nullptr;
	static ::javax::management::QueryExp* broadcasterQuery;
	static ::javax::management::NotificationFilter* creationFilter;
	::javax::management::NotificationListener* creationListener = nullptr;
	static ::com::sun::jmx::remote::util::ClassLogger* logger;
	::javax::management::MBeanServer* mBeanServer = nullptr;
	::com::sun::jmx::remote::internal::ArrayQueue* queue = nullptr;
	int32_t queueSize = 0;
	int64_t earliestSequenceNumber$ = 0;
	int64_t nextSequenceNumber$ = 0;
	::java::util::Set* createdDuringQuery = nullptr;
	static $String* broadcasterClass;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ArrayNotificationBuffer_h_