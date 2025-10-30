#include <com/sun/jmx/remote/internal/ServerNotifForwarder$NotifForwarderBufferFilter.h>

#include <com/sun/jmx/remote/internal/ServerNotifForwarder$IdAndFilter.h>
#include <com/sun/jmx/remote/internal/ServerNotifForwarder.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/ObjectName.h>
#include <javax/management/remote/TargetedNotification.h>
#include <jcpp.h>

using $ServerNotifForwarder$IdAndFilterArray = $Array<::com::sun::jmx::remote::internal::ServerNotifForwarder$IdAndFilter>;
using $NotificationBufferFilter = ::com::sun::jmx::remote::internal::NotificationBufferFilter;
using $ServerNotifForwarder = ::com::sun::jmx::remote::internal::ServerNotifForwarder;
using $ServerNotifForwarder$IdAndFilter = ::com::sun::jmx::remote::internal::ServerNotifForwarder$IdAndFilter;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Notification = ::javax::management::Notification;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $ObjectName = ::javax::management::ObjectName;
using $TargetedNotification = ::javax::management::remote::TargetedNotification;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ServerNotifForwarder$NotifForwarderBufferFilter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/remote/internal/ServerNotifForwarder;", nullptr, $FINAL | $SYNTHETIC, $field(ServerNotifForwarder$NotifForwarderBufferFilter, this$0)},
	{}
};

$MethodInfo _ServerNotifForwarder$NotifForwarderBufferFilter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/remote/internal/ServerNotifForwarder;)V", nullptr, 0, $method(static_cast<void(ServerNotifForwarder$NotifForwarderBufferFilter::*)($ServerNotifForwarder*)>(&ServerNotifForwarder$NotifForwarderBufferFilter::init$))},
	{"apply", "(Ljava/util/List;Ljavax/management/ObjectName;Ljavax/management/Notification;)V", "(Ljava/util/List<Ljavax/management/remote/TargetedNotification;>;Ljavax/management/ObjectName;Ljavax/management/Notification;)V", $PUBLIC},
	{}
};

$InnerClassInfo _ServerNotifForwarder$NotifForwarderBufferFilter_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ServerNotifForwarder$NotifForwarderBufferFilter", "com.sun.jmx.remote.internal.ServerNotifForwarder", "NotifForwarderBufferFilter", $FINAL},
	{}
};

$ClassInfo _ServerNotifForwarder$NotifForwarderBufferFilter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.remote.internal.ServerNotifForwarder$NotifForwarderBufferFilter",
	"java.lang.Object",
	"com.sun.jmx.remote.internal.NotificationBufferFilter",
	_ServerNotifForwarder$NotifForwarderBufferFilter_FieldInfo_,
	_ServerNotifForwarder$NotifForwarderBufferFilter_MethodInfo_,
	nullptr,
	nullptr,
	_ServerNotifForwarder$NotifForwarderBufferFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ServerNotifForwarder"
};

$Object* allocate$ServerNotifForwarder$NotifForwarderBufferFilter($Class* clazz) {
	return $of($alloc(ServerNotifForwarder$NotifForwarderBufferFilter));
}

void ServerNotifForwarder$NotifForwarderBufferFilter::init$($ServerNotifForwarder* this$0) {
	$set(this, this$0, this$0);
}

void ServerNotifForwarder$NotifForwarderBufferFilter::apply($List* targetedNotifs, $ObjectName* source, $Notification* notif) {
	$useLocalCurrentObjectStackCache();
	$var($ServerNotifForwarder$IdAndFilterArray, candidates, nullptr);
	$synchronized(this->this$0->listenerMap) {
		$var($Set, set, $cast($Set, $nc(this->this$0->listenerMap)->get(source)));
		if (set == nullptr) {
			$init($ServerNotifForwarder);
			$nc($ServerNotifForwarder::logger)->debug("bufferFilter"_s, "no listeners for this name"_s);
			return;
		}
		$assign(candidates, $new($ServerNotifForwarder$IdAndFilterArray, $nc(set)->size()));
		set->toArray(candidates);
	}
	{
		$var($ServerNotifForwarder$IdAndFilterArray, arr$, candidates);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ServerNotifForwarder$IdAndFilter, idaf, arr$->get(i$));
			{
				$var($NotificationFilter, nf, $nc(idaf)->getFilter());
				if (nf == nullptr || $nc(nf)->isNotificationEnabled(notif)) {
					$init($ServerNotifForwarder);
					$nc($ServerNotifForwarder::logger)->debug("bufferFilter"_s, "filter matches"_s);
					$var($TargetedNotification, tn, $new($TargetedNotification, notif, $(idaf->getId())));
					if (this->this$0->allowNotificationEmission(source, tn)) {
						$nc(targetedNotifs)->add(tn);
					}
				}
			}
		}
	}
}

ServerNotifForwarder$NotifForwarderBufferFilter::ServerNotifForwarder$NotifForwarderBufferFilter() {
}

$Class* ServerNotifForwarder$NotifForwarderBufferFilter::load$($String* name, bool initialize) {
	$loadClass(ServerNotifForwarder$NotifForwarderBufferFilter, name, initialize, &_ServerNotifForwarder$NotifForwarderBufferFilter_ClassInfo_, allocate$ServerNotifForwarder$NotifForwarderBufferFilter);
	return class$;
}

$Class* ServerNotifForwarder$NotifForwarderBufferFilter::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com