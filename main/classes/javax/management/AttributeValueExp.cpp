#include <javax/management/AttributeValueExp.h>

#include <java/lang/Number.h>
#include <javax/management/BadAttributeValueExpException.h>
#include <javax/management/BooleanValueExp.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/NumericValueExp.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryEval.h>
#include <javax/management/StringValueExp.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $BadAttributeValueExpException = ::javax::management::BadAttributeValueExpException;
using $BooleanValueExp = ::javax::management::BooleanValueExp;
using $MBeanServer = ::javax::management::MBeanServer;
using $NumericValueExp = ::javax::management::NumericValueExp;
using $ObjectName = ::javax::management::ObjectName;
using $QueryEval = ::javax::management::QueryEval;
using $StringValueExp = ::javax::management::StringValueExp;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

$CompoundAttribute _AttributeValueExp_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _AttributeValueExp_MethodAnnotations_setMBeanServer5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _AttributeValueExp_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeValueExp, serialVersionUID)},
	{"attr", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AttributeValueExp, attr)},
	{}
};

$MethodInfo _AttributeValueExp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(AttributeValueExp::*)()>(&AttributeValueExp::init$)), nullptr, nullptr, _AttributeValueExp_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValueExp::*)($String*)>(&AttributeValueExp::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Ljavax/management/ValueExp;", nullptr, $PUBLIC, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"getAttribute", "(Ljavax/management/ObjectName;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getAttributeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _AttributeValueExp_MethodAnnotations_setMBeanServer5},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AttributeValueExp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.AttributeValueExp",
	"java.lang.Object",
	"javax.management.ValueExp",
	_AttributeValueExp_FieldInfo_,
	_AttributeValueExp_MethodInfo_
};

$Object* allocate$AttributeValueExp($Class* clazz) {
	return $of($alloc(AttributeValueExp));
}

void AttributeValueExp::init$() {
}

void AttributeValueExp::init$($String* attr) {
	$set(this, attr, attr);
}

$String* AttributeValueExp::getAttributeName() {
	return this->attr;
}

$ValueExp* AttributeValueExp::apply($ObjectName* name) {
	$var($Object, result, getAttribute(name));
	if ($instanceOf($Number, result)) {
		return $new($NumericValueExp, $cast($Number, result));
	} else if ($instanceOf($String, result)) {
		return $new($StringValueExp, $cast($String, result));
	} else if ($instanceOf($Boolean, result)) {
		return $new($BooleanValueExp, $cast($Boolean, result));
	} else {
		$throwNew($BadAttributeValueExpException, result);
	}
}

$String* AttributeValueExp::toString() {
	return this->attr;
}

void AttributeValueExp::setMBeanServer($MBeanServer* s) {
}

$Object* AttributeValueExp::getAttribute($ObjectName* name) {
	try {
		$var($MBeanServer, server, $QueryEval::getMBeanServer());
		return $of($nc(server)->getAttribute(name, this->attr));
	} catch ($Exception& re) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

AttributeValueExp::AttributeValueExp() {
}

$Class* AttributeValueExp::load$($String* name, bool initialize) {
	$loadClass(AttributeValueExp, name, initialize, &_AttributeValueExp_ClassInfo_, allocate$AttributeValueExp);
	return class$;
}

$Class* AttributeValueExp::class$ = nullptr;

	} // management
} // javax