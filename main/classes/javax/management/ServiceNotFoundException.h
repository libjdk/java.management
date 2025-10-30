#ifndef _javax_management_ServiceNotFoundException_h_
#define _javax_management_ServiceNotFoundException_h_
//$ class javax.management.ServiceNotFoundException
//$ extends javax.management.OperationsException

#include <javax/management/OperationsException.h>

namespace javax {
	namespace management {

class $export ServiceNotFoundException : public ::javax::management::OperationsException {
	$class(ServiceNotFoundException, $NO_CLASS_INIT, ::javax::management::OperationsException)
public:
	ServiceNotFoundException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xC89E45A10346F855;
	ServiceNotFoundException(const ServiceNotFoundException& e);
	virtual void throw$() override;
	inline ServiceNotFoundException* operator ->() {
		return (ServiceNotFoundException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_ServiceNotFoundException_h_