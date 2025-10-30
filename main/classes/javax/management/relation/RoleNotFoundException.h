#ifndef _javax_management_relation_RoleNotFoundException_h_
#define _javax_management_relation_RoleNotFoundException_h_
//$ class javax.management.relation.RoleNotFoundException
//$ extends javax.management.relation.RelationException

#include <javax/management/relation/RelationException.h>

namespace javax {
	namespace management {
		namespace relation {

class $export RoleNotFoundException : public ::javax::management::relation::RelationException {
	$class(RoleNotFoundException, $NO_CLASS_INIT, ::javax::management::relation::RelationException)
public:
	RoleNotFoundException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xD68E277935234007;
	RoleNotFoundException(const RoleNotFoundException& e);
	virtual void throw$() override;
	inline RoleNotFoundException* operator ->() {
		return (RoleNotFoundException*)throwing$;
	}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RoleNotFoundException_h_