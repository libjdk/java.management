#ifndef _javax_management_relation_InvalidRelationIdException_h_
#define _javax_management_relation_InvalidRelationIdException_h_
//$ class javax.management.relation.InvalidRelationIdException
//$ extends javax.management.relation.RelationException

#include <javax/management/relation/RelationException.h>

namespace javax {
	namespace management {
		namespace relation {

class $import InvalidRelationIdException : public ::javax::management::relation::RelationException {
	$class(InvalidRelationIdException, $NO_CLASS_INIT, ::javax::management::relation::RelationException)
public:
	InvalidRelationIdException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x9D424C866420ED85;
	InvalidRelationIdException(const InvalidRelationIdException& e);
	virtual void throw$() override;
	inline InvalidRelationIdException* operator ->() {
		return (InvalidRelationIdException*)throwing$;
	}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_InvalidRelationIdException_h_