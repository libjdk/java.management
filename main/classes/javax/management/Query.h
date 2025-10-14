#ifndef _javax_management_Query_h_
#define _javax_management_Query_h_
//$ class javax.management.Query
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DIV")
#undef DIV
#pragma push_macro("EQ")
#undef EQ
#pragma push_macro("GE")
#undef GE
#pragma push_macro("GT")
#undef GT
#pragma push_macro("LE")
#undef LE
#pragma push_macro("LT")
#undef LT
#pragma push_macro("MINUS")
#undef MINUS
#pragma push_macro("PLUS")
#undef PLUS
#pragma push_macro("TIMES")
#undef TIMES

namespace java {
	namespace lang {
		class Number;
	}
}
namespace javax {
	namespace management {
		class AttributeValueExp;
		class QueryExp;
		class StringValueExp;
		class ValueExp;
	}
}

namespace javax {
	namespace management {

class $export Query : public ::java::lang::Object {
	$class(Query, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Query();
	void init$();
	static ::javax::management::QueryExp* and$(::javax::management::QueryExp* q1, ::javax::management::QueryExp* q2);
	static ::javax::management::QueryExp* anySubString(::javax::management::AttributeValueExp* a, ::javax::management::StringValueExp* s);
	static ::javax::management::AttributeValueExp* attr($String* name);
	static ::javax::management::AttributeValueExp* attr($String* className, $String* name);
	static ::javax::management::QueryExp* between(::javax::management::ValueExp* v1, ::javax::management::ValueExp* v2, ::javax::management::ValueExp* v3);
	static ::javax::management::AttributeValueExp* classattr();
	static ::javax::management::ValueExp* div(::javax::management::ValueExp* value1, ::javax::management::ValueExp* value2);
	static ::javax::management::QueryExp* eq(::javax::management::ValueExp* v1, ::javax::management::ValueExp* v2);
	static $String* escapeString($String* s);
	static ::javax::management::QueryExp* finalSubString(::javax::management::AttributeValueExp* a, ::javax::management::StringValueExp* s);
	static ::javax::management::QueryExp* geq(::javax::management::ValueExp* v1, ::javax::management::ValueExp* v2);
	static ::javax::management::QueryExp* gt(::javax::management::ValueExp* v1, ::javax::management::ValueExp* v2);
	static ::javax::management::QueryExp* in(::javax::management::ValueExp* val, $Array<::javax::management::ValueExp>* valueList);
	static ::javax::management::QueryExp* initialSubString(::javax::management::AttributeValueExp* a, ::javax::management::StringValueExp* s);
	static ::javax::management::QueryExp* isInstanceOf(::javax::management::StringValueExp* classNameValue);
	static ::javax::management::QueryExp* leq(::javax::management::ValueExp* v1, ::javax::management::ValueExp* v2);
	static ::javax::management::QueryExp* lt(::javax::management::ValueExp* v1, ::javax::management::ValueExp* v2);
	static ::javax::management::QueryExp* match(::javax::management::AttributeValueExp* a, ::javax::management::StringValueExp* s);
	static ::javax::management::ValueExp* minus(::javax::management::ValueExp* value1, ::javax::management::ValueExp* value2);
	static ::javax::management::QueryExp* not$(::javax::management::QueryExp* queryExp);
	static ::javax::management::QueryExp* or$(::javax::management::QueryExp* q1, ::javax::management::QueryExp* q2);
	static ::javax::management::ValueExp* plus(::javax::management::ValueExp* value1, ::javax::management::ValueExp* value2);
	static ::javax::management::ValueExp* times(::javax::management::ValueExp* value1, ::javax::management::ValueExp* value2);
	static ::javax::management::StringValueExp* value($String* val);
	static ::javax::management::ValueExp* value(::java::lang::Number* val);
	static ::javax::management::ValueExp* value(int32_t val);
	static ::javax::management::ValueExp* value(int64_t val);
	static ::javax::management::ValueExp* value(float val);
	static ::javax::management::ValueExp* value(double val);
	static ::javax::management::ValueExp* value(bool val);
	static const int32_t GT = 0;
	static const int32_t LT = 1;
	static const int32_t GE = 2;
	static const int32_t LE = 3;
	static const int32_t EQ = 4;
	static const int32_t PLUS = 0;
	static const int32_t MINUS = 1;
	static const int32_t TIMES = 2;
	static const int32_t DIV = 3;
};

	} // management
} // javax

#pragma pop_macro("DIV")
#pragma pop_macro("EQ")
#pragma pop_macro("GE")
#pragma pop_macro("GT")
#pragma pop_macro("LE")
#pragma pop_macro("LT")
#pragma pop_macro("MINUS")
#pragma pop_macro("PLUS")
#pragma pop_macro("TIMES")

#endif // _javax_management_Query_h_