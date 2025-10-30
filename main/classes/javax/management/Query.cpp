#include <javax/management/Query.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Number.h>
#include <javax/management/AndQueryExp.h>
#include <javax/management/AttributeValueExp.h>
#include <javax/management/BetweenQueryExp.h>
#include <javax/management/BinaryOpValueExp.h>
#include <javax/management/BinaryRelQueryExp.h>
#include <javax/management/BooleanValueExp.h>
#include <javax/management/ClassAttributeValueExp.h>
#include <javax/management/InQueryExp.h>
#include <javax/management/InstanceOfQueryExp.h>
#include <javax/management/MatchQueryExp.h>
#include <javax/management/NotQueryExp.h>
#include <javax/management/NumericValueExp.h>
#include <javax/management/OrQueryExp.h>
#include <javax/management/QualifiedAttributeValueExp.h>
#include <javax/management/QueryExp.h>
#include <javax/management/StringValueExp.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

#undef DIV
#undef EQ
#undef GE
#undef GT
#undef LE
#undef LT
#undef MINUS
#undef PLUS
#undef TIMES

using $ValueExpArray = $Array<::javax::management::ValueExp>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AndQueryExp = ::javax::management::AndQueryExp;
using $AttributeValueExp = ::javax::management::AttributeValueExp;
using $BetweenQueryExp = ::javax::management::BetweenQueryExp;
using $BinaryOpValueExp = ::javax::management::BinaryOpValueExp;
using $BinaryRelQueryExp = ::javax::management::BinaryRelQueryExp;
using $BooleanValueExp = ::javax::management::BooleanValueExp;
using $ClassAttributeValueExp = ::javax::management::ClassAttributeValueExp;
using $InQueryExp = ::javax::management::InQueryExp;
using $InstanceOfQueryExp = ::javax::management::InstanceOfQueryExp;
using $MatchQueryExp = ::javax::management::MatchQueryExp;
using $NotQueryExp = ::javax::management::NotQueryExp;
using $NumericValueExp = ::javax::management::NumericValueExp;
using $OrQueryExp = ::javax::management::OrQueryExp;
using $QualifiedAttributeValueExp = ::javax::management::QualifiedAttributeValueExp;
using $QueryExp = ::javax::management::QueryExp;
using $StringValueExp = ::javax::management::StringValueExp;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

