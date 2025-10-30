#ifndef _javax_management_relation_RelationNotFoundException_h_
#define _javax_management_relation_RelationNotFoundException_h_
//$ class javax.management.relation.RelationNotFoundException
//$ extends javax.management.relation.RelationException

#include <javax/management/relation/RelationException.h>

namespace javax {
	namespace management {
		namespace relation {

class $export RelationNotFoundException : public ::javax::management::relation::RelationException {
	$class(RelationNotFoundException, $NO_CLASS_INIT, ::javax::management::relation::RelationException)
public:
	RelationNotFoundException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xCB592D4AF2CD5674;
	RelationNotFoundException(const RelationNotFoundException& e);
	virtual void throw$() override;
	inline RelationNotFoundException* operator ->() {
		return (RelationNotFoundException*)throwing$;
	}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RelationNotFoundException_h_