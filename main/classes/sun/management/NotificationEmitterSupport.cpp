#include <sun/management/NotificationEmitterSupport.h>

#include <java/lang/AssertionError.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/management/ListenerNotFoundException.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <sun/management/NotificationEmitterSupport$ListenerInfo.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $ListenerNotFoundException = ::javax::management::ListenerNotFoundException;
using $Notification = ::javax::management::Notification;
using $NotificationEmitter = ::javax::management::NotificationEmitter;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $NotificationEmitterSupport$ListenerInfo = ::sun::management::NotificationEmitterSupport$ListenerInfo;

namespace sun {
	namespace management {

$FieldInfo _NotificationEmitterSupport_FieldInfo_[] = {
	{"listenerLock", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(NotificationEmitterSupport, listenerLock)},
	{"listenerList", "Ljava/util/List;", "Ljava/util/List<Lsun/management/NotificationEmitterSupport$ListenerInfo;>;", $PRIVATE, $field(NotificationEmitterSupport, listenerList)},
	{}
};

$MethodInfo _NotificationEmitterSupport_MethodInfo_[] = {
	{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(NotificationEmitterSupport::*)()>(&NotificationEmitterSupport::init$))},
	{"addNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"hasListeners", "()Z", nullptr, $PUBLIC},
	{"removeNotificationListener", "(Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC, nullptr, "javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.ListenerNotFoundException"},
	{"sendNotification", "(Ljavax/management/Notification;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NotificationEmitterSupport_InnerClassesInfo_[] = {
	{"sun.management.NotificationEmitterSupport$ListenerInfo", "sun.management.NotificationEmitterSupport", "ListenerInfo", $PRIVATE},
	{}
};

$ClassInfo _NotificationEmitterSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.management.NotificationEmitterSupport",
	"java.lang.Object",
	"javax.management.NotificationEmitter",
	_NotificationEmitterSupport_FieldInfo_,
	_NotificationEmitterSupport_MethodInfo_,
	nullptr,
	nullptr,
	_NotificationEmitterSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.management.NotificationEmitterSupport$ListenerInfo"
};

$Object* allocate$NotificationEmitterSupport($Class* clazz) {
	return $of($alloc(NotificationEmitterSupport));
}

void NotificationEmitterSupport::init$() {
	$set(this, listenerLock, $new($Object));
	$set(this, listenerList, $Collections::emptyList());
}

void NotificationEmitterSupport::addNotificationListener($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$useLocalCurrentObjectStackCache();
	if (listener == nullptr) {
		$throwNew($IllegalArgumentException, "Listener can\'t be null"_s);
	}
	$synchronized(this->listenerLock) {
		$var($List, newList, $new($ArrayList, $nc(this->listenerList)->size() + 1));
		newList->addAll(this->listenerList);
		newList->add($$new($NotificationEmitterSupport$ListenerInfo, this, listener, filter, handback));
		$set(this, listenerList, newList);
	}
}

void NotificationEmitterSupport::removeNotificationListener($NotificationListener* listener) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->listenerLock) {
		$var($List, newList, $new($ArrayList, static_cast<$Collection*>(this->listenerList)));
		for (int32_t i = newList->size() - 1; i >= 0; --i) {
			$var($NotificationEmitterSupport$ListenerInfo, li, $cast($NotificationEmitterSupport$ListenerInfo, newList->get(i)));
			if ($nc(li)->listener == listener) {
				newList->remove(i);
			}
		}
		int32_t var$0 = newList->size();
		if (var$0 == $nc(this->listenerList)->size()) {
			$throwNew($ListenerNotFoundException, "Listener not registered"_s);
		}
		$set(this, listenerList, newList);
	}
}

void NotificationEmitterSupport::removeNotificationListener($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$useLocalCurrentObjectStackCache();
	bool found = false;
	$synchronized(this->listenerLock) {
		$var($List, newList, $new($ArrayList, static_cast<$Collection*>(this->listenerList)));
		int32_t size = newList->size();
		for (int32_t i = 0; i < size; ++i) {
			$var($NotificationEmitterSupport$ListenerInfo, li, $cast($NotificationEmitterSupport$ListenerInfo, newList->get(i)));
			if ($nc(li)->listener == listener) {
				found = true;
				if (li->filter == filter && $equals(li->handback, handback)) {
					newList->remove(i);
					$set(this, listenerList, newList);
					return;
				}
			}
		}
	}
	if (found) {
		$throwNew($ListenerNotFoundException, "Listener not registered with this filter and handback"_s);
	} else {
		$throwNew($ListenerNotFoundException, "Listener not registered"_s);
	}
}

void NotificationEmitterSupport::sendNotification($Notification* notification) {
	$useLocalCurrentObjectStackCache();
	if (notification == nullptr) {
		return;
	}
	$var($List, currentList, nullptr);
	$synchronized(this->listenerLock) {
		$assign(currentList, this->listenerList);
	}
	int32_t size = $nc(currentList)->size();
	for (int32_t i = 0; i < size; ++i) {
		$var($NotificationEmitterSupport$ListenerInfo, li, $cast($NotificationEmitterSupport$ListenerInfo, currentList->get(i)));
		if ($nc(li)->filter == nullptr || $nc($nc(li)->filter)->isNotificationEnabled(notification)) {
			try {
				$nc(li->listener)->handleNotification(notification, li->handback);
			} catch ($Exception& e) {
				e->printStackTrace();
				$throwNew($AssertionError, $of("Error in invoking listener"_s));
			}
		}
	}
}

bool NotificationEmitterSupport::hasListeners() {
	$synchronized(this->listenerLock) {
		return !$nc(this->listenerList)->isEmpty();
	}
}

NotificationEmitterSupport::NotificationEmitterSupport() {
}

$Class* NotificationEmitterSupport::load$($String* name, bool initialize) {
	$loadClass(NotificationEmitterSupport, name, initialize, &_NotificationEmitterSupport_ClassInfo_, allocate$NotificationEmitterSupport);
	return class$;
}

$Class* NotificationEmitterSupport::class$ = nullptr;

	} // management
} // sun