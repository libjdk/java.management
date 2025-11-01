#ifndef _javax_management_InQueryExp_h_
#define _javax_management_InQueryExp_h_
//$ class javax.management.InQueryExp
//$ extends javax.management.QueryEval
//$ implements javax.management.QueryExp

#include <java/lang/Array.h>
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

class InQueryExp : public ::javax::management::QueryEval, public ::javax::management::QueryExp {
	$class(InQueryExp, $NO_CLASS_INIT, ::javax::management::QueryEval, ::javax::management::QueryExp)
public:
	InQueryExp();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::management::ValueExp* v1, $Array<::javax::management::ValueExp>* items);
	virtual bool apply(::javax::management::ObjectName* name) override;
	$String* generateValueList();
	virtual ::javax::management::ValueExp* getCheckedValue();
	virtual $Array<::javax::management::ValueExp>* getExplicitValues();
	virtual void setMBeanServer(::javax::management::MBeanServer* s) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xAF7D899A0657AE0E;
	::javax::management::ValueExp* val = nullptr;
	$Array<::javax::management::ValueExp>* valueList = nullptr;
};

	} // management
} // javax

#endif // _javax_management_InQueryExp_h_