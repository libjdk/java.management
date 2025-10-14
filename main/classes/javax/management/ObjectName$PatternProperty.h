#ifndef _javax_management_ObjectName$PatternProperty_h_
#define _javax_management_ObjectName$PatternProperty_h_
//$ class javax.management.ObjectName$PatternProperty
//$ extends javax.management.ObjectName$Property

#include <javax/management/ObjectName$Property.h>

namespace javax {
	namespace management {

class ObjectName$PatternProperty : public ::javax::management::ObjectName$Property {
	$class(ObjectName$PatternProperty, $NO_CLASS_INIT, ::javax::management::ObjectName$Property)
public:
	ObjectName$PatternProperty();
	void init$(int32_t key_index, int32_t key_length, int32_t value_length);
};

	} // management
} // javax

#endif // _javax_management_ObjectName$PatternProperty_h_