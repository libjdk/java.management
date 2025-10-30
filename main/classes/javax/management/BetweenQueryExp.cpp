#include <javax/management/BetweenQueryExp.h>

#include <javax/management/MBeanServer.h>
#include <javax/management/NumericValueExp.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryEval.h>
#include <javax/management/StringValueExp.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $NumericValueExp = ::javax::management::NumericValueExp;
using $ObjectName = ::javax::management::ObjectName;
using $QueryEval = ::javax::management::QueryEval;
using $QueryExp = ::javax::management::QueryExp;
using $StringValueExp = ::javax::management::StringValueExp;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

$FieldInfo _BetweenQueryExp_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BetweenQueryExp, serialVersionUID)},
	{"exp1", "Ljavax/management/ValueExp;", nullptr, $PRIVATE, $field(BetweenQueryExp, exp1)},
	{"exp2", "Ljavax/management/ValueExp;", nullptr, $PRIVATE, $field(BetweenQueryExp, exp2)},
	{"exp3", "Ljavax/management/ValueExp;", nullptr, $PRIVATE, $field(BetweenQueryExp, exp3)},
	{}
};

$MethodInfo _BetweenQueryExp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BetweenQueryExp::*)()>(&BetweenQueryExp::init$))},
	{"<init>", "(Ljavax/management/ValueExp;Ljavax/management/ValueExp;Ljavax/management/ValueExp;)V", nullptr, $PUBLIC, $method(static_cast<void(BetweenQueryExp::*)($ValueExp*,$ValueExp*,$ValueExp*)>(&BetweenQueryExp::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"getCheckedValue", "()Ljavax/management/ValueExp;", nullptr, $PUBLIC},
	{"getLowerBound", "()Ljavax/management/ValueExp;", nullptr, $PUBLIC},
	{"getUpperBound", "()Ljavax/management/ValueExp;", nullptr, $PUBLIC},
	{"*setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BetweenQueryExp_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.BetweenQueryExp",
	"javax.management.QueryEval",
	"javax.management.QueryExp",
	_BetweenQueryExp_FieldInfo_,
	_BetweenQueryExp_MethodInfo_
};

$Object* allocate$BetweenQueryExp($Class* clazz) {
	return $of($alloc(BetweenQueryExp));
}

void BetweenQueryExp::setMBeanServer($MBeanServer* s) {
	this->$QueryEval::setMBeanServer(s);
}

int32_t BetweenQueryExp::hashCode() {
	 return this->$QueryEval::hashCode();
}

bool BetweenQueryExp::equals(Object$* arg0) {
	 return this->$QueryEval::equals(arg0);
}

$Object* BetweenQueryExp::clone() {
	 return this->$QueryEval::clone();
}

void BetweenQueryExp::finalize() {
	this->$QueryEval::finalize();
}

void BetweenQueryExp::init$() {
	$QueryEval::init$();
}

void BetweenQueryExp::init$($ValueExp* v1, $ValueExp* v2, $ValueExp* v3) {
	$QueryEval::init$();
	$set(this, exp1, v1);
	$set(this, exp2, v2);
	$set(this, exp3, v3);
}

$ValueExp* BetweenQueryExp::getCheckedValue() {
	return this->exp1;
}

$ValueExp* BetweenQueryExp::getLowerBound() {
	return this->exp2;
}

$ValueExp* BetweenQueryExp::getUpperBound() {
	return this->exp3;
}

bool BetweenQueryExp::apply($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	$var($ValueExp, val1, $nc(this->exp1)->apply(name));
	$var($ValueExp, val2, $nc(this->exp2)->apply(name));
	$var($ValueExp, val3, $nc(this->exp3)->apply(name));
	bool numeric = $instanceOf($NumericValueExp, val1);
	if (numeric) {
		if ($nc(($cast($NumericValueExp, val1)))->isLong()) {
			int64_t lval1 = $nc(($cast($NumericValueExp, val1)))->longValue();
			int64_t lval2 = $nc(($cast($NumericValueExp, val2)))->longValue();
			int64_t lval3 = $nc(($cast($NumericValueExp, val3)))->longValue();
			return lval2 <= lval1 && lval1 <= lval3;
		} else {
			double dval1 = $nc(($cast($NumericValueExp, val1)))->doubleValue();
			double dval2 = $nc(($cast($NumericValueExp, val2)))->doubleValue();
			double dval3 = $nc(($cast($NumericValueExp, val3)))->doubleValue();
			return dval2 <= dval1 && dval1 <= dval3;
		}
	} else {
		$var($String, sval1, $nc(($cast($StringValueExp, val1)))->getValue());
		$var($String, sval2, $nc(($cast($StringValueExp, val2)))->getValue());
		$var($String, sval3, $nc(($cast($StringValueExp, val3)))->getValue());
		bool var$0 = $nc(sval2)->compareTo(sval1) <= 0;
		return var$0 && $nc(sval1)->compareTo(sval3) <= 0;
	}
}

$String* BetweenQueryExp::toString() {
	return $str({"("_s, this->exp1, ") between ("_s, this->exp2, ") and ("_s, this->exp3, ")"_s});
}

BetweenQueryExp::BetweenQueryExp() {
}

$Class* BetweenQueryExp::load$($String* name, bool initialize) {
	$loadClass(BetweenQueryExp, name, initialize, &_BetweenQueryExp_ClassInfo_, allocate$BetweenQueryExp);
	return class$;
}

$Class* BetweenQueryExp::class$ = nullptr;

	} // management
} // javax