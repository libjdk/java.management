#ifndef _javax_management_AttributeNotFoundException_h_
#define _javax_management_AttributeNotFoundException_h_
//$ class javax.management.AttributeNotFoundException
//$ extends javax.management.OperationsException

#include <javax/management/OperationsException.h>

namespace javax {
	namespace management {

class $import AttributeNotFoundException : public ::javax::management::OperationsException {
	$class(AttributeNotFoundException, $NO_CLASS_INIT, ::javax::management::OperationsException)
public:
	AttributeNotFoundException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x5A5DCB5E38FD7F6E;
	AttributeNotFoundException(const AttributeNotFoundException& e);
	virtual void throw$() override;
	inline AttributeNotFoundException* operator ->() {
		return (AttributeNotFoundException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_AttributeNotFoundException_h_