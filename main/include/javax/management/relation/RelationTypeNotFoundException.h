#ifndef _javax_management_relation_RelationTypeNotFoundException_h_
#define _javax_management_relation_RelationTypeNotFoundException_h_
//$ class javax.management.relation.RelationTypeNotFoundException
//$ extends javax.management.relation.RelationException

#include <javax/management/relation/RelationException.h>

namespace javax {
	namespace management {
		namespace relation {

class $import RelationTypeNotFoundException : public ::javax::management::relation::RelationException {
	$class(RelationTypeNotFoundException, $NO_CLASS_INIT, ::javax::management::relation::RelationException)
public:
	RelationTypeNotFoundException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x11AEB58267CD1DD0;
	RelationTypeNotFoundException(const RelationTypeNotFoundException& e);
	virtual void throw$() override;
	inline RelationTypeNotFoundException* operator ->() {
		return (RelationTypeNotFoundException*)throwing$;
	}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RelationTypeNotFoundException_h_