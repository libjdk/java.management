#ifndef _javax_management_AttributeValueExp_h_
#define _javax_management_AttributeValueExp_h_
//$ class javax.management.AttributeValueExp
//$ extends javax.management.ValueExp

#include <javax/management/ValueExp.h>

namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName;
	}
}

namespace javax {
	namespace management {

class $import AttributeValueExp : public ::javax::management::ValueExp {
	$class(AttributeValueExp, $NO_CLASS_INIT, ::javax::management::ValueExp)
public:
	AttributeValueExp();
	void init$();
	void init$($String* attr);
	virtual ::javax::management::ValueExp* apply(::javax::management::ObjectName* name) override;
	virtual $Object* getAttribute(::javax::management::ObjectName* name);
	virtual $String* getAttributeName();
	virtual void setMBeanServer(::javax::management::MBeanServer* s) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x94326E607EB22907;
	$String* attr = nullptr;
};

	} // management
} // javax

#endif // _javax_management_AttributeValueExp_h_