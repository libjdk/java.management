#ifndef _java_lang_management_MemoryType_h_
#define _java_lang_management_MemoryType_h_
//$ class java.lang.management.MemoryType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("HEAP")
#undef HEAP
#pragma push_macro("NON_HEAP")
#undef NON_HEAP

namespace java {
	namespace lang {
		namespace management {

class $export MemoryType : public ::java::lang::Enum {
	$class(MemoryType, 0, ::java::lang::Enum)
public:
	MemoryType();
	static $Array<::java::lang::management::MemoryType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* s);
	virtual $String* toString() override;
	static ::java::lang::management::MemoryType* valueOf($String* name);
	static $Array<::java::lang::management::MemoryType>* values();
	static ::java::lang::management::MemoryType* HEAP;
	static ::java::lang::management::MemoryType* NON_HEAP;
	static $Array<::java::lang::management::MemoryType>* $VALUES;
	$String* description = nullptr;
};

		} // management
	} // lang
} // java

#pragma pop_macro("HEAP")
#pragma pop_macro("NON_HEAP")

#endif // _java_lang_management_MemoryType_h_