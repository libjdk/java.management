#ifndef _javax_management_InvalidAttributeValueException_h_
#define _javax_management_InvalidAttributeValueException_h_
//$ class javax.management.InvalidAttributeValueException
//$ extends javax.management.OperationsException

#include <javax/management/OperationsException.h>

namespace javax {
	namespace management {

class $import InvalidAttributeValueException : public ::javax::management::OperationsException {
	$class(InvalidAttributeValueException, $NO_CLASS_INIT, ::javax::management::OperationsException)
public:
	InvalidAttributeValueException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x1E0A1AA7E57F7BB1;
	InvalidAttributeValueException(const InvalidAttributeValueException& e);
	virtual void throw$() override;
	inline InvalidAttributeValueException* operator ->() {
		return (InvalidAttributeValueException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_InvalidAttributeValueException_h_