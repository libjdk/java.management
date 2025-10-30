#include <javax/management/AndQueryExp.h>

#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryEval.h>
#include <javax/management/QueryExp.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $QueryEval = ::javax::management::QueryEval;
using $QueryExp = ::javax::management::QueryExp;

namespace javax {
	namespace management {

$FieldInfo _AndQueryExp_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AndQueryExp, serialVersionUID)},
	{"exp1", "Ljavax/management/QueryExp;", nullptr, $PRIVATE, $field(AndQueryExp, exp1)},
	{"exp2", "Ljavax/management/QueryExp;", nullptr, $PRIVATE, $field(AndQueryExp, exp2)},
	{}
};

$MethodInfo _AndQueryExp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AndQueryExp::*)()>(&AndQueryExp::init$))},
	{"<init>", "(Ljavax/management/QueryExp;Ljavax/management/QueryExp;)V", nullptr, $PUBLIC, $method(static_cast<void(AndQueryExp::*)($QueryExp*,$QueryExp*)>(&AndQueryExp::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"getLeftExp", "()Ljavax/management/QueryExp;", nullptr, $PUBLIC},
	{"getRightExp", "()Ljavax/management/QueryExp;", nullptr, $PUBLIC},
	{"*setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AndQueryExp_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.AndQueryExp",
	"javax.management.QueryEval",
	"javax.management.QueryExp",
	_AndQueryExp_FieldInfo_,
	_AndQueryExp_MethodInfo_
};

$Object* allocate$AndQueryExp($Class* clazz) {
	return $of($alloc(AndQueryExp));
}

void AndQueryExp::setMBeanServer($MBeanServer* s) {
	this->$QueryEval::setMBeanServer(s);
}

int32_t AndQueryExp::hashCode() {
	 return this->$QueryEval::hashCode();
}

bool AndQueryExp::equals(Object$* arg0) {
	 return this->$QueryEval::equals(arg0);
}

$Object* AndQueryExp::clone() {
	 return this->$QueryEval::clone();
}

void AndQueryExp::finalize() {
	this->$QueryEval::finalize();
}

void AndQueryExp::init$() {
	$QueryEval::init$();
}

void AndQueryExp::init$($QueryExp* q1, $QueryExp* q2) {
	$QueryEval::init$();
	$set(this, exp1, q1);
	$set(this, exp2, q2);
}

$QueryExp* AndQueryExp::getLeftExp() {
	return this->exp1;
}

$QueryExp* AndQueryExp::getRightExp() {
	return this->exp2;
}

bool AndQueryExp::apply($ObjectName* name) {
	bool var$0 = $nc(this->exp1)->apply(name);
	return var$0 && $nc(this->exp2)->apply(name);
}

$String* AndQueryExp::toString() {
	return $str({"("_s, this->exp1, ") and ("_s, this->exp2, ")"_s});
}

AndQueryExp::AndQueryExp() {
}

$Class* AndQueryExp::load$($String* name, bool initialize) {
	$loadClass(AndQueryExp, name, initialize, &_AndQueryExp_ClassInfo_, allocate$AndQueryExp);
	return class$;
}

$Class* AndQueryExp::class$ = nullptr;

	} // management
} // javax