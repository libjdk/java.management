#ifndef _javax_management_RuntimeErrorException_h_
#define _javax_management_RuntimeErrorException_h_
//$ class javax.management.RuntimeErrorException
//$ extends javax.management.JMRuntimeException

#include <javax/management/JMRuntimeException.h>

namespace java {
	namespace lang {
		class Error;
		class Throwable;
	}
}

namespace javax {
	namespace management {

class $import RuntimeErrorException : public ::javax::management::JMRuntimeException {
	$class(RuntimeErrorException, $NO_CLASS_INIT, ::javax::management::JMRuntimeException)
public:
	RuntimeErrorException();
	void init$(::java::lang::Error* e);
	void init$(::java::lang::Error* e, $String* message);
	virtual $Throwable* getCause() override;
	virtual ::java::lang::Error* getTargetError();
	static const int64_t serialVersionUID = (int64_t)0x09C650883A4CD664;
	::java::lang::Error* error = nullptr;
	RuntimeErrorException(const RuntimeErrorException& e);
	virtual void throw$() override;
	inline RuntimeErrorException* operator ->() {
		return (RuntimeErrorException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_RuntimeErrorException_h_