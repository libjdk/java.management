#ifndef _javax_management_ObjectName$Property_h_
#define _javax_management_ObjectName$Property_h_
//$ class javax.management.ObjectName$Property
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {

class ObjectName$Property : public ::java::lang::Object {
	$class(ObjectName$Property, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ObjectName$Property();
	void init$(int32_t key_index, int32_t key_length, int32_t value_length);
	virtual $String* getKeyString($String* name);
	virtual $String* getValueString($String* name);
	virtual void setKeyIndex(int32_t key_index);
	int32_t _key_index = 0;
	int32_t _key_length = 0;
	int32_t _value_length = 0;
};

	} // management
} // javax

#endif // _javax_management_ObjectName$Property_h_