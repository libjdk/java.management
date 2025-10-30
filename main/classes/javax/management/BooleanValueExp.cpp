#include <javax/management/BooleanValueExp.h>

#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryEval.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $QueryEval = ::javax::management::QueryEval;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

$CompoundAttribute _BooleanValueExp_MethodAnnotations_setMBeanServer4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _BooleanValueExp_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BooleanValueExp, serialVersionUID)},
	{"val", "Z", nullptr, $PRIVATE, $field(BooleanValueExp, val)},
	{}
};

$MethodInfo _BooleanValueExp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(BooleanValueExp::*)(bool)>(&BooleanValueExp::init$))},
	{"<init>", "(Ljava/lang/Boolean;)V", nullptr, 0, $method(static_cast<void(BooleanValueExp::*)($Boolean*)>(&BooleanValueExp::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Ljavax/management/ValueExp;", nullptr, $PUBLIC, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"getValue", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _BooleanValueExp_MethodAnnotations_setMBeanServer4},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BooleanValueExp_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.BooleanValueExp",
	"javax.management.QueryEval",
	"javax.management.ValueExp",
	_BooleanValueExp_FieldInfo_,
	_BooleanValueExp_MethodInfo_
};

$Object* allocate$BooleanValueExp($Class* clazz) {
	return $of($alloc(BooleanValueExp));
}

int32_t BooleanValueExp::hashCode() {
	 return this->$QueryEval::hashCode();
}

bool BooleanValueExp::equals(Object$* arg0) {
	 return this->$QueryEval::equals(arg0);
}

$Object* BooleanValueExp::clone() {
	 return this->$QueryEval::clone();
}

void BooleanValueExp::finalize() {
	this->$QueryEval::finalize();
}

void BooleanValueExp::init$(bool val) {
	$QueryEval::init$();
	this->val = false;
	this->val = val;
}

void BooleanValueExp::init$($Boolean* val) {
	$QueryEval::init$();
	this->val = false;
	this->val = $nc(val)->booleanValue();
}

$Boolean* BooleanValueExp::getValue() {
	return $Boolean::valueOf(this->val);
}

$String* BooleanValueExp::toString() {
	return $String::valueOf(this->val);
}

$ValueExp* BooleanValueExp::apply($ObjectName* name) {
	return this;
}

void BooleanValueExp::setMBeanServer($MBeanServer* s) {
	$QueryEval::setMBeanServer(s);
}

BooleanValueExp::BooleanValueExp() {
}

$Class* BooleanValueExp::load$($String* name, bool initialize) {
	$loadClass(BooleanValueExp, name, initialize, &_BooleanValueExp_ClassInfo_, allocate$BooleanValueExp);
	return class$;
}

$Class* BooleanValueExp::class$ = nullptr;

	} // management
} // javax