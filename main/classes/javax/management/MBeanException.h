#ifndef _javax_management_MBeanException_h_
#define _javax_management_MBeanException_h_
//$ class javax.management.MBeanException
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

class $export MBeanException : public ::javax::management::JMException {
	$class(MBeanException, $NO_CLASS_INIT, ::javax::management::JMException)
public:
	MBeanException();
	void init$(::java::lang::Exception* e);
	void init$(::java::lang::Exception* e, $String* message);
	virtual $Throwable* getCause() override;
	virtual ::java::lang::Exception* getTargetException();
	static const int64_t serialVersionUID = (int64_t)0x386E8CE56E5731CE;
	::java::lang::Exception* exception = nullptr;
	MBeanException(const MBeanException& e);
	virtual void throw$() override;
	inline MBeanException* operator ->() {
		return (MBeanException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_MBeanException_h_