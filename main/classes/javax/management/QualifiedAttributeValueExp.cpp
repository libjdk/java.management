#include <javax/management/QualifiedAttributeValueExp.h>

#include <javax/management/AttributeValueExp.h>
#include <javax/management/InvalidApplicationException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryEval.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeValueExp = ::javax::management::AttributeValueExp;
using $InvalidApplicationException = ::javax::management::InvalidApplicationException;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectInstance = ::javax::management::ObjectInstance;
using $ObjectName = ::javax::management::ObjectName;
using $QueryEval = ::javax::management::QueryEval;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

$CompoundAttribute _QualifiedAttributeValueExp_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _QualifiedAttributeValueExp_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QualifiedAttributeValueExp, serialVersionUID)},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(QualifiedAttributeValueExp, className)},
	{}
};

$MethodInfo _QualifiedAttributeValueExp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(QualifiedAttributeValueExp::*)()>(&QualifiedAttributeValueExp::init$)), nullptr, nullptr, _QualifiedAttributeValueExp_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(QualifiedAttributeValueExp::*)($String*,$String*)>(&QualifiedAttributeValueExp::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Ljavax/management/ValueExp;", nullptr, $PUBLIC, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"getAttrClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _QualifiedAttributeValueExp_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.QualifiedAttributeValueExp",
	"javax.management.AttributeValueExp",
	nullptr,
	_QualifiedAttributeValueExp_FieldInfo_,
	_QualifiedAttributeValueExp_MethodInfo_
};

$Object* allocate$QualifiedAttributeValueExp($Class* clazz) {
	return $of($alloc(QualifiedAttributeValueExp));
}

void QualifiedAttributeValueExp::init$() {
	$AttributeValueExp::init$();
}

void QualifiedAttributeValueExp::init$($String* className, $String* attr) {
	$AttributeValueExp::init$(attr);
	$set(this, className, className);
}

$String* QualifiedAttributeValueExp::getAttrClassName() {
	return this->className;
}

$ValueExp* QualifiedAttributeValueExp::apply($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($MBeanServer, server, $QueryEval::getMBeanServer());
		$var($String, v, $nc($($nc(server)->getObjectInstance(name)))->getClassName());
		if ($nc(v)->equals(this->className)) {
			return $AttributeValueExp::apply(name);
		}
		$throwNew($InvalidApplicationException, $$str({"Class name is "_s, v, ", should be "_s, this->className}));
	} catch ($Exception& e) {
		$throwNew($InvalidApplicationException, $$str({"Qualified attribute: "_s, e}));
	}
	$shouldNotReachHere();
}

$String* QualifiedAttributeValueExp::toString() {
	if (this->className != nullptr) {
		return $str({this->className, "."_s, $($AttributeValueExp::toString())});
	} else {
		return $AttributeValueExp::toString();
	}
}

QualifiedAttributeValueExp::QualifiedAttributeValueExp() {
}

$Class* QualifiedAttributeValueExp::load$($String* name, bool initialize) {
	$loadClass(QualifiedAttributeValueExp, name, initialize, &_QualifiedAttributeValueExp_ClassInfo_, allocate$QualifiedAttributeValueExp);
	return class$;
}

$Class* QualifiedAttributeValueExp::class$ = nullptr;

	} // management
} // javax