#include <javax/management/ValueExp.h>

#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {

$CompoundAttribute _ValueExp_MethodAnnotations_setMBeanServer1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _ValueExp_MethodInfo_[] = {
	{"apply", "(Ljavax/management/ObjectName;)Ljavax/management/ValueExp;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _ValueExp_MethodAnnotations_setMBeanServer1},
	{}
};

$ClassInfo _ValueExp_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.ValueExp",
	nullptr,
	"java.io.Serializable",
	nullptr,
	_ValueExp_MethodInfo_
};

$Object* allocate$ValueExp($Class* clazz) {
	return $of($alloc(ValueExp));
}

$Class* ValueExp::load$($String* name, bool initialize) {
	$loadClass(ValueExp, name, initialize, &_ValueExp_ClassInfo_, allocate$ValueExp);
	return class$;
}

$Class* ValueExp::class$ = nullptr;

	} // management
} // javax