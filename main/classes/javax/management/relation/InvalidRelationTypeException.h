#ifndef _javax_management_relation_InvalidRelationTypeException_h_
#define _javax_management_relation_InvalidRelationTypeException_h_
//$ class javax.management.relation.InvalidRelationTypeException
//$ extends javax.management.relation.RelationException

#include <javax/management/relation/RelationException.h>

namespace javax {
	namespace management {
		namespace relation {

class $export InvalidRelationTypeException : public ::javax::management::relation::RelationException {
	$class(InvalidRelationTypeException, $NO_CLASS_INIT, ::javax::management::relation::RelationException)
public:
	InvalidRelationTypeException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x29BC98C190A018A9;
	InvalidRelationTypeException(const InvalidRelationTypeException& e);
	virtual void throw$() override;
	inline InvalidRelationTypeException* operator ->() {
		return (InvalidRelationTypeException*)throwing$;
	}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_InvalidRelationTypeException_h_