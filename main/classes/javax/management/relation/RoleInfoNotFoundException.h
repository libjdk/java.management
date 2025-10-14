#ifndef _javax_management_relation_RoleInfoNotFoundException_h_
#define _javax_management_relation_RoleInfoNotFoundException_h_
//$ class javax.management.relation.RoleInfoNotFoundException
//$ extends javax.management.relation.RelationException

#include <javax/management/relation/RelationException.h>

namespace javax {
	namespace management {
		namespace relation {

class $export RoleInfoNotFoundException : public ::javax::management::relation::RelationException {
	$class(RoleInfoNotFoundException, $NO_CLASS_INIT, ::javax::management::relation::RelationException)
public:
	RoleInfoNotFoundException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x3CFAF39B59799183;
	RoleInfoNotFoundException(const RoleInfoNotFoundException& e);
	RoleInfoNotFoundException wrapper$();
	virtual void throwWrapper$() override;
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RoleInfoNotFoundException_h_