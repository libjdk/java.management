#include <com/sun/jmx/remote/internal/ClientListenerInfo.h>

#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectName.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectName = ::javax::management::ObjectName;
using $Subject = ::javax::security::auth::Subject;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ClientListenerInfo_FieldInfo_[] = {
	{"name", "Ljavax/management/ObjectName;", nullptr, $PRIVATE | $FINAL, $field(ClientListenerInfo, name)},
	{"listenerID", "Ljava/lang/Integer;", nullptr, $PRIVATE | $FINAL, $field(ClientListenerInfo, listenerID)},
	{"filter", "Ljavax/management/NotificationFilter;", nullptr, $PRIVATE | $FINAL, $field(ClientListenerInfo, filter)},
	{"listener", "Ljavax/management/NotificationListener;", nullptr, $PRIVATE | $FINAL, $field(ClientListenerInfo, listener)},
	{"handback", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ClientListenerInfo, handback)},
	{"delegationSubject", "Ljavax/security/auth/Subject;", nullptr, $PRIVATE | $FINAL, $field(ClientListenerInfo, delegationSubject)},
	{}
};

$MethodInfo _ClientListenerInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Integer;Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;Ljavax/security/auth/Subject;)V", nullptr, $PUBLIC, $method(static_cast<void(ClientListenerInfo::*)($Integer*,$ObjectName*,$NotificationListener*,$NotificationFilter*,Object$*,$Subject*)>(&ClientListenerInfo::init$))},
	{"getDelegationSubject", "()Ljavax/security/auth/Subject;", nullptr, $PUBLIC},
	{"getHandback", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getListener", "()Ljavax/management/NotificationListener;", nullptr, $PUBLIC},
	{"getListenerID", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"getNotificationFilter", "()Ljavax/management/NotificationFilter;", nullptr, $PUBLIC},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC},
	{"sameAs", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC},
	{"sameAs", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;)Z", nullptr, $PUBLIC},
	{"sameAs", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ClientListenerInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.remote.internal.ClientListenerInfo",
	"java.lang.Object",
	nullptr,
	_ClientListenerInfo_FieldInfo_,
	_ClientListenerInfo_MethodInfo_
};

$Object* allocate$ClientListenerInfo($Class* clazz) {
	return $of($alloc(ClientListenerInfo));
}

void ClientListenerInfo::init$($Integer* listenerID, $ObjectName* name, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback, $Subject* delegationSubject) {
	$set(this, listenerID, listenerID);
	$set(this, name, name);
	$set(this, listener, listener);
	$set(this, filter, filter);
	$set(this, handback, handback);
	$set(this, delegationSubject, delegationSubject);
}

$ObjectName* ClientListenerInfo::getObjectName() {
	return this->name;
}

$Integer* ClientListenerInfo::getListenerID() {
	return this->listenerID;
}

$NotificationFilter* ClientListenerInfo::getNotificationFilter() {
	return this->filter;
}

$NotificationListener* ClientListenerInfo::getListener() {
	return this->listener;
}

$Object* ClientListenerInfo::getHandback() {
	return $of(this->handback);
}

$Subject* ClientListenerInfo::getDelegationSubject() {
	return this->delegationSubject;
}

bool ClientListenerInfo::sameAs($ObjectName* name) {
	return ($nc($(getObjectName()))->equals(name));
}

bool ClientListenerInfo::sameAs($ObjectName* name, $NotificationListener* listener) {
	bool var$0 = $nc($(getObjectName()))->equals(name);
	return (var$0 && getListener() == listener);
}

bool ClientListenerInfo::sameAs($ObjectName* name, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	bool var$2 = $nc($(getObjectName()))->equals(name);
	bool var$1 = var$2 && getListener() == listener;
	bool var$0 = var$1 && getNotificationFilter() == filter;
	return (var$0 && $equals(getHandback(), handback));
}

ClientListenerInfo::ClientListenerInfo() {
}

$Class* ClientListenerInfo::load$($String* name, bool initialize) {
	$loadClass(ClientListenerInfo, name, initialize, &_ClientListenerInfo_ClassInfo_, allocate$ClientListenerInfo);
	return class$;
}

$Class* ClientListenerInfo::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com