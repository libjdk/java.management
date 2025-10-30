#ifndef _javax_management_relation_InvalidRoleInfoException_h_
#define _javax_management_relation_InvalidRoleInfoException_h_
//$ class javax.management.relation.InvalidRoleInfoException
//$ extends javax.management.relation.RelationException

#include <javax/management/relation/RelationException.h>

namespace javax {
	namespace management {
		namespace relation {

class $import InvalidRoleInfoException : public ::javax::management::relation::RelationException {
	$class(InvalidRoleInfoException, $NO_CLASS_INIT, ::javax::management::relation::RelationException)
public:
	InvalidRoleInfoException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x6854B6D5491A066A;
	InvalidRoleInfoException(const InvalidRoleInfoException& e);
	virtual void throw$() override;
	inline InvalidRoleInfoException* operator ->() {
		return (InvalidRoleInfoException*)throwing$;
	}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_InvalidRoleInfoException_h_