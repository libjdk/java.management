#include <javax/management/QueryEval.h>

#include <java/lang/InheritableThreadLocal.h>
#include <java/lang/ThreadLocal.h>
#include <javax/management/MBeanServer.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InheritableThreadLocal = ::java::lang::InheritableThreadLocal;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $MBeanServer = ::javax::management::MBeanServer;

namespace javax {
	namespace management {

$FieldInfo _QueryEval_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QueryEval, serialVersionUID)},
	{"server", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljavax/management/MBeanServer;>;", $PRIVATE | $STATIC, $staticField(QueryEval, server)},
	{}
};

$MethodInfo _QueryEval_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(QueryEval::*)()>(&QueryEval::init$))},
	{"getMBeanServer", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MBeanServer*(*)()>(&QueryEval::getMBeanServer))},
	{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _QueryEval_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.management.QueryEval",
	"java.lang.Object",
	"java.io.Serializable",
	_QueryEval_FieldInfo_,
	_QueryEval_MethodInfo_
};

$Object* allocate$QueryEval($Class* clazz) {
	return $of($alloc(QueryEval));
}

$ThreadLocal* QueryEval::server = nullptr;

void QueryEval::init$() {
}

void QueryEval::setMBeanServer($MBeanServer* s) {
	$nc(QueryEval::server)->set(s);
}

$MBeanServer* QueryEval::getMBeanServer() {
	$init(QueryEval);
	return $cast($MBeanServer, $nc(QueryEval::server)->get());
}

void clinit$QueryEval($Class* class$) {
	$assignStatic(QueryEval::server, $new($InheritableThreadLocal));
}

QueryEval::QueryEval() {
}

$Class* QueryEval::load$($String* name, bool initialize) {
	$loadClass(QueryEval, name, initialize, &_QueryEval_ClassInfo_, clinit$QueryEval, allocate$QueryEval);
	return class$;
}

$Class* QueryEval::class$ = nullptr;

	} // management
} // javax