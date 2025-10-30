#ifndef _javax_management_RuntimeOperationsException_h_
#define _javax_management_RuntimeOperationsException_h_
//$ class javax.management.RuntimeOperationsException
//$ extends javax.management.JMRuntimeException

#include <javax/management/JMRuntimeException.h>

namespace java {
	namespace lang {
		class RuntimeException;
		class Throwable;
	}
}

namespace javax {
	namespace management {

class $export RuntimeOperationsException : public ::javax::management::JMRuntimeException {
	$class(RuntimeOperationsException, $NO_CLASS_INIT, ::javax::management::JMRuntimeException)
public:
	RuntimeOperationsException();
	void init$(::java::lang::RuntimeException* e);
	void init$(::java::lang::RuntimeException* e, $String* message);
	virtual $Throwable* getCause() override;
	virtual ::java::lang::RuntimeException* getTargetException();
	static const int64_t serialVersionUID = (int64_t)0x8B4D810A6AD0A3EC;
	::java::lang::RuntimeException* runtimeException = nullptr;
	RuntimeOperationsException(const RuntimeOperationsException& e);
	virtual void throw$() override;
	inline RuntimeOperationsException* operator ->() {
		return (RuntimeOperationsException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_RuntimeOperationsException_h_