$FieldInfo _Query_FieldInfo_[] = {
	{"GT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Query, GT)},
	{"LT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Query, LT)},
	{"GE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Query, GE)},
	{"LE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Query, LE)},
	{"EQ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Query, EQ)},
	{"PLUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Query, PLUS)},
	{"MINUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Query, MINUS)},
	{"TIMES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Query, TIMES)},
	{"DIV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Query, DIV)},
	{}
};

$MethodInfo _Query_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Query::*)()>(&Query::init$))},
	{"and", "(Ljavax/management/QueryExp;Ljavax/management/QueryExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($QueryExp*,$QueryExp*)>(&Query::and$))},
	{"anySubString", "(Ljavax/management/AttributeValueExp;Ljavax/management/StringValueExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($AttributeValueExp*,$StringValueExp*)>(&Query::anySubString))},
	{"attr", "(Ljava/lang/String;)Ljavax/management/AttributeValueExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AttributeValueExp*(*)($String*)>(&Query::attr))},
	{"attr", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/management/AttributeValueExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AttributeValueExp*(*)($String*,$String*)>(&Query::attr))},
	{"between", "(Ljavax/management/ValueExp;Ljavax/management/ValueExp;Ljavax/management/ValueExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($ValueExp*,$ValueExp*,$ValueExp*)>(&Query::between))},
	{"classattr", "()Ljavax/management/AttributeValueExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AttributeValueExp*(*)()>(&Query::classattr))},
	{"div", "(Ljavax/management/ValueExp;Ljavax/management/ValueExp;)Ljavax/management/ValueExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ValueExp*(*)($ValueExp*,$ValueExp*)>(&Query::div))},
	{"eq", "(Ljavax/management/ValueExp;Ljavax/management/ValueExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($ValueExp*,$ValueExp*)>(&Query::eq))},
	{"escapeString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Query::escapeString))},
	{"finalSubString", "(Ljavax/management/AttributeValueExp;Ljavax/management/StringValueExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($AttributeValueExp*,$StringValueExp*)>(&Query::finalSubString))},
	{"geq", "(Ljavax/management/ValueExp;Ljavax/management/ValueExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($ValueExp*,$ValueExp*)>(&Query::geq))},
	{"gt", "(Ljavax/management/ValueExp;Ljavax/management/ValueExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($ValueExp*,$ValueExp*)>(&Query::gt))},
	{"in", "(Ljavax/management/ValueExp;[Ljavax/management/ValueExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($ValueExp*,$ValueExpArray*)>(&Query::in))},
	{"initialSubString", "(Ljavax/management/AttributeValueExp;Ljavax/management/StringValueExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($AttributeValueExp*,$StringValueExp*)>(&Query::initialSubString))},
	{"isInstanceOf", "(Ljavax/management/StringValueExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($StringValueExp*)>(&Query::isInstanceOf))},
	{"leq", "(Ljavax/management/ValueExp;Ljavax/management/ValueExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($ValueExp*,$ValueExp*)>(&Query::leq))},
	{"lt", "(Ljavax/management/ValueExp;Ljavax/management/ValueExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($ValueExp*,$ValueExp*)>(&Query::lt))},
	{"match", "(Ljavax/management/AttributeValueExp;Ljavax/management/StringValueExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($AttributeValueExp*,$StringValueExp*)>(&Query::match))},
	{"minus", "(Ljavax/management/ValueExp;Ljavax/management/ValueExp;)Ljavax/management/ValueExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ValueExp*(*)($ValueExp*,$ValueExp*)>(&Query::minus))},
	{"not", "(Ljavax/management/QueryExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($QueryExp*)>(&Query::not$))},
	{"or", "(Ljavax/management/QueryExp;Ljavax/management/QueryExp;)Ljavax/management/QueryExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$QueryExp*(*)($QueryExp*,$QueryExp*)>(&Query::or$))},
	{"plus", "(Ljavax/management/ValueExp;Ljavax/management/ValueExp;)Ljavax/management/ValueExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ValueExp*(*)($ValueExp*,$ValueExp*)>(&Query::plus))},
	{"times", "(Ljavax/management/ValueExp;Ljavax/management/ValueExp;)Ljavax/management/ValueExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ValueExp*(*)($ValueExp*,$ValueExp*)>(&Query::times))},
	{"value", "(Ljava/lang/String;)Ljavax/management/StringValueExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringValueExp*(*)($String*)>(&Query::value))},
	{"value", "(Ljava/lang/Number;)Ljavax/management/ValueExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ValueExp*(*)($Number*)>(&Query::value))},
	{"value", "(I)Ljavax/management/ValueExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ValueExp*(*)(int32_t)>(&Query::value))},
	{"value", "(J)Ljavax/management/ValueExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ValueExp*(*)(int64_t)>(&Query::value))},
	{"value", "(F)Ljavax/management/ValueExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ValueExp*(*)(float)>(&Query::value))},
	{"value", "(D)Ljavax/management/ValueExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ValueExp*(*)(double)>(&Query::value))},
	{"value", "(Z)Ljavax/management/ValueExp;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ValueExp*(*)(bool)>(&Query::value))},
	{}
};

$ClassInfo _Query_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.Query",
	"java.lang.Object",
	nullptr,
	_Query_FieldInfo_,
	_Query_MethodInfo_
};

$Object* allocate$Query($Class* clazz) {
	return $of($alloc(Query));
}

void Query::init$() {
}

$QueryExp* Query::and$($QueryExp* q1, $QueryExp* q2) {
	return $new($AndQueryExp, q1, q2);
}

$QueryExp* Query::or$($QueryExp* q1, $QueryExp* q2) {
	return $new($OrQueryExp, q1, q2);
}

$QueryExp* Query::gt($ValueExp* v1, $ValueExp* v2) {
	return $new($BinaryRelQueryExp, Query::GT, v1, v2);
}

$QueryExp* Query::geq($ValueExp* v1, $ValueExp* v2) {
	return $new($BinaryRelQueryExp, Query::GE, v1, v2);
}

$QueryExp* Query::leq($ValueExp* v1, $ValueExp* v2) {
	return $new($BinaryRelQueryExp, Query::LE, v1, v2);
}

$QueryExp* Query::lt($ValueExp* v1, $ValueExp* v2) {
	return $new($BinaryRelQueryExp, Query::LT, v1, v2);
}

$QueryExp* Query::eq($ValueExp* v1, $ValueExp* v2) {
	return $new($BinaryRelQueryExp, Query::EQ, v1, v2);
}

$QueryExp* Query::between($ValueExp* v1, $ValueExp* v2, $ValueExp* v3) {
	return $new($BetweenQueryExp, v1, v2, v3);
}

$QueryExp* Query::match($AttributeValueExp* a, $StringValueExp* s) {
	return $new($MatchQueryExp, a, s);
}

$AttributeValueExp* Query::attr($String* name) {
	return $new($AttributeValueExp, name);
}

$AttributeValueExp* Query::attr($String* className, $String* name) {
	return $new($QualifiedAttributeValueExp, className, name);
}

$AttributeValueExp* Query::classattr() {
	return $new($ClassAttributeValueExp);
}

$QueryExp* Query::not$($QueryExp* queryExp) {
	return $new($NotQueryExp, queryExp);
}

$QueryExp* Query::in($ValueExp* val, $ValueExpArray* valueList) {
	return $new($InQueryExp, val, valueList);
}

$StringValueExp* Query::value($String* val) {
	return $new($StringValueExp, val);
}

$ValueExp* Query::value($Number* val) {
	return $new($NumericValueExp, val);
}

$ValueExp* Query::value(int32_t val) {
	return $new($NumericValueExp, $($Long::valueOf((int64_t)val)));
}

$ValueExp* Query::value(int64_t val) {
	return $new($NumericValueExp, $($Long::valueOf(val)));
}

$ValueExp* Query::value(float val) {
	return $new($NumericValueExp, $($Double::valueOf((double)val)));
}

$ValueExp* Query::value(double val) {
	return $new($NumericValueExp, $($Double::valueOf(val)));
}

$ValueExp* Query::value(bool val) {
	return $new($BooleanValueExp, val);
}

$ValueExp* Query::plus($ValueExp* value1, $ValueExp* value2) {
	return $new($BinaryOpValueExp, Query::PLUS, value1, value2);
}

$ValueExp* Query::times($ValueExp* value1, $ValueExp* value2) {
	return $new($BinaryOpValueExp, Query::TIMES, value1, value2);
}

$ValueExp* Query::minus($ValueExp* value1, $ValueExp* value2) {
	return $new($BinaryOpValueExp, Query::MINUS, value1, value2);
}

$ValueExp* Query::div($ValueExp* value1, $ValueExp* value2) {
	return $new($BinaryOpValueExp, Query::DIV, value1, value2);
}

$QueryExp* Query::initialSubString($AttributeValueExp* a, $StringValueExp* s) {
	$useLocalCurrentObjectStackCache();
	return $new($MatchQueryExp, a, $$new($StringValueExp, $$str({$(escapeString($($nc(s)->getValue()))), "*"_s})));
}

$QueryExp* Query::anySubString($AttributeValueExp* a, $StringValueExp* s) {
	$useLocalCurrentObjectStackCache();
	return $new($MatchQueryExp, a, $$new($StringValueExp, $$str({"*"_s, $(escapeString($($nc(s)->getValue()))), "*"_s})));
}

$QueryExp* Query::finalSubString($AttributeValueExp* a, $StringValueExp* s) {
	$useLocalCurrentObjectStackCache();
	return $new($MatchQueryExp, a, $$new($StringValueExp, $$str({"*"_s, $(escapeString($($nc(s)->getValue())))})));
}

$QueryExp* Query::isInstanceOf($StringValueExp* classNameValue) {
	return $new($InstanceOfQueryExp, classNameValue);
}

$String* Query::escapeString($String* s$renamed) {
	$var($String, s, s$renamed);
	if (s == nullptr) {
		return nullptr;
	}
	$assign(s, $nc(s)->replace(static_cast<$CharSequence*>("\\"_s), static_cast<$CharSequence*>("\\\\"_s)));
	$assign(s, s->replace(static_cast<$CharSequence*>("*"_s), static_cast<$CharSequence*>("\\*"_s)));
	$assign(s, s->replace(static_cast<$CharSequence*>("?"_s), static_cast<$CharSequence*>("\\?"_s)));
	$assign(s, s->replace(static_cast<$CharSequence*>("["_s), static_cast<$CharSequence*>("\\["_s)));
	return s;
}

Query::Query() {
}

$Class* Query::load$($String* name, bool initialize) {
	$loadClass(Query, name, initialize, &_Query_ClassInfo_, allocate$Query);
	return class$;
}

$Class* Query::class$ = nullptr;

	} // management
} // javax