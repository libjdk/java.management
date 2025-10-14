#ifndef _sun_management_StackTraceElementCompositeData_h_
#define _sun_management_StackTraceElementCompositeData_h_
//$ class sun.management.StackTraceElementCompositeData
//$ extends sun.management.LazyCompositeData

#include <java/lang/Array.h>
#include <sun/management/LazyCompositeData.h>

#pragma push_macro("CLASS_LOADER_NAME")
#undef CLASS_LOADER_NAME
#pragma push_macro("CLASS_NAME")
#undef CLASS_NAME
#pragma push_macro("FILE_NAME")
#undef FILE_NAME
#pragma push_macro("LINE_NUMBER")
#undef LINE_NUMBER
#pragma push_macro("METHOD_NAME")
#undef METHOD_NAME
#pragma push_macro("MODULE_NAME")
#undef MODULE_NAME
#pragma push_macro("MODULE_VERSION")
#undef MODULE_VERSION
#pragma push_macro("NATIVE_METHOD")
#undef NATIVE_METHOD
#pragma push_macro("STACK_TRACE_ELEMENT_COMPOSITE_TYPE")
#undef STACK_TRACE_ELEMENT_COMPOSITE_TYPE
#pragma push_macro("V5_ATTRIBUTES")
#undef V5_ATTRIBUTES
#pragma push_macro("V5_COMPOSITE_TYPE")
#undef V5_COMPOSITE_TYPE
#pragma push_macro("V9_ATTRIBUTES")
#undef V9_ATTRIBUTES

namespace java {
	namespace lang {
		class StackTraceElement;
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class CompositeData;
			class CompositeType;
		}
	}
}

namespace sun {
	namespace management {

class $export StackTraceElementCompositeData : public ::sun::management::LazyCompositeData {
	$class(StackTraceElementCompositeData, 0, ::sun::management::LazyCompositeData)
public:
	StackTraceElementCompositeData();
	void init$(::java::lang::StackTraceElement* ste);
	static ::java::lang::StackTraceElement* from(::javax::management::openmbean::CompositeData* cd);
	virtual ::javax::management::openmbean::CompositeData* getCompositeData() override;
	virtual ::java::lang::StackTraceElement* getStackTraceElement();
	static ::javax::management::openmbean::CompositeData* toCompositeData(::java::lang::StackTraceElement* ste);
	static ::javax::management::openmbean::CompositeType* v5CompositeType();
	static void validateCompositeData(::javax::management::openmbean::CompositeData* cd);
	::java::lang::StackTraceElement* ste = nullptr;
	static $String* CLASS_LOADER_NAME;
	static $String* MODULE_NAME;
	static $String* MODULE_VERSION;
	static $String* CLASS_NAME;
	static $String* METHOD_NAME;
	static $String* FILE_NAME;
	static $String* LINE_NUMBER;
	static $String* NATIVE_METHOD;
	static $StringArray* V5_ATTRIBUTES;
	static $StringArray* V9_ATTRIBUTES;
	static ::javax::management::openmbean::CompositeType* STACK_TRACE_ELEMENT_COMPOSITE_TYPE;
	static ::javax::management::openmbean::CompositeType* V5_COMPOSITE_TYPE;
	static const int64_t serialVersionUID = (int64_t)0xDA774D9ED76B2C65;
};

	} // management
} // sun

#pragma pop_macro("CLASS_LOADER_NAME")
#pragma pop_macro("CLASS_NAME")
#pragma pop_macro("FILE_NAME")
#pragma pop_macro("LINE_NUMBER")
#pragma pop_macro("METHOD_NAME")
#pragma pop_macro("MODULE_NAME")
#pragma pop_macro("MODULE_VERSION")
#pragma pop_macro("NATIVE_METHOD")
#pragma pop_macro("STACK_TRACE_ELEMENT_COMPOSITE_TYPE")
#pragma pop_macro("V5_ATTRIBUTES")
#pragma pop_macro("V5_COMPOSITE_TYPE")
#pragma pop_macro("V9_ATTRIBUTES")

#endif // _sun_management_StackTraceElementCompositeData_h_