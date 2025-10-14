#ifndef _javax_management_QualifiedAttributeValueExp_h_
#define _javax_management_QualifiedAttributeValueExp_h_
//$ class javax.management.QualifiedAttributeValueExp
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

class QualifiedAttributeValueExp : public ::javax::management::AttributeValueExp {
	$class(QualifiedAttributeValueExp, $NO_CLASS_INIT, ::javax::management::AttributeValueExp)
public:
	QualifiedAttributeValueExp();
	void init$();
	void init$($String* className, $String* attr);
	virtual ::javax::management::ValueExp* apply(::javax::management::ObjectName* name) override;
	virtual $String* getAttrClassName();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x7A9367AAC8943A06;
	$String* className = nullptr;
};

	} // management
} // javax

#endif // _javax_management_QualifiedAttributeValueExp_h_