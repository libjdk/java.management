#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>

#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$1.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$2.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$3.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$4.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$5.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$BroadcasterQuery.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$BufferListener.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$NamedNotification.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$ShareBuffer.h>
#include <com/sun/jmx/remote/internal/ArrayQueue.h>
#include <com/sun/jmx/remote/internal/NotificationBuffer.h>
#include <com/sun/jmx/remote/internal/NotificationBufferFilter.h>
#include <com/sun/jmx/remote/internal/ServerNotifForwarder$NotifForwarderBufferFilter.h>
#include <com/sun/jmx/remote/internal/ServerNotifForwarder.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/lang/SecurityException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerDelegate.h>
#include <javax/management/MBeanServerNotification.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcaster.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationFilterSupport.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryExp.h>
#include <javax/management/remote/NotificationResult.h>
#include <javax/management/remote/TargetedNotification.h>
#include <jcpp.h>

#undef DELEGATE_NAME
#undef MAX_VALUE
#undef REGISTRATION_NOTIFICATION

using $TargetedNotificationArray = $Array<::javax::management::remote::TargetedNotification>;
using $ArrayNotificationBuffer$1 = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer$1;
using $ArrayNotificationBuffer$2 = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer$2;
using $ArrayNotificationBuffer$3 = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer$3;
using $ArrayNotificationBuffer$4 = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer$4;
using $ArrayNotificationBuffer$5 = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer$5;
using $ArrayNotificationBuffer$BroadcasterQuery = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer$BroadcasterQuery;
using $ArrayNotificationBuffer$BufferListener = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer$BufferListener;
using $ArrayNotificationBuffer$NamedNotification = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer$NamedNotification;
using $ArrayNotificationBuffer$ShareBuffer = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer$ShareBuffer;
using $ArrayQueue = ::com::sun::jmx::remote::internal::ArrayQueue;
using $NotificationBuffer = ::com::sun::jmx::remote::internal::NotificationBuffer;
using $NotificationBufferFilter = ::com::sun::jmx::remote::internal::NotificationBufferFilter;
using $ServerNotifForwarder = ::com::sun::jmx::remote::internal::ServerNotifForwarder;
using $ServerNotifForwarder$NotifForwarderBufferFilter = ::com::sun::jmx::remote::internal::ServerNotifForwarder$NotifForwarderBufferFilter;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;
using $MBeanServerNotification = ::javax::management::MBeanServerNotification;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcaster = ::javax::management::NotificationBroadcaster;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationFilterSupport = ::javax::management::NotificationFilterSupport;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectName = ::javax::management::ObjectName;
using $QueryExp = ::javax::management::QueryExp;
using $NotificationResult = ::javax::management::remote::NotificationResult;
using $TargetedNotification = ::javax::management::remote::TargetedNotification;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ArrayNotificationBuffer_FieldInfo_[] = {
	{"disposed", "Z", nullptr, $PRIVATE, $field(ArrayNotificationBuffer, disposed)},
	{"globalLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ArrayNotificationBuffer, globalLock)},
	{"mbsToBuffer", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljavax/management/MBeanServer;Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ArrayNotificationBuffer, mbsToBuffer)},
	{"sharers", "Ljava/util/Collection;", "Ljava/util/Collection<Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer$ShareBuffer;>;", $PRIVATE | $FINAL, $field(ArrayNotificationBuffer, sharers)},
	{"bufferListener", "Ljavax/management/NotificationListener;", nullptr, $PRIVATE | $FINAL, $field(ArrayNotificationBuffer, bufferListener)},
	{"broadcasterQuery", "Ljavax/management/QueryExp;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ArrayNotificationBuffer, broadcasterQuery)},
	{"creationFilter", "Ljavax/management/NotificationFilter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ArrayNotificationBuffer, creationFilter)},
	{"creationListener", "Ljavax/management/NotificationListener;", nullptr, $PRIVATE | $FINAL, $field(ArrayNotificationBuffer, creationListener)},
	{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ArrayNotificationBuffer, logger)},
	{"mBeanServer", "Ljavax/management/MBeanServer;", nullptr, $PRIVATE | $FINAL, $field(ArrayNotificationBuffer, mBeanServer)},
	{"queue", "Lcom/sun/jmx/remote/internal/ArrayQueue;", "Lcom/sun/jmx/remote/internal/ArrayQueue<Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer$NamedNotification;>;", $PRIVATE | $FINAL, $field(ArrayNotificationBuffer, queue)},
	{"queueSize", "I", nullptr, $PRIVATE, $field(ArrayNotificationBuffer, queueSize)},
	{"earliestSequenceNumber", "J", nullptr, $PRIVATE, $field(ArrayNotificationBuffer, earliestSequenceNumber$)},
	{"nextSequenceNumber", "J", nullptr, $PRIVATE, $field(ArrayNotificationBuffer, nextSequenceNumber$)},
	{"createdDuringQuery", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/management/ObjectName;>;", $PRIVATE, $field(ArrayNotificationBuffer, createdDuringQuery)},
	{"broadcasterClass", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ArrayNotificationBuffer, broadcasterClass)},
	{}
};

$MethodInfo _ArrayNotificationBuffer_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/MBeanServer;I)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayNotificationBuffer::*)($MBeanServer*,int32_t)>(&ArrayNotificationBuffer::init$))},
	{"addBufferListener", "(Ljavax/management/ObjectName;)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayNotificationBuffer::*)($ObjectName*)>(&ArrayNotificationBuffer::addBufferListener))},
	{"addNotification", "(Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer$NamedNotification;)V", nullptr, $SYNCHRONIZED},
	{"addNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayNotificationBuffer::*)($ObjectName*,$NotificationListener*,$NotificationFilter*,Object$*)>(&ArrayNotificationBuffer::addNotificationListener)), "java.lang.Exception"},
	{"addSharer", "(Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer$ShareBuffer;)V", nullptr, 0},
	{"checkNoLocks", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArrayNotificationBuffer::*)()>(&ArrayNotificationBuffer::checkNoLocks))},
	{"createListeners", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArrayNotificationBuffer::*)()>(&ArrayNotificationBuffer::createListeners))},
	{"createdNotification", "(Ljavax/management/MBeanServerNotification;)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayNotificationBuffer::*)($MBeanServerNotification*)>(&ArrayNotificationBuffer::createdNotification))},
	{"destroyListeners", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArrayNotificationBuffer::*)()>(&ArrayNotificationBuffer::destroyListeners))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"dropNotification", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArrayNotificationBuffer::*)()>(&ArrayNotificationBuffer::dropNotification))},
	{"earliestSequenceNumber", "()J", nullptr, $SYNCHRONIZED},
	{"extractException", "(Ljava/lang/Exception;)Ljava/lang/Exception;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Exception*(*)($Exception*)>(&ArrayNotificationBuffer::extractException))},
	{"fetchNotifications", "(Lcom/sun/jmx/remote/internal/NotificationBufferFilter;JJI)Ljavax/management/remote/NotificationResult;", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"getNotificationBuffer", "(Ljavax/management/MBeanServer;Ljava/util/Map;)Lcom/sun/jmx/remote/internal/NotificationBuffer;", "(Ljavax/management/MBeanServer;Ljava/util/Map<Ljava/lang/String;*>;)Lcom/sun/jmx/remote/internal/NotificationBuffer;", $PUBLIC | $STATIC, $method(static_cast<$NotificationBuffer*(*)($MBeanServer*,$Map*)>(&ArrayNotificationBuffer::getNotificationBuffer))},
	{"isDisposed", "()Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(ArrayNotificationBuffer::*)()>(&ArrayNotificationBuffer::isDisposed))},
	{"isInstanceOf", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($MBeanServer*,$ObjectName*,$String*)>(&ArrayNotificationBuffer::isInstanceOf))},
	{"nextSequenceNumber", "()J", nullptr, $SYNCHRONIZED},
	{"notificationAt", "(J)Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer$NamedNotification;", nullptr, $SYNCHRONIZED},
	{"queryNames", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set<Ljavax/management/ObjectName;>;", $PRIVATE, $method(static_cast<$Set*(ArrayNotificationBuffer::*)($ObjectName*,$QueryExp*)>(&ArrayNotificationBuffer::queryNames))},
	{"removeBufferListener", "(Ljavax/management/ObjectName;)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayNotificationBuffer::*)($ObjectName*)>(&ArrayNotificationBuffer::removeBufferListener))},
	{"removeNotificationBuffer", "(Ljavax/management/MBeanServer;)V", nullptr, $STATIC, $method(static_cast<void(*)($MBeanServer*)>(&ArrayNotificationBuffer::removeNotificationBuffer))},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayNotificationBuffer::*)($ObjectName*,$NotificationListener*)>(&ArrayNotificationBuffer::removeNotificationListener)), "java.lang.Exception"},
	{"removeSharer", "(Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer$ShareBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayNotificationBuffer::*)($ArrayNotificationBuffer$ShareBuffer*)>(&ArrayNotificationBuffer::removeSharer))},
	{"resize", "(I)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(ArrayNotificationBuffer::*)(int32_t)>(&ArrayNotificationBuffer::resize))},
	{}
};

$InnerClassInfo _ArrayNotificationBuffer_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$BroadcasterQuery", "com.sun.jmx.remote.internal.ArrayNotificationBuffer", "BroadcasterQuery", $PRIVATE | $STATIC},
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$BufferListener", "com.sun.jmx.remote.internal.ArrayNotificationBuffer", "BufferListener", $PRIVATE},
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$NamedNotification", "com.sun.jmx.remote.internal.ArrayNotificationBuffer", "NamedNotification", $PRIVATE | $STATIC},
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$ShareBuffer", "com.sun.jmx.remote.internal.ArrayNotificationBuffer", "ShareBuffer", $PRIVATE},
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$5", nullptr, nullptr, 0},
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$4", nullptr, nullptr, 0},
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$3", nullptr, nullptr, 0},
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$2", nullptr, nullptr, 0},
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ArrayNotificationBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer",
	"java.lang.Object",
	"com.sun.jmx.remote.internal.NotificationBuffer",
	_ArrayNotificationBuffer_FieldInfo_,
	_ArrayNotificationBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_ArrayNotificationBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer$BroadcasterQuery,com.sun.jmx.remote.internal.ArrayNotificationBuffer$BufferListener,com.sun.jmx.remote.internal.ArrayNotificationBuffer$NamedNotification,com.sun.jmx.remote.internal.ArrayNotificationBuffer$ShareBuffer,com.sun.jmx.remote.internal.ArrayNotificationBuffer$5,com.sun.jmx.remote.internal.ArrayNotificationBuffer$4,com.sun.jmx.remote.internal.ArrayNotificationBuffer$3,com.sun.jmx.remote.internal.ArrayNotificationBuffer$2,com.sun.jmx.remote.internal.ArrayNotificationBuffer$1"
};

