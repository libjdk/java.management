#ifndef _javax_management_BinaryOpValueExp_h_
#define _javax_management_BinaryOpValueExp_h_
//$ class javax.management.BinaryOpValueExp
//$ extends javax.management.QueryEval
//$ implements javax.management.ValueExp

#include <javax/management/QueryEval.h>
#include <javax/management/ValueExp.h>

namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName;
	}
}

namespace javax {
	namespace management {

class BinaryOpValueExp : public ::javax::management::QueryEval, public ::javax::management::ValueExp {
	$class(BinaryOpValueExp, $NO_CLASS_INIT, ::javax::management::QueryEval, ::javax::management::ValueExp)
public:
	BinaryOpValueExp();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t o, ::javax::management::ValueExp* v1, ::javax::management::ValueExp* v2);
	virtual ::javax::management::ValueExp* apply(::javax::management::ObjectName* name) override;
	virtual ::javax::management::ValueExp* getLeftValue();
	virtual int32_t getOperator();
	virtual ::javax::management::ValueExp* getRightValue();
	$String* opString();
	$String* parens(::javax::management::ValueExp* subexp, bool left);
	int32_t precedence(int32_t xop);
	virtual void setMBeanServer(::javax::management::MBeanServer* s) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x10E11E71A8F42C92;
	int32_t op = 0;
	::javax::management::ValueExp* exp1 = nullptr;
	::javax::management::ValueExp* exp2 = nullptr;
};

	} // management
} // javax

#endif // _javax_management_BinaryOpValueExp_h_