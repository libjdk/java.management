#include <javax/management/NotQueryExp.h>

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

$FieldInfo _NotQueryExp_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotQueryExp, serialVersionUID)},
	{"exp", "Ljavax/management/QueryExp;", nullptr, $PRIVATE, $field(NotQueryExp, exp)},
	{}
};

$MethodInfo _NotQueryExp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NotQueryExp::*)()>(&NotQueryExp::init$))},
	{"<init>", "(Ljavax/management/QueryExp;)V", nullptr, $PUBLIC, $method(static_cast<void(NotQueryExp::*)($QueryExp*)>(&NotQueryExp::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"getNegatedExp", "()Ljavax/management/QueryExp;", nullptr, $PUBLIC},
	{"*setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NotQueryExp_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.NotQueryExp",
	"javax.management.QueryEval",
	"javax.management.QueryExp",
	_NotQueryExp_FieldInfo_,
	_NotQueryExp_MethodInfo_
};

$Object* allocate$NotQueryExp($Class* clazz) {
	return $of($alloc(NotQueryExp));
}

void NotQueryExp::setMBeanServer($MBeanServer* s) {
	this->$QueryEval::setMBeanServer(s);
}

int32_t NotQueryExp::hashCode() {
	 return this->$QueryEval::hashCode();
}

bool NotQueryExp::equals(Object$* arg0) {
	 return this->$QueryEval::equals(arg0);
}

$Object* NotQueryExp::clone() {
	 return this->$QueryEval::clone();
}

void NotQueryExp::finalize() {
	this->$QueryEval::finalize();
}

void NotQueryExp::init$() {
	$QueryEval::init$();
}

void NotQueryExp::init$($QueryExp* q) {
	$QueryEval::init$();
	$set(this, exp, q);
}

$QueryExp* NotQueryExp::getNegatedExp() {
	return this->exp;
}

bool NotQueryExp::apply($ObjectName* name) {
	return $nc(this->exp)->apply(name) == false;
}

$String* NotQueryExp::toString() {
	return $str({"not ("_s, this->exp, ")"_s});
}

NotQueryExp::NotQueryExp() {
}

$Class* NotQueryExp::load$($String* name, bool initialize) {
	$loadClass(NotQueryExp, name, initialize, &_NotQueryExp_ClassInfo_, allocate$NotQueryExp);
	return class$;
}

$Class* NotQueryExp::class$ = nullptr;

	} // management
} // javax