#ifndef _javax_management_JMRuntimeException_h_
#define _javax_management_JMRuntimeException_h_
//$ class javax.management.JMRuntimeException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace javax {
	namespace management {

class $import JMRuntimeException : public ::java::lang::RuntimeException {
	$class(JMRuntimeException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	JMRuntimeException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x5B39361CCA78B445;
	JMRuntimeException(const JMRuntimeException& e);
	virtual void throw$() override;
	inline JMRuntimeException* operator ->() {
		return (JMRuntimeException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_JMRuntimeException_h_