#ifndef _javax_management_relation_RelationServiceNotRegisteredException_h_
#define _javax_management_relation_RelationServiceNotRegisteredException_h_
//$ class javax.management.relation.RelationServiceNotRegisteredException
//$ extends javax.management.relation.RelationException

#include <javax/management/relation/RelationException.h>

namespace javax {
	namespace management {
		namespace relation {

class $export RelationServiceNotRegisteredException : public ::javax::management::relation::RelationException {
	$class(RelationServiceNotRegisteredException, $NO_CLASS_INIT, ::javax::management::relation::RelationException)
public:
	RelationServiceNotRegisteredException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x755549AE018CE75E;
	RelationServiceNotRegisteredException(const RelationServiceNotRegisteredException& e);
	virtual void throw$() override;
	inline RelationServiceNotRegisteredException* operator ->() {
		return (RelationServiceNotRegisteredException*)throwing$;
	}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RelationServiceNotRegisteredException_h_