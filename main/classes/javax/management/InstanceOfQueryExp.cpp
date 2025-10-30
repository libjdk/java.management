#include <javax/management/InstanceOfQueryExp.h>

#include <java/lang/ClassCastException.h>
#include <javax/management/BadStringOperationException.h>
#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryEval.h>
#include <javax/management/StringValueExp.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $BadStringOperationException = ::javax::management::BadStringOperationException;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $QueryEval = ::javax::management::QueryEval;
using $QueryExp = ::javax::management::QueryExp;
using $StringValueExp = ::javax::management::StringValueExp;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

$FieldInfo _InstanceOfQueryExp_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InstanceOfQueryExp, serialVersionUID)},
	{"classNameValue", "Ljavax/management/StringValueExp;", nullptr, $PRIVATE, $field(InstanceOfQueryExp, classNameValue)},
	{}
};

$MethodInfo _InstanceOfQueryExp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/management/StringValueExp;)V", nullptr, $PUBLIC, $method(static_cast<void(InstanceOfQueryExp::*)($StringValueExp*)>(&InstanceOfQueryExp::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"getClassNameValue", "()Ljavax/management/StringValueExp;", nullptr, $PUBLIC},
	{"*setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InstanceOfQueryExp_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.InstanceOfQueryExp",
	"javax.management.QueryEval",
	"javax.management.QueryExp",
	_InstanceOfQueryExp_FieldInfo_,
	_InstanceOfQueryExp_MethodInfo_
};

$Object* allocate$InstanceOfQueryExp($Class* clazz) {
	return $of($alloc(InstanceOfQueryExp));
}

void InstanceOfQueryExp::setMBeanServer($MBeanServer* s) {
	this->$QueryEval::setMBeanServer(s);
}

int32_t InstanceOfQueryExp::hashCode() {
	 return this->$QueryEval::hashCode();
}

bool InstanceOfQueryExp::equals(Object$* arg0) {
	 return this->$QueryEval::equals(arg0);
}

$Object* InstanceOfQueryExp::clone() {
	 return this->$QueryEval::clone();
}

void InstanceOfQueryExp::finalize() {
	this->$QueryEval::finalize();
}

void InstanceOfQueryExp::init$($StringValueExp* classNameValue) {
	$QueryEval::init$();
	if (classNameValue == nullptr) {
		$throwNew($IllegalArgumentException, "Null class name."_s);
	}
	$set(this, classNameValue, classNameValue);
}

$StringValueExp* InstanceOfQueryExp::getClassNameValue() {
	return this->classNameValue;
}

bool InstanceOfQueryExp::apply($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	$var($StringValueExp, val, nullptr);
	try {
		$assign(val, $cast($StringValueExp, $nc(this->classNameValue)->apply(name)));
	} catch ($ClassCastException& x) {
		$var($BadStringOperationException, y, $new($BadStringOperationException, $(x->toString())));
		y->initCause(x);
		$throw(y);
	}
	try {
		return $nc($(getMBeanServer()))->isInstanceOf(name, $($nc(val)->getValue()));
	} catch ($InstanceNotFoundException& infe) {
		return false;
	}
	$shouldNotReachHere();
}

$String* InstanceOfQueryExp::toString() {
	return $str({"InstanceOf "_s, $($nc(this->classNameValue)->toString())});
}

InstanceOfQueryExp::InstanceOfQueryExp() {
}

$Class* InstanceOfQueryExp::load$($String* name, bool initialize) {
	$loadClass(InstanceOfQueryExp, name, initialize, &_InstanceOfQueryExp_ClassInfo_, allocate$InstanceOfQueryExp);
	return class$;
}

$Class* InstanceOfQueryExp::class$ = nullptr;

	} // management
} // javax