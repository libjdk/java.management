#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$BroadcasterQuery.h>

#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryEval.h>
#include <jcpp.h>

using $ArrayNotificationBuffer = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $QueryEval = ::javax::management::QueryEval;
using $QueryExp = ::javax::management::QueryExp;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ArrayNotificationBuffer$BroadcasterQuery_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayNotificationBuffer$BroadcasterQuery, serialVersionUID)},
	{}
};

$MethodInfo _ArrayNotificationBuffer$BroadcasterQuery_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArrayNotificationBuffer$BroadcasterQuery::*)()>(&ArrayNotificationBuffer$BroadcasterQuery::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC},
	{"*setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ArrayNotificationBuffer$BroadcasterQuery_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$BroadcasterQuery", "com.sun.jmx.remote.internal.ArrayNotificationBuffer", "BroadcasterQuery", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ArrayNotificationBuffer$BroadcasterQuery_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer$BroadcasterQuery",
	"javax.management.QueryEval",
	"javax.management.QueryExp",
	_ArrayNotificationBuffer$BroadcasterQuery_FieldInfo_,
	_ArrayNotificationBuffer$BroadcasterQuery_MethodInfo_,
	nullptr,
	nullptr,
	_ArrayNotificationBuffer$BroadcasterQuery_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer"
};

$Object* allocate$ArrayNotificationBuffer$BroadcasterQuery($Class* clazz) {
	return $of($alloc(ArrayNotificationBuffer$BroadcasterQuery));
}

void ArrayNotificationBuffer$BroadcasterQuery::setMBeanServer($MBeanServer* s) {
	this->$QueryEval::setMBeanServer(s);
}

int32_t ArrayNotificationBuffer$BroadcasterQuery::hashCode() {
	 return this->$QueryEval::hashCode();
}

bool ArrayNotificationBuffer$BroadcasterQuery::equals(Object$* arg0) {
	 return this->$QueryEval::equals(arg0);
}

$Object* ArrayNotificationBuffer$BroadcasterQuery::clone() {
	 return this->$QueryEval::clone();
}

$String* ArrayNotificationBuffer$BroadcasterQuery::toString() {
	 return this->$QueryEval::toString();
}

void ArrayNotificationBuffer$BroadcasterQuery::finalize() {
	this->$QueryEval::finalize();
}

void ArrayNotificationBuffer$BroadcasterQuery::init$() {
	$QueryEval::init$();
}

bool ArrayNotificationBuffer$BroadcasterQuery::apply($ObjectName* name) {
	$var($MBeanServer, mbs, $QueryEval::getMBeanServer());
	$init($ArrayNotificationBuffer);
	return $ArrayNotificationBuffer::isInstanceOf(mbs, name, $ArrayNotificationBuffer::broadcasterClass);
}

ArrayNotificationBuffer$BroadcasterQuery::ArrayNotificationBuffer$BroadcasterQuery() {
}

$Class* ArrayNotificationBuffer$BroadcasterQuery::load$($String* name, bool initialize) {
	$loadClass(ArrayNotificationBuffer$BroadcasterQuery, name, initialize, &_ArrayNotificationBuffer$BroadcasterQuery_ClassInfo_, allocate$ArrayNotificationBuffer$BroadcasterQuery);
	return class$;
}

$Class* ArrayNotificationBuffer$BroadcasterQuery::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com