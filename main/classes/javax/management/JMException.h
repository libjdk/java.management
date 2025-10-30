#ifndef _javax_management_JMException_h_
#define _javax_management_JMException_h_
//$ class javax.management.JMException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace management {

class $export JMException : public ::java::lang::Exception {
	$class(JMException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	JMException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x04DD4CEC939D7E71;
	JMException(const JMException& e);
	virtual void throw$() override;
	inline JMException* operator ->() {
		return (JMException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_JMException_h_