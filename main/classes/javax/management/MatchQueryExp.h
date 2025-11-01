#ifndef _javax_management_MatchQueryExp_h_
#define _javax_management_MatchQueryExp_h_
//$ class javax.management.MatchQueryExp
//$ extends javax.management.QueryEval
//$ implements javax.management.QueryExp

#include <javax/management/QueryEval.h>
#include <javax/management/QueryExp.h>

namespace javax {
	namespace management {
		class AttributeValueExp;
		class ObjectName;
		class StringValueExp;
	}
}

namespace javax {
	namespace management {

class MatchQueryExp : public ::javax::management::QueryEval, public ::javax::management::QueryExp {
	$class(MatchQueryExp, $NO_CLASS_INIT, ::javax::management::QueryEval, ::javax::management::QueryExp)
public:
	MatchQueryExp();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::management::AttributeValueExp* a, ::javax::management::StringValueExp* s);
	virtual bool apply(::javax::management::ObjectName* name) override;
	virtual ::javax::management::AttributeValueExp* getAttribute();
	virtual $String* getPattern();
	virtual void setMBeanServer(::javax::management::MBeanServer* s) override;
	virtual $String* toString() override;
	static bool wildmatch($String* s, $String* p);
	static const int64_t serialVersionUID = (int64_t)0x9CAEA2DADD27831A;
	::javax::management::AttributeValueExp* exp = nullptr;
	$String* pattern = nullptr;
};

	} // management
} // javax

#endif // _javax_management_MatchQueryExp_h_