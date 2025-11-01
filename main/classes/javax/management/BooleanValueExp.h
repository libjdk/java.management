#ifndef _javax_management_BooleanValueExp_h_
#define _javax_management_BooleanValueExp_h_
//$ class javax.management.BooleanValueExp
//$ extends javax.management.QueryEval
//$ implements javax.management.ValueExp

#include <javax/management/QueryEval.h>
#include <javax/management/ValueExp.h>

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName;
	}
}

namespace javax {
	namespace management {

class BooleanValueExp : public ::javax::management::QueryEval, public ::javax::management::ValueExp {
	$class(BooleanValueExp, $NO_CLASS_INIT, ::javax::management::QueryEval, ::javax::management::ValueExp)
public:
	BooleanValueExp();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool val);
	void init$(::java::lang::Boolean* val);
	virtual ::javax::management::ValueExp* apply(::javax::management::ObjectName* name) override;
	virtual ::java::lang::Boolean* getValue();
	virtual void setMBeanServer(::javax::management::MBeanServer* s) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x6B9F048502091515;
	bool val = false;
};

	} // management
} // javax

#endif // _javax_management_BooleanValueExp_h_