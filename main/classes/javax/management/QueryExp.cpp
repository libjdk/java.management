#include <javax/management/QueryExp.h>

#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {

$MethodInfo _QueryExp_MethodInfo_[] = {
	{"apply", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _QueryExp_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.QueryExp",
	nullptr,
	"java.io.Serializable",
	nullptr,
	_QueryExp_MethodInfo_
};

$Object* allocate$QueryExp($Class* clazz) {
	return $of($alloc(QueryExp));
}

$Class* QueryExp::load$($String* name, bool initialize) {
	$loadClass(QueryExp, name, initialize, &_QueryExp_ClassInfo_, allocate$QueryExp);
	return class$;
}

$Class* QueryExp::class$ = nullptr;

	} // management
} // javax