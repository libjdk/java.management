#ifndef _javax_management_BinaryRelQueryExp_h_
#define _javax_management_BinaryRelQueryExp_h_
//$ class javax.management.BinaryRelQueryExp
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

class BinaryRelQueryExp : public ::javax::management::QueryEval, public ::javax::management::QueryExp {
	$class(BinaryRelQueryExp, $NO_CLASS_INIT, ::javax::management::QueryEval, ::javax::management::QueryExp)
public:
	BinaryRelQueryExp();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t op, ::javax::management::ValueExp* v1, ::javax::management::ValueExp* v2);
	virtual bool apply(::javax::management::ObjectName* name) override;
	virtual ::javax::management::ValueExp* getLeftValue();
	virtual int32_t getOperator();
	virtual ::javax::management::ValueExp* getRightValue();
	$String* relOpString();
	virtual void setMBeanServer(::javax::management::MBeanServer* s) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xB106BA45756C7588;
	int32_t relOp = 0;
	::javax::management::ValueExp* exp1 = nullptr;
	::javax::management::ValueExp* exp2 = nullptr;
};

	} // management
} // javax

#endif // _javax_management_BinaryRelQueryExp_h_