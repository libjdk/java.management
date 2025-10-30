#ifndef _javax_management_ReflectionException_h_
#define _javax_management_ReflectionException_h_
//$ class javax.management.ReflectionException
//$ extends javax.management.JMException

#include <javax/management/JMException.h>

namespace java {
	namespace lang {
		class Exception;
		class Throwable;
	}
}

namespace javax {
	namespace management {

class $export ReflectionException : public ::javax::management::JMException {
	$class(ReflectionException, $NO_CLASS_INIT, ::javax::management::JMException)
public:
	ReflectionException();
	void init$(::java::lang::Exception* e);
	void init$(::java::lang::Exception* e, $String* message);
	virtual $Throwable* getCause() override;
	virtual ::java::lang::Exception* getTargetException();
	static const int64_t serialVersionUID = (int64_t)0x7F45427E1D6D9161;
	::java::lang::Exception* exception = nullptr;
	ReflectionException(const ReflectionException& e);
	virtual void throw$() override;
	inline ReflectionException* operator ->() {
		return (ReflectionException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_ReflectionException_h_