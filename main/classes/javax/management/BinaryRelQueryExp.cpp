#include <javax/management/BinaryRelQueryExp.h>

#include <javax/management/BooleanValueExp.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/NumericValueExp.h>
#include <javax/management/ObjectName.h>
#include <javax/management/Query.h>
#include <javax/management/QueryEval.h>
#include <javax/management/StringValueExp.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

#undef EQ
#undef GE
#undef GT
#undef LE
#undef LT

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BooleanValueExp = ::javax::management::BooleanValueExp;
using $MBeanServer = ::javax::management::MBeanServer;
using $NumericValueExp = ::javax::management::NumericValueExp;
using $ObjectName = ::javax::management::ObjectName;
using $Query = ::javax::management::Query;
using $QueryEval = ::javax::management::QueryEval;
using $QueryExp = ::javax::management::QueryExp;
using $StringValueExp = ::javax::management::StringValueExp;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

$FieldInfo _BinaryRelQueryExp_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BinaryRelQueryExp, serialVersionUID)},
	{"relOp", "I", nullptr, $PRIVATE, $field(BinaryRelQueryExp, relOp)},
	{"exp1", "Ljavax/management/ValueExp;", nullptr, $PRIVATE, $field(BinaryRelQueryExp, exp1)},
	{"exp2", "Ljavax/management/ValueExp;", nullptr, $PRIVATE, $field(BinaryRelQueryExp, exp2)},
	{}
};

$MethodInfo _BinaryRelQueryExp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BinaryRelQueryExp::*)()>(&BinaryRelQueryExp::init$))},
	{"<init>", "(ILjavax/management/ValueExp;Ljavax/management/ValueExp;)V", nullptr, $PUBLIC, $method(static_cast<void(BinaryRelQueryExp::*)(int32_t,$ValueExp*,$ValueExp*)>(&BinaryRelQueryExp::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"getLeftValue", "()Ljavax/management/ValueExp;", nullptr, $PUBLIC},
	{"getOperator", "()I", nullptr, $PUBLIC},
	{"getRightValue", "()Ljavax/management/ValueExp;", nullptr, $PUBLIC},
	{"relOpString", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(BinaryRelQueryExp::*)()>(&BinaryRelQueryExp::relOpString))},
	{"*setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BinaryRelQueryExp_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.BinaryRelQueryExp",
	"javax.management.QueryEval",
	"javax.management.QueryExp",
	_BinaryRelQueryExp_FieldInfo_,
	_BinaryRelQueryExp_MethodInfo_
};

$Object* allocate$BinaryRelQueryExp($Class* clazz) {
	return $of($alloc(BinaryRelQueryExp));
}

void BinaryRelQueryExp::setMBeanServer($MBeanServer* s) {
	this->$QueryEval::setMBeanServer(s);
}

int32_t BinaryRelQueryExp::hashCode() {
	 return this->$QueryEval::hashCode();
}

bool BinaryRelQueryExp::equals(Object$* arg0) {
	 return this->$QueryEval::equals(arg0);
}

$Object* BinaryRelQueryExp::clone() {
	 return this->$QueryEval::clone();
}

void BinaryRelQueryExp::finalize() {
	this->$QueryEval::finalize();
}

void BinaryRelQueryExp::init$() {
	$QueryEval::init$();
}

void BinaryRelQueryExp::init$(int32_t op, $ValueExp* v1, $ValueExp* v2) {
	$QueryEval::init$();
	this->relOp = op;
	$set(this, exp1, v1);
	$set(this, exp2, v2);
}

int32_t BinaryRelQueryExp::getOperator() {
	return this->relOp;
}

$ValueExp* BinaryRelQueryExp::getLeftValue() {
	return this->exp1;
}

$ValueExp* BinaryRelQueryExp::getRightValue() {
	return this->exp2;
}

bool BinaryRelQueryExp::apply($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	$var($Object, val1, $nc(this->exp1)->apply(name));
	$var($Object, val2, $nc(this->exp2)->apply(name));
	bool numeric = $instanceOf($NumericValueExp, val1);
	bool bool$ = $instanceOf($BooleanValueExp, val1);
	if (numeric) {
		if ($nc(($cast($NumericValueExp, val1)))->isLong()) {
			int64_t lval1 = $nc(($cast($NumericValueExp, val1)))->longValue();
			int64_t lval2 = $nc(($cast($NumericValueExp, val2)))->longValue();
			switch (this->relOp) {
			case $Query::GT:
				{
					return lval1 > lval2;
				}
			case $Query::LT:
				{
					return lval1 < lval2;
				}
			case $Query::GE:
				{
					return lval1 >= lval2;
				}
			case $Query::LE:
				{
					return lval1 <= lval2;
				}
			case $Query::EQ:
				{
					return lval1 == lval2;
				}
			}
		} else {
			double dval1 = $nc(($cast($NumericValueExp, val1)))->doubleValue();
			double dval2 = $nc(($cast($NumericValueExp, val2)))->doubleValue();
			switch (this->relOp) {
			case $Query::GT:
				{
					return dval1 > dval2;
				}
			case $Query::LT:
				{
					return dval1 < dval2;
				}
			case $Query::GE:
				{
					return dval1 >= dval2;
				}
			case $Query::LE:
				{
					return dval1 <= dval2;
				}
			case $Query::EQ:
				{
					return dval1 == dval2;
				}
			}
		}
	} else if (bool$) {
		bool bval1 = $nc($($nc(($cast($BooleanValueExp, val1)))->getValue()))->booleanValue();
		bool bval2 = $nc($($nc(($cast($BooleanValueExp, val2)))->getValue()))->booleanValue();
		switch (this->relOp) {
		case $Query::GT:
			{
				return bval1 && !bval2;
			}
		case $Query::LT:
			{
				return !bval1 && bval2;
			}
		case $Query::GE:
			{
				return bval1 || !bval2;
			}
		case $Query::LE:
			{
				return !bval1 || bval2;
			}
		case $Query::EQ:
			{
				return bval1 == bval2;
			}
		}
	} else {
		$var($String, sval1, $nc(($cast($StringValueExp, val1)))->getValue());
		$var($String, sval2, $nc(($cast($StringValueExp, val2)))->getValue());
		switch (this->relOp) {
		case $Query::GT:
			{
				return $nc(sval1)->compareTo(sval2) > 0;
			}
		case $Query::LT:
			{
				return $nc(sval1)->compareTo(sval2) < 0;
			}
		case $Query::GE:
			{
				return $nc(sval1)->compareTo(sval2) >= 0;
			}
		case $Query::LE:
			{
				return $nc(sval1)->compareTo(sval2) <= 0;
			}
		case $Query::EQ:
			{
				return $nc(sval1)->compareTo(sval2) == 0;
			}
		}
	}
	return false;
}

$String* BinaryRelQueryExp::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({"("_s, this->exp1, ") "_s}));
	$var($String, var$2, $$concat(var$3, $(relOpString())));
	$var($String, var$1, $$concat(var$2, " ("));
	$var($String, var$0, $$concat(var$1, this->exp2));
	return $concat(var$0, ")");
}

$String* BinaryRelQueryExp::relOpString() {
	switch (this->relOp) {
	case $Query::GT:
		{
			return ">"_s;
		}
	case $Query::LT:
		{
			return "<"_s;
		}
	case $Query::GE:
		{
			return ">="_s;
		}
	case $Query::LE:
		{
			return "<="_s;
		}
	case $Query::EQ:
		{
			return "="_s;
		}
	}
	return "="_s;
}

BinaryRelQueryExp::BinaryRelQueryExp() {
}

$Class* BinaryRelQueryExp::load$($String* name, bool initialize) {
	$loadClass(BinaryRelQueryExp, name, initialize, &_BinaryRelQueryExp_ClassInfo_, allocate$BinaryRelQueryExp);
	return class$;
}

$Class* BinaryRelQueryExp::class$ = nullptr;

	} // management
} // javax