$Object* allocate$ArrayNotificationBuffer($Class* clazz) {
	return $of($alloc(ArrayNotificationBuffer));
}

$Object* ArrayNotificationBuffer::globalLock = nullptr;
$HashMap* ArrayNotificationBuffer::mbsToBuffer = nullptr;
$QueryExp* ArrayNotificationBuffer::broadcasterQuery = nullptr;
$NotificationFilter* ArrayNotificationBuffer::creationFilter = nullptr;
$ClassLogger* ArrayNotificationBuffer::logger = nullptr;
$String* ArrayNotificationBuffer::broadcasterClass = nullptr;

$NotificationBuffer* ArrayNotificationBuffer::getNotificationBuffer($MBeanServer* mbs, $Map* env$renamed) {
	$init(ArrayNotificationBuffer);
	$useLocalCurrentObjectStackCache();
	$var($Map, env, env$renamed);
	if (env == nullptr) {
		$assign(env, $Collections::emptyMap());
	}
	int32_t queueSize = $EnvHelp::getNotifBufferSize(env);
	$var(ArrayNotificationBuffer, buf, nullptr);
	bool create = false;
	$var($NotificationBuffer, sharer, nullptr);
	$synchronized(ArrayNotificationBuffer::globalLock) {
		$assign(buf, $cast(ArrayNotificationBuffer, $nc(ArrayNotificationBuffer::mbsToBuffer)->get(mbs)));
		create = (buf == nullptr);
		if (create) {
			$assign(buf, $new(ArrayNotificationBuffer, mbs, queueSize));
			$nc(ArrayNotificationBuffer::mbsToBuffer)->put(mbs, buf);
		}
		$assign(sharer, $new($ArrayNotificationBuffer$ShareBuffer, static_cast<ArrayNotificationBuffer*>($nc(buf)), queueSize));
	}
	if (create) {
		$nc(buf)->createListeners();
	}
	return sharer;
}

void ArrayNotificationBuffer::removeNotificationBuffer($MBeanServer* mbs) {
	$init(ArrayNotificationBuffer);
	$synchronized(ArrayNotificationBuffer::globalLock) {
		$nc(ArrayNotificationBuffer::mbsToBuffer)->remove(mbs);
	}
}

void ArrayNotificationBuffer::addSharer($ArrayNotificationBuffer$ShareBuffer* sharer) {
	$synchronized(ArrayNotificationBuffer::globalLock) {
		$synchronized(this) {
			if ($nc(sharer)->getSize() > this->queueSize) {
				resize(sharer->getSize());
			}
		}
		$nc(this->sharers)->add(sharer);
	}
}

void ArrayNotificationBuffer::removeSharer($ArrayNotificationBuffer$ShareBuffer* sharer) {
	$useLocalCurrentObjectStackCache();
	bool empty = false;
	$synchronized(ArrayNotificationBuffer::globalLock) {
		$nc(this->sharers)->remove(sharer);
		empty = $nc(this->sharers)->isEmpty();
		if (empty) {
			removeNotificationBuffer(this->mBeanServer);
		} else {
			int32_t max = 0;
			{
				$var($Iterator, i$, $nc(this->sharers)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($ArrayNotificationBuffer$ShareBuffer, buf, $cast($ArrayNotificationBuffer$ShareBuffer, i$->next()));
					{
						int32_t bufsize = $nc(buf)->getSize();
						if (bufsize > max) {
							max = bufsize;
						}
					}
				}
			}
			if (max < this->queueSize) {
				resize(max);
			}
		}
	}
	if (empty) {
		$synchronized(this) {
			this->disposed = true;
			$of(this)->notifyAll();
		}
		destroyListeners();
	}
}

void ArrayNotificationBuffer::resize(int32_t newSize) {
	$synchronized(this) {
		if (newSize == this->queueSize) {
			return;
		}
		while ($nc(this->queue)->size() > newSize) {
			dropNotification();
		}
		$nc(this->queue)->resize(newSize);
		this->queueSize = newSize;
	}
}

void ArrayNotificationBuffer::init$($MBeanServer* mbs, int32_t queueSize) {
	$useLocalCurrentObjectStackCache();
	this->disposed = false;
	$set(this, sharers, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>($new($HashSet, 1)))));
	$set(this, bufferListener, $new($ArrayNotificationBuffer$BufferListener, this));
	$set(this, creationListener, $new($ArrayNotificationBuffer$5, this));
	if ($nc(ArrayNotificationBuffer::logger)->traceOn()) {
		$nc(ArrayNotificationBuffer::logger)->trace("Constructor"_s, $$str({"queueSize="_s, $$str(queueSize)}));
	}
	if (mbs == nullptr || queueSize < 1) {
		$throwNew($IllegalArgumentException, "Bad args"_s);
	}
	$set(this, mBeanServer, mbs);
	this->queueSize = queueSize;
	$set(this, queue, $new($ArrayQueue, queueSize));
	this->earliestSequenceNumber$ = $System::currentTimeMillis();
	this->nextSequenceNumber$ = this->earliestSequenceNumber$;
	$nc(ArrayNotificationBuffer::logger)->trace("Constructor"_s, "ends"_s);
}

bool ArrayNotificationBuffer::isDisposed() {
	$synchronized(this) {
		return this->disposed;
	}
}

void ArrayNotificationBuffer::dispose() {
	$throwNew($UnsupportedOperationException);
}

$NotificationResult* ArrayNotificationBuffer::fetchNotifications($NotificationBufferFilter* filter, int64_t startSequenceNumber, int64_t timeout, int32_t maxNotifications) {
	$useLocalCurrentObjectStackCache();
	$nc(ArrayNotificationBuffer::logger)->trace("fetchNotifications"_s, "starts"_s);
	if (startSequenceNumber < 0 || isDisposed()) {
		$synchronized(this) {
			int64_t var$0 = earliestSequenceNumber();
			return $new($NotificationResult, var$0, nextSequenceNumber(), $$new($TargetedNotificationArray, 0));
		}
	}
	if (filter == nullptr || startSequenceNumber < 0 || timeout < 0 || maxNotifications < 0) {
		$nc(ArrayNotificationBuffer::logger)->trace("fetchNotifications"_s, "Bad args"_s);
		$throwNew($IllegalArgumentException, "Bad args to fetch"_s);
	}
	if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
		$nc(ArrayNotificationBuffer::logger)->trace("fetchNotifications"_s, $$str({"filter="_s, filter, "; startSeq="_s, $$str(startSequenceNumber), "; timeout="_s, $$str(timeout), "; max="_s, $$str(maxNotifications)}));
	}
	if (startSequenceNumber > nextSequenceNumber()) {
		$var($String, msg, $str({"Start sequence number too big: "_s, $$str(startSequenceNumber), " > "_s, $$str(nextSequenceNumber())}));
		$nc(ArrayNotificationBuffer::logger)->trace("fetchNotifications"_s, msg);
		$throwNew($IllegalArgumentException, msg);
	}
	int64_t endTime = $System::currentTimeMillis() + timeout;
	if (endTime < 0) {
		endTime = $Long::MAX_VALUE;
	}
	if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
		$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, $$str({"endTime="_s, $$str(endTime)}));
	}
	int64_t earliestSeq = -1;
	int64_t nextSeq = startSequenceNumber;
	$var($List, notifs, $new($ArrayList));
	while (true) {
		$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, "main loop starts"_s);
		$var($ArrayNotificationBuffer$NamedNotification, candidate, nullptr);
		$synchronized(this) {
			if (earliestSeq < 0) {
				earliestSeq = earliestSequenceNumber();
				if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
					$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, $$str({"earliestSeq="_s, $$str(earliestSeq)}));
				}
				if (nextSeq < earliestSeq) {
					nextSeq = earliestSeq;
					$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, "nextSeq=earliestSeq"_s);
				}
			} else {
				earliestSeq = earliestSequenceNumber();
			}
			if (nextSeq < earliestSeq) {
				$nc(ArrayNotificationBuffer::logger)->trace("fetchNotifications"_s, $$str({"nextSeq="_s, $$str(nextSeq), " < earliestSeq="_s, $$str(earliestSeq), " so may have lost notifs"_s}));
				break;
			}
			if (nextSeq < nextSequenceNumber()) {
				$assign(candidate, notificationAt(nextSeq));
				if (!($instanceOf($ServerNotifForwarder$NotifForwarderBufferFilter, filter))) {
					try {
						$ServerNotifForwarder::checkMBeanPermission(this->mBeanServer, $($nc(candidate)->getObjectName()), "addNotificationListener"_s);
					} catch ($InstanceNotFoundException& e) {
						if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
							$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, $$str({"candidate: "_s, candidate, " skipped. exception "_s, e}));
						}
						++nextSeq;
						continue;
					} catch ($SecurityException& e) {
						if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
							$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, $$str({"candidate: "_s, candidate, " skipped. exception "_s, e}));
						}
						++nextSeq;
						continue;
					}
				}
				if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
					$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, $$str({"candidate: "_s, candidate}));
					$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, $$str({"nextSeq now "_s, $$str(nextSeq)}));
				}
			} else {
				if (notifs->size() > 0) {
					$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, "no more notifs but have some so don\'t wait"_s);
					break;
				}
				int64_t toWait = endTime - $System::currentTimeMillis();
				if (toWait <= 0) {
					$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, "timeout"_s);
					break;
				}
				if (isDisposed()) {
					if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
						$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, "dispose callled, no wait"_s);
					}
					int64_t var$1 = earliestSequenceNumber();
					return $new($NotificationResult, var$1, nextSequenceNumber(), $$new($TargetedNotificationArray, 0));
				}
				if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
					$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, $$str({"wait("_s, $$str(toWait), ")"_s}));
				}
				$of(this)->wait(toWait);
				continue;
			}
		}
		$var($ObjectName, name, $nc(candidate)->getObjectName());
		$var($Notification, notif, candidate->getNotification());
		$var($List, matchedNotifs, $new($ArrayList));
		$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, "applying filter to candidate"_s);
		$nc(filter)->apply(matchedNotifs, name, notif);
		if (matchedNotifs->size() > 0) {
			if (maxNotifications <= 0) {
				$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, "reached maxNotifications"_s);
				break;
			}
			--maxNotifications;
			if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
				$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, $$str({"add: "_s, matchedNotifs}));
			}
			notifs->addAll(matchedNotifs);
		}
		++nextSeq;
	}
	int32_t nnotifs = notifs->size();
	$var($TargetedNotificationArray, resultNotifs, $new($TargetedNotificationArray, nnotifs));
	notifs->toArray(resultNotifs);
	$var($NotificationResult, nr, $new($NotificationResult, earliestSeq, nextSeq, resultNotifs));
	if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
		$nc(ArrayNotificationBuffer::logger)->debug("fetchNotifications"_s, $(nr->toString()));
	}
	$nc(ArrayNotificationBuffer::logger)->trace("fetchNotifications"_s, "ends"_s);
	return nr;
}

int64_t ArrayNotificationBuffer::earliestSequenceNumber() {
	$synchronized(this) {
		return this->earliestSequenceNumber$;
	}
}

int64_t ArrayNotificationBuffer::nextSequenceNumber() {
	$synchronized(this) {
		return this->nextSequenceNumber$;
	}
}

void ArrayNotificationBuffer::addNotification($ArrayNotificationBuffer$NamedNotification* notif) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($nc(ArrayNotificationBuffer::logger)->traceOn()) {
			$nc(ArrayNotificationBuffer::logger)->trace("addNotification"_s, $($nc(notif)->toString()));
		}
		while ($nc(this->queue)->size() >= this->queueSize) {
			dropNotification();
			if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
				$nc(ArrayNotificationBuffer::logger)->debug("addNotification"_s, $$str({"dropped oldest notif, earliestSeq="_s, $$str(this->earliestSequenceNumber$)}));
			}
		}
		$nc(this->queue)->add(notif);
		++this->nextSequenceNumber$;
		if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
			$nc(ArrayNotificationBuffer::logger)->debug("addNotification"_s, $$str({"nextSeq="_s, $$str(this->nextSequenceNumber$)}));
		}
		$of(this)->notifyAll();
	}
}

void ArrayNotificationBuffer::dropNotification() {
	$nc(this->queue)->remove(0);
	++this->earliestSequenceNumber$;
}

$ArrayNotificationBuffer$NamedNotification* ArrayNotificationBuffer::notificationAt(int64_t seqNo) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		int64_t index = seqNo - this->earliestSequenceNumber$;
		if (index < 0 || index > $Integer::MAX_VALUE) {
			$var($String, msg, $str({"Bad sequence number: "_s, $$str(seqNo), " (earliest "_s, $$str(this->earliestSequenceNumber$), ")"_s}));
			$nc(ArrayNotificationBuffer::logger)->trace("notificationAt"_s, msg);
			$throwNew($IllegalArgumentException, msg);
		}
		return $cast($ArrayNotificationBuffer$NamedNotification, $nc(this->queue)->get((int32_t)index));
	}
}

void ArrayNotificationBuffer::createListeners() {
	$useLocalCurrentObjectStackCache();
	$nc(ArrayNotificationBuffer::logger)->debug("createListeners"_s, "starts"_s);
	$synchronized(this) {
		$set(this, createdDuringQuery, $new($HashSet));
	}
	try {
		$init($MBeanServerDelegate);
		addNotificationListener($MBeanServerDelegate::DELEGATE_NAME, this->creationListener, ArrayNotificationBuffer::creationFilter, nullptr);
		$nc(ArrayNotificationBuffer::logger)->debug("createListeners"_s, "added creationListener"_s);
	} catch ($Exception& e) {
		$var($String, msg, "Can\'t add listener to MBean server delegate: "_s);
		$var($RuntimeException, re, $new($IllegalArgumentException, $$str({msg, e})));
		$EnvHelp::initCause(re, e);
		$nc(ArrayNotificationBuffer::logger)->fine("createListeners"_s, $$str({msg, e}));
		$nc(ArrayNotificationBuffer::logger)->debug("createListeners"_s, static_cast<$Throwable*>(e));
		$throw(re);
	}
	$var($Set, names, queryNames(nullptr, ArrayNotificationBuffer::broadcasterQuery));
	$assign(names, $new($HashSet, static_cast<$Collection*>(names)));
	$synchronized(this) {
		names->addAll(this->createdDuringQuery);
		$set(this, createdDuringQuery, nullptr);
	}
	{
		$var($Iterator, i$, names->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ObjectName, name, $cast($ObjectName, i$->next()));
			addBufferListener(name);
		}
	}
	$nc(ArrayNotificationBuffer::logger)->debug("createListeners"_s, "ends"_s);
}

void ArrayNotificationBuffer::addBufferListener($ObjectName* name) {
	checkNoLocks();
	if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
		$nc(ArrayNotificationBuffer::logger)->debug("addBufferListener"_s, $($nc(name)->toString()));
	}
	try {
		addNotificationListener(name, this->bufferListener, nullptr, name);
	} catch ($Exception& e) {
		$nc(ArrayNotificationBuffer::logger)->trace("addBufferListener"_s, static_cast<$Throwable*>(e));
	}
}

void ArrayNotificationBuffer::removeBufferListener($ObjectName* name) {
	checkNoLocks();
	if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
		$nc(ArrayNotificationBuffer::logger)->debug("removeBufferListener"_s, $($nc(name)->toString()));
	}
	try {
		removeNotificationListener(name, this->bufferListener);
	} catch ($Exception& e) {
		$nc(ArrayNotificationBuffer::logger)->trace("removeBufferListener"_s, static_cast<$Throwable*>(e));
	}
}

void ArrayNotificationBuffer::addNotificationListener($ObjectName* name, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($ArrayNotificationBuffer$1, this, name, listener, filter, handback)));
	} catch ($Exception& e) {
		$throw($(extractException(e)));
	}
}

void ArrayNotificationBuffer::removeNotificationListener($ObjectName* name, $NotificationListener* listener) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($ArrayNotificationBuffer$2, this, name, listener)));
	} catch ($Exception& e) {
		$throw($(extractException(e)));
	}
}

$Set* ArrayNotificationBuffer::queryNames($ObjectName* name, $QueryExp* query) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, $new($ArrayNotificationBuffer$3, this, name, query));
	try {
		return $cast($Set, $AccessController::doPrivileged(act));
	} catch ($RuntimeException& e) {
		$nc(ArrayNotificationBuffer::logger)->fine("queryNames"_s, $$str({"Failed to query names: "_s, e}));
		$nc(ArrayNotificationBuffer::logger)->debug("queryNames"_s, static_cast<$Throwable*>(e));
		$throw(e);
	}
	$shouldNotReachHere();
}

bool ArrayNotificationBuffer::isInstanceOf($MBeanServer* mbs, $ObjectName* name, $String* className) {
	$init(ArrayNotificationBuffer);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrivilegedExceptionAction, act, $new($ArrayNotificationBuffer$4, mbs, name, className));
	try {
		return $nc(($cast($Boolean, $($AccessController::doPrivileged(act)))))->booleanValue();
	} catch ($Exception& e) {
		$nc(ArrayNotificationBuffer::logger)->fine("isInstanceOf"_s, $$str({"failed: "_s, e}));
		$nc(ArrayNotificationBuffer::logger)->debug("isInstanceOf"_s, static_cast<$Throwable*>(e));
		return false;
	}
	$shouldNotReachHere();
}

void ArrayNotificationBuffer::createdNotification($MBeanServerNotification* n) {
	$useLocalCurrentObjectStackCache();
	$init($MBeanServerNotification);
	$var($String, shouldEqual, $MBeanServerNotification::REGISTRATION_NOTIFICATION);
	if (!$nc($($nc(n)->getType()))->equals(shouldEqual)) {
		$nc(ArrayNotificationBuffer::logger)->warning("createNotification"_s, $$str({"bad type: "_s, $(n->getType())}));
		return;
	}
	$var($ObjectName, name, $nc(n)->getMBeanName());
	if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
		$nc(ArrayNotificationBuffer::logger)->debug("createdNotification"_s, $$str({"for: "_s, name}));
	}
	$synchronized(this) {
		if (this->createdDuringQuery != nullptr) {
			$nc(this->createdDuringQuery)->add(name);
			return;
		}
	}
	if (isInstanceOf(this->mBeanServer, name, ArrayNotificationBuffer::broadcasterClass)) {
		addBufferListener(name);
		if (isDisposed()) {
			removeBufferListener(name);
		}
	}
}

void ArrayNotificationBuffer::destroyListeners() {
	$useLocalCurrentObjectStackCache();
	checkNoLocks();
	$nc(ArrayNotificationBuffer::logger)->debug("destroyListeners"_s, "starts"_s);
	try {
		$init($MBeanServerDelegate);
		removeNotificationListener($MBeanServerDelegate::DELEGATE_NAME, this->creationListener);
	} catch ($Exception& e) {
		$nc(ArrayNotificationBuffer::logger)->warning("remove listener from MBeanServer delegate"_s, static_cast<$Throwable*>(e));
	}
	$var($Set, names, queryNames(nullptr, ArrayNotificationBuffer::broadcasterQuery));
	{
		$var($Iterator, i$, $nc(names)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ObjectName, name, $cast($ObjectName, i$->next()));
			{
				if ($nc(ArrayNotificationBuffer::logger)->debugOn()) {
					$nc(ArrayNotificationBuffer::logger)->debug("destroyListeners"_s, $$str({"remove listener from "_s, name}));
				}
				removeBufferListener(name);
			}
		}
	}
	$nc(ArrayNotificationBuffer::logger)->debug("destroyListeners"_s, "ends"_s);
}

void ArrayNotificationBuffer::checkNoLocks() {
	bool var$0 = $Thread::holdsLock(this);
	if (var$0 || $Thread::holdsLock(ArrayNotificationBuffer::globalLock)) {
		$nc(ArrayNotificationBuffer::logger)->warning("checkNoLocks"_s, "lock protocol violation"_s);
	}
}

$Exception* ArrayNotificationBuffer::extractException($Exception* e$renamed) {
	$init(ArrayNotificationBuffer);
	$var($Exception, e, e$renamed);
	while ($instanceOf($PrivilegedActionException, e)) {
		$assign(e, $nc(($cast($PrivilegedActionException, e)))->getException());
	}
	return e;
}

void clinit$ArrayNotificationBuffer($Class* class$) {
	$assignStatic(ArrayNotificationBuffer::globalLock, $new($Object));
	$assignStatic(ArrayNotificationBuffer::mbsToBuffer, $new($HashMap, 1));
	$assignStatic(ArrayNotificationBuffer::broadcasterQuery, $new($ArrayNotificationBuffer$BroadcasterQuery));
	{
		$var($NotificationFilterSupport, nfs, $new($NotificationFilterSupport));
		$init($MBeanServerNotification);
		nfs->enableType($MBeanServerNotification::REGISTRATION_NOTIFICATION);
		$assignStatic(ArrayNotificationBuffer::creationFilter, nfs);
	}
	$assignStatic(ArrayNotificationBuffer::logger, $new($ClassLogger, "javax.management.remote.misc"_s, "ArrayNotificationBuffer"_s));
	$load($NotificationBroadcaster);
	$assignStatic(ArrayNotificationBuffer::broadcasterClass, $NotificationBroadcaster::class$->getName());
}

ArrayNotificationBuffer::ArrayNotificationBuffer() {
}

$Class* ArrayNotificationBuffer::load$($String* name, bool initialize) {
	$loadClass(ArrayNotificationBuffer, name, initialize, &_ArrayNotificationBuffer_ClassInfo_, clinit$ArrayNotificationBuffer, allocate$ArrayNotificationBuffer);
	return class$;
}

$Class* ArrayNotificationBuffer::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com