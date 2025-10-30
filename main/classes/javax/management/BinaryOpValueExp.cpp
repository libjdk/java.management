#include <javax/management/BinaryOpValueExp.h>

#include <javax/management/BadBinaryOpValueExpException.h>
#include <javax/management/BadStringOperationException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/NumericValueExp.h>
#include <javax/management/ObjectName.h>
#include <javax/management/Query.h>
#include <javax/management/QueryEval.h>
#include <javax/management/StringValueExp.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

#undef DIV
#undef MINUS
#undef PLUS
#undef TIMES

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BadBinaryOpValueExpException = ::javax::management::BadBinaryOpValueExpException;
using $BadStringOperationException = ::javax::management::BadStringOperationException;
using $MBeanServer = ::javax::management::MBeanServer;
using $NumericValueExp = ::javax::management::NumericValueExp;
using $ObjectName = ::javax::management::ObjectName;
using $Query = ::javax::management::Query;
using $QueryEval = ::javax::management::QueryEval;
using $StringValueExp = ::javax::management::StringValueExp;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

$CompoundAttribute _BinaryOpValueExp_MethodAnnotations_setMBeanServer9[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _BinaryOpValueExp_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BinaryOpValueExp, serialVersionUID)},
	{"op", "I", nullptr, $PRIVATE, $field(BinaryOpValueExp, op)},
	{"exp1", "Ljavax/management/ValueExp;", nullptr, $PRIVATE, $field(BinaryOpValueExp, exp1)},
	{"exp2", "Ljavax/management/ValueExp;", nullptr, $PRIVATE, $field(BinaryOpValueExp, exp2)},
	{}
};

$MethodInfo _BinaryOpValueExp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BinaryOpValueExp::*)()>(&BinaryOpValueExp::init$))},
	{"<init>", "(ILjavax/management/ValueExp;Ljavax/management/ValueExp;)V", nullptr, $PUBLIC, $method(static_cast<void(BinaryOpValueExp::*)(int32_t,$ValueExp*,$ValueExp*)>(&BinaryOpValueExp::init$))},
	{"apply", "(Ljavax/management/ObjectName;)Ljavax/management/ValueExp;", nullptr, $PUBLIC, nullptr, "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
	{"getLeftValue", "()Ljavax/management/ValueExp;", nullptr, $PUBLIC},
	{"getOperator", "()I", nullptr, $PUBLIC},
	{"getRightValue", "()Ljavax/management/ValueExp;", nullptr, $PUBLIC},
	{"opString", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(BinaryOpValueExp::*)()>(&BinaryOpValueExp::opString)), "javax.management.BadBinaryOpValueExpException"},
	{"parens", "(Ljavax/management/ValueExp;Z)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(BinaryOpValueExp::*)($ValueExp*,bool)>(&BinaryOpValueExp::parens)), "javax.management.BadBinaryOpValueExpException"},
	{"precedence", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BinaryOpValueExp::*)(int32_t)>(&BinaryOpValueExp::precedence)), "javax.management.BadBinaryOpValueExpException"},
	{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _BinaryOpValueExp_MethodAnnotations_setMBeanServer9},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BinaryOpValueExp_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.BinaryOpValueExp",
	"javax.management.QueryEval",
	"javax.management.ValueExp",
	_BinaryOpValueExp_FieldInfo_,
	_BinaryOpValueExp_MethodInfo_
};

$Object* allocate$BinaryOpValueExp($Class* clazz) {
	return $of($alloc(BinaryOpValueExp));
}

int32_t BinaryOpValueExp::hashCode() {
	 return this->$QueryEval::hashCode();
}

bool BinaryOpValueExp::equals(Object$* arg0) {
	 return this->$QueryEval::equals(arg0);
}

$Object* BinaryOpValueExp::clone() {
	 return this->$QueryEval::clone();
}

void BinaryOpValueExp::finalize() {
	this->$QueryEval::finalize();
}

void BinaryOpValueExp::init$() {
	$QueryEval::init$();
}

void BinaryOpValueExp::init$(int32_t o, $ValueExp* v1, $ValueExp* v2) {
	$QueryEval::init$();
	this->op = o;
	$set(this, exp1, v1);
	$set(this, exp2, v2);
}

int32_t BinaryOpValueExp::getOperator() {
	return this->op;
}

$ValueExp* BinaryOpValueExp::getLeftValue() {
	return this->exp1;
}

$ValueExp* BinaryOpValueExp::getRightValue() {
	return this->exp2;
}

$ValueExp* BinaryOpValueExp::apply($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	$var($ValueExp, val1, $nc(this->exp1)->apply(name));
	$var($ValueExp, val2, $nc(this->exp2)->apply(name));
	$var($String, sval1, nullptr);
	$var($String, sval2, nullptr);
	double dval1 = 0.0;
	double dval2 = 0.0;
	int64_t lval1 = 0;
	int64_t lval2 = 0;
	bool numeric = $instanceOf($NumericValueExp, val1);
	if (numeric) {
		if ($nc(($cast($NumericValueExp, val1)))->isLong()) {
			lval1 = $nc(($cast($NumericValueExp, val1)))->longValue();
			lval2 = $nc(($cast($NumericValueExp, val2)))->longValue();
			switch (this->op) {
			case $Query::PLUS:
				{
					return $Query::value(lval1 + lval2);
				}
			case $Query::TIMES:
				{
					return $Query::value(lval1 * lval2);
				}
			case $Query::MINUS:
				{
					return $Query::value(lval1 - lval2);
				}
			case $Query::DIV:
				{
					return $Query::value($div(lval1, lval2));
				}
			}
		} else {
			dval1 = $nc(($cast($NumericValueExp, val1)))->doubleValue();
			dval2 = $nc(($cast($NumericValueExp, val2)))->doubleValue();
			switch (this->op) {
			case $Query::PLUS:
				{
					return $Query::value(dval1 + dval2);
				}
			case $Query::TIMES:
				{
					return $Query::value(dval1 * dval2);
				}
			case $Query::MINUS:
				{
					return $Query::value(dval1 - dval2);
				}
			case $Query::DIV:
				{
					return $Query::value(dval1 / dval2);
				}
			}
		}
	} else {
		$assign(sval1, $nc(($cast($StringValueExp, val1)))->getValue());
		$assign(sval2, $nc(($cast($StringValueExp, val2)))->getValue());
		switch (this->op) {
		case $Query::PLUS:
			{
				return $new($StringValueExp, $$str({sval1, sval2}));
			}
		default:
			{
				$throwNew($BadStringOperationException, $(opString()));
			}
		}
	}
	$throwNew($BadBinaryOpValueExpException, this);
}

$String* BinaryOpValueExp::toString() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, var$2, $$str({$(parens(this->exp1, true)), " "_s}));
		$var($String, var$1, $$concat(var$2, $(opString())));
		$var($String, var$0, $$concat(var$1, " "));
		return $concat(var$0, $(parens(this->exp2, false)));
	} catch ($BadBinaryOpValueExpException& ex) {
		return "invalid expression"_s;
	}
	$shouldNotReachHere();
}

$String* BinaryOpValueExp::parens($ValueExp* subexp, bool left) {
	bool omit = false;
	if ($instanceOf(BinaryOpValueExp, subexp)) {
		int32_t subop = $nc(($cast(BinaryOpValueExp, subexp)))->op;
		if (left) {
			int32_t var$0 = precedence(subop);
			omit = (var$0 >= precedence(this->op));
		} else {
			int32_t var$1 = precedence(subop);
			omit = (var$1 > precedence(this->op));
		}
	} else {
		omit = true;
	}
	if (omit) {
		return $nc($of(subexp))->toString();
	} else {
		return $str({"("_s, subexp, ")"_s});
	}
}

int32_t BinaryOpValueExp::precedence(int32_t xop) {
	switch (xop) {
	case $Query::PLUS:
		{}
	case $Query::MINUS:
		{
			return 0;
		}
	case $Query::TIMES:
		{}
	case $Query::DIV:
		{
			return 1;
		}
	default:
		{
			$throwNew($BadBinaryOpValueExpException, this);
		}
	}
}

$String* BinaryOpValueExp::opString() {
	switch (this->op) {
	case $Query::PLUS:
		{
			return "+"_s;
		}
	case $Query::TIMES:
		{
			return "*"_s;
		}
	case $Query::MINUS:
		{
			return "-"_s;
		}
	case $Query::DIV:
		{
			return "/"_s;
		}
	}
	$throwNew($BadBinaryOpValueExpException, this);
}

void BinaryOpValueExp::setMBeanServer($MBeanServer* s) {
	$QueryEval::setMBeanServer(s);
}

BinaryOpValueExp::BinaryOpValueExp() {
}

$Class* BinaryOpValueExp::load$($String* name, bool initialize) {
	$loadClass(BinaryOpValueExp, name, initialize, &_BinaryOpValueExp_ClassInfo_, allocate$BinaryOpValueExp);
	return class$;
}

$Class* BinaryOpValueExp::class$ = nullptr;

	} // management
} // javax