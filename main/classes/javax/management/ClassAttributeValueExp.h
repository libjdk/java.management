#ifndef _javax_management_ClassAttributeValueExp_h_
#define _javax_management_ClassAttributeValueExp_h_
//$ class javax.management.ClassAttributeValueExp
//$ extends javax.management.AttributeValueExp

#include <javax/management/AttributeValueExp.h>

namespace javax {
	namespace management {
		class ObjectName;
		class ValueExp;
	}
}

namespace javax {
	namespace management {

class ClassAttributeValueExp : public ::javax::management::AttributeValueExp {
	$class(ClassAttributeValueExp, 0, ::javax::management::AttributeValueExp)
public:
	ClassAttributeValueExp();
	void init$();
	virtual ::javax::management::ValueExp* apply(::javax::management::ObjectName* name) override;
	virtual $Object* getValue(::javax::management::ObjectName* name);
	virtual $String* toString() override;
	static const int64_t oldSerialVersionUID = (int64_t)0xE14ACC0398CEB0DF;
	static const int64_t newSerialVersionUID = (int64_t)0xF0FC58E41492EA31;
	static int64_t serialVersionUID;
	$String* attr = nullptr;
};

	} // management
} // javax

#endif // _javax_management_ClassAttributeValueExp_h_