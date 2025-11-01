#ifndef _javax_management_InstanceOfQueryExp_h_
#define _javax_management_InstanceOfQueryExp_h_
//$ class javax.management.InstanceOfQueryExp
//$ extends javax.management.QueryEval
//$ implements javax.management.QueryExp

#include <javax/management/QueryEval.h>
#include <javax/management/QueryExp.h>

namespace javax {
	namespace management {
		class ObjectName;
		class StringValueExp;
	}
}

namespace javax {
	namespace management {

class InstanceOfQueryExp : public ::javax::management::QueryEval, public ::javax::management::QueryExp {
	$class(InstanceOfQueryExp, $NO_CLASS_INIT, ::javax::management::QueryEval, ::javax::management::QueryExp)
public:
	InstanceOfQueryExp();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::management::StringValueExp* classNameValue);
	virtual bool apply(::javax::management::ObjectName* name) override;
	virtual ::javax::management::StringValueExp* getClassNameValue();
	virtual void setMBeanServer(::javax::management::MBeanServer* s) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xF0FC58E41492EA31;
	::javax::management::StringValueExp* classNameValue = nullptr;
};

	} // management
} // javax

#endif // _javax_management_InstanceOfQueryExp_h_