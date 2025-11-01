#ifndef _javax_management_BetweenQueryExp_h_
#define _javax_management_BetweenQueryExp_h_
//$ class javax.management.BetweenQueryExp
//$ extends javax.management.QueryEval
//$ implements javax.management.QueryExp

#include <javax/management/QueryEval.h>
#include <javax/management/QueryExp.h>

namespace javax {
	namespace management {
		class ObjectName;
		class ValueExp;
	}
}

namespace javax {
	namespace management {

class BetweenQueryExp : public ::javax::management::QueryEval, public ::javax::management::QueryExp {
	$class(BetweenQueryExp, $NO_CLASS_INIT, ::javax::management::QueryEval, ::javax::management::QueryExp)
public:
	BetweenQueryExp();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::management::ValueExp* v1, ::javax::management::ValueExp* v2, ::javax::management::ValueExp* v3);
	virtual bool apply(::javax::management::ObjectName* name) override;
	virtual ::javax::management::ValueExp* getCheckedValue();
	virtual ::javax::management::ValueExp* getLowerBound();
	virtual ::javax::management::ValueExp* getUpperBound();
	virtual void setMBeanServer(::javax::management::MBeanServer* s) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD749C496338A9A8C;
	::javax::management::ValueExp* exp1 = nullptr;
	::javax::management::ValueExp* exp2 = nullptr;
	::javax::management::ValueExp* exp3 = nullptr;
};

	} // management
} // javax

#endif // _javax_management_BetweenQueryExp_h_