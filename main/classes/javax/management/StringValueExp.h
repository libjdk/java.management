#ifndef _javax_management_StringValueExp_h_
#define _javax_management_StringValueExp_h_
//$ class javax.management.StringValueExp
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

class $export StringValueExp : public ::javax::management::ValueExp {
	$class(StringValueExp, $NO_CLASS_INIT, ::javax::management::ValueExp)
public:
	StringValueExp();
	void init$();
	void init$($String* val);
	virtual ::javax::management::ValueExp* apply(::javax::management::ObjectName* name) override;
	virtual $String* getValue();
	virtual void setMBeanServer(::javax::management::MBeanServer* s) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD2CEFA159D0B12F4;
	$String* val = nullptr;
};

	} // management
} // javax

#endif // _javax_management_StringValueExp_h_