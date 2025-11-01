#ifndef _javax_management_AndQueryExp_h_
#define _javax_management_AndQueryExp_h_
//$ class javax.management.AndQueryExp
//$ extends javax.management.QueryEval
//$ implements javax.management.QueryExp

#include <javax/management/QueryEval.h>
#include <javax/management/QueryExp.h>

namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace javax {
	namespace management {

class AndQueryExp : public ::javax::management::QueryEval, public ::javax::management::QueryExp {
	$class(AndQueryExp, $NO_CLASS_INIT, ::javax::management::QueryEval, ::javax::management::QueryExp)
public:
	AndQueryExp();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::management::QueryExp* q1, ::javax::management::QueryExp* q2);
	virtual bool apply(::javax::management::ObjectName* name) override;
	virtual ::javax::management::QueryExp* getLeftExp();
	virtual ::javax::management::QueryExp* getRightExp();
	virtual void setMBeanServer(::javax::management::MBeanServer* s) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xF0FC58E41492EA31;
	::javax::management::QueryExp* exp1 = nullptr;
	::javax::management::QueryExp* exp2 = nullptr;
};

	} // management
} // javax

#endif // _javax_management_AndQueryExp_h_