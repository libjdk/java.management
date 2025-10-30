#include <javax/management/OrQueryExp.h>

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

$FieldInfo _OrQueryExp_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OrQueryExp, serialVersionUID)},
	{"exp1", "Ljavax/management/QueryExp;", nullptr, $PRIVATE, $field(OrQueryExp, exp1)},
	{"exp2", "Ljavax/management/QueryExp;", nullptr, $PRIVATE, $field(OrQueryExp, exp2)},
	{}
};

$MethodInfo _OrQueryExp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OrQueryExp::*)()>(&OrQueryExp::init$))},
	{"<init>", "(Ljavax/management/QueryExp;Ljavax/management/QueryExp;)V", nullptr, $PUBLIC, $method(static_cast<void(OrQueryExp::*)($QueryExp*,$QueryExp*)>(&OrQueryExp::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"getLeftExp", "()Ljavax/management/QueryExp;", nullptr, $PUBLIC},
	{"getRightExp", "()Ljavax/management/QueryExp;", nullptr, $PUBLIC},
	{"*setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OrQueryExp_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.OrQueryExp",
	"javax.management.QueryEval",
	"javax.management.QueryExp",
	_OrQueryExp_FieldInfo_,
	_OrQueryExp_MethodInfo_
};

$Object* allocate$OrQueryExp($Class* clazz) {
	return $of($alloc(OrQueryExp));
}

void OrQueryExp::setMBeanServer($MBeanServer* s) {
	this->$QueryEval::setMBeanServer(s);
}

int32_t OrQueryExp::hashCode() {
	 return this->$QueryEval::hashCode();
}

bool OrQueryExp::equals(Object$* arg0) {
	 return this->$QueryEval::equals(arg0);
}

$Object* OrQueryExp::clone() {
	 return this->$QueryEval::clone();
}

void OrQueryExp::finalize() {
	this->$QueryEval::finalize();
}

void OrQueryExp::init$() {
	$QueryEval::init$();
}

void OrQueryExp::init$($QueryExp* q1, $QueryExp* q2) {
	$QueryEval::init$();
	$set(this, exp1, q1);
	$set(this, exp2, q2);
}

$QueryExp* OrQueryExp::getLeftExp() {
	return this->exp1;
}

$QueryExp* OrQueryExp::getRightExp() {
	return this->exp2;
}

bool OrQueryExp::apply($ObjectName* name) {
	bool var$0 = $nc(this->exp1)->apply(name);
	return var$0 || $nc(this->exp2)->apply(name);
}

$String* OrQueryExp::toString() {
	return $str({"("_s, this->exp1, ") or ("_s, this->exp2, ")"_s});
}

OrQueryExp::OrQueryExp() {
}

$Class* OrQueryExp::load$($String* name, bool initialize) {
	$loadClass(OrQueryExp, name, initialize, &_OrQueryExp_ClassInfo_, allocate$OrQueryExp);
	return class$;
}

$Class* OrQueryExp::class$ = nullptr;

	} // management
} // javax