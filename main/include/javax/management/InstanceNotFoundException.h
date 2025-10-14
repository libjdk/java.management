#ifndef _javax_management_InstanceNotFoundException_h_
#define _javax_management_InstanceNotFoundException_h_
//$ class javax.management.InstanceNotFoundException
//$ extends javax.management.OperationsException

#include <javax/management/OperationsException.h>

namespace javax {
	namespace management {

class $import InstanceNotFoundException : public ::javax::management::OperationsException {
	$class(InstanceNotFoundException, $NO_CLASS_INIT, ::javax::management::OperationsException)
public:
	InstanceNotFoundException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xF3C072AD486A71C7;
	InstanceNotFoundException(const InstanceNotFoundException& e);
	InstanceNotFoundException wrapper$();
	virtual void throwWrapper$() override;
};

	} // management
} // javax

#endif // _javax_management_InstanceNotFoundException_h_