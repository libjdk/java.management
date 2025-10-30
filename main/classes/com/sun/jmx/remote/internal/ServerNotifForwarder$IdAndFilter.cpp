#include <com/sun/jmx/remote/internal/ServerNotifForwarder$IdAndFilter.h>

#include <com/sun/jmx/remote/internal/ServerNotifForwarder.h>
#include <javax/management/NotificationFilter.h>
#include <jcpp.h>

using $ServerNotifForwarder = ::com::sun::jmx::remote::internal::ServerNotifForwarder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationFilter = ::javax::management::NotificationFilter;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ServerNotifForwarder$IdAndFilter_FieldInfo_[] = {
	{"id", "Ljava/lang/Integer;", nullptr, $PRIVATE, $field(ServerNotifForwarder$IdAndFilter, id)},
	{"filter", "Ljavax/management/NotificationFilter;", nullptr, $PRIVATE, $field(ServerNotifForwarder$IdAndFilter, filter)},
	{}
};

$MethodInfo _ServerNotifForwarder$IdAndFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Integer;Ljavax/management/NotificationFilter;)V", nullptr, 0, $method(static_cast<void(ServerNotifForwarder$IdAndFilter::*)($Integer*,$NotificationFilter*)>(&ServerNotifForwarder$IdAndFilter::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getFilter", "()Ljavax/management/NotificationFilter;", nullptr, 0},
	{"getId", "()Ljava/lang/Integer;", nullptr, 0},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServerNotifForwarder$IdAndFilter_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ServerNotifForwarder$IdAndFilter", "com.sun.jmx.remote.internal.ServerNotifForwarder", "IdAndFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ServerNotifForwarder$IdAndFilter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.internal.ServerNotifForwarder$IdAndFilter",
	"java.lang.Object",
	nullptr,
	_ServerNotifForwarder$IdAndFilter_FieldInfo_,
	_ServerNotifForwarder$IdAndFilter_MethodInfo_,
	nullptr,
	nullptr,
	_ServerNotifForwarder$IdAndFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ServerNotifForwarder"
};

$Object* allocate$ServerNotifForwarder$IdAndFilter($Class* clazz) {
	return $of($alloc(ServerNotifForwarder$IdAndFilter));
}

void ServerNotifForwarder$IdAndFilter::init$($Integer* id, $NotificationFilter* filter) {
	$set(this, id, id);
	$set(this, filter, filter);
}

$Integer* ServerNotifForwarder$IdAndFilter::getId() {
	return this->id;
}

$NotificationFilter* ServerNotifForwarder$IdAndFilter::getFilter() {
	return this->filter;
}

int32_t ServerNotifForwarder$IdAndFilter::hashCode() {
	return $nc(this->id)->hashCode();
}

bool ServerNotifForwarder$IdAndFilter::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	return (($instanceOf(ServerNotifForwarder$IdAndFilter, o)) && $nc($($nc(($cast(ServerNotifForwarder$IdAndFilter, o)))->getId()))->equals($(getId())));
}

ServerNotifForwarder$IdAndFilter::ServerNotifForwarder$IdAndFilter() {
}

$Class* ServerNotifForwarder$IdAndFilter::load$($String* name, bool initialize) {
	$loadClass(ServerNotifForwarder$IdAndFilter, name, initialize, &_ServerNotifForwarder$IdAndFilter_ClassInfo_, allocate$ServerNotifForwarder$IdAndFilter);
	return class$;
}

$Class* ServerNotifForwarder$IdAndFilter::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com