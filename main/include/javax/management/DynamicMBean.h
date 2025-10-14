#ifndef _javax_management_DynamicMBean_h_
#define _javax_management_DynamicMBean_h_
//$ interface javax.management.DynamicMBean
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace management {
		class Attribute;
		class AttributeList;
		class MBeanInfo;
	}
}

namespace javax {
	namespace management {

class $import DynamicMBean : public ::java::lang::Object {
	$interface(DynamicMBean, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getAttribute($String* attribute) {return nullptr;}
	virtual ::javax::management::AttributeList* getAttributes($StringArray* attributes) {return nullptr;}
	virtual ::javax::management::MBeanInfo* getMBeanInfo() {return nullptr;}
	virtual $Object* invoke($String* actionName, $ObjectArray* params, $StringArray* signature) {return nullptr;}
	virtual void setAttribute(::javax::management::Attribute* attribute) {}
	virtual ::javax::management::AttributeList* setAttributes(::javax::management::AttributeList* attributes) {return nullptr;}
};

	} // management
} // javax

#endif // _javax_management_DynamicMBean_h_