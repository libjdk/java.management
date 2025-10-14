#ifndef _javax_management_NotCompliantMBeanException_h_
#define _javax_management_NotCompliantMBeanException_h_
//$ class javax.management.NotCompliantMBeanException
//$ extends javax.management.OperationsException

#include <javax/management/OperationsException.h>

namespace javax {
	namespace management {

class $import NotCompliantMBeanException : public ::javax::management::OperationsException {
	$class(NotCompliantMBeanException, $NO_CLASS_INIT, ::javax::management::OperationsException)
public:
	NotCompliantMBeanException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x47D35A35A3DFFBB9;
	NotCompliantMBeanException(const NotCompliantMBeanException& e);
	NotCompliantMBeanException wrapper$();
	virtual void throwWrapper$() override;
};

	} // management
} // javax

#endif // _javax_management_NotCompliantMBeanException_h_