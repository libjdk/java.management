#ifndef _javax_management_NotQueryExp_h_
#define _javax_management_NotQueryExp_h_
//$ class javax.management.NotQueryExp
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

class NotQueryExp : public ::javax::management::QueryEval, public ::javax::management::QueryExp {
	$class(NotQueryExp, $NO_CLASS_INIT, ::javax::management::QueryEval, ::javax::management::QueryExp)
public:
	NotQueryExp();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::management::QueryExp* q);
	virtual bool apply(::javax::management::ObjectName* name) override;
	virtual ::javax::management::QueryExp* getNegatedExp();
	virtual void setMBeanServer(::javax::management::MBeanServer* s) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x492189182B2C1FC5;
	::javax::management::QueryExp* exp = nullptr;
};

	} // management
} // javax

#endif // _javax_management_NotQueryExp_h_