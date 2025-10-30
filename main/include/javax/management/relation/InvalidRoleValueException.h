#ifndef _javax_management_relation_InvalidRoleValueException_h_
#define _javax_management_relation_InvalidRoleValueException_h_
//$ class javax.management.relation.InvalidRoleValueException
//$ extends javax.management.relation.RelationException

#include <javax/management/relation/RelationException.h>

namespace javax {
	namespace management {
		namespace relation {

class $import InvalidRoleValueException : public ::javax::management::relation::RelationException {
	$class(InvalidRoleValueException, $NO_CLASS_INIT, ::javax::management::relation::RelationException)
public:
	InvalidRoleValueException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xE353C480A0B2FA17;
	InvalidRoleValueException(const InvalidRoleValueException& e);
	virtual void throw$() override;
	inline InvalidRoleValueException* operator ->() {
		return (InvalidRoleValueException*)throwing$;
	}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_InvalidRoleValueException_h_