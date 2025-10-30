#ifndef _javax_management_MBeanRegistrationException_h_
#define _javax_management_MBeanRegistrationException_h_
//$ class javax.management.MBeanRegistrationException
//$ extends javax.management.MBeanException

#include <javax/management/MBeanException.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

namespace javax {
	namespace management {

class $export MBeanRegistrationException : public ::javax::management::MBeanException {
	$class(MBeanRegistrationException, $NO_CLASS_INIT, ::javax::management::MBeanException)
public:
	MBeanRegistrationException();
	void init$(::java::lang::Exception* e);
	void init$(::java::lang::Exception* e, $String* message);
	static const int64_t serialVersionUID = (int64_t)0x3E349F182A3B9E1D;
	MBeanRegistrationException(const MBeanRegistrationException& e);
	virtual void throw$() override;
	inline MBeanRegistrationException* operator ->() {
		return (MBeanRegistrationException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_MBeanRegistrationException_h_