#ifndef _javax_management_relation_RelationSupportMBean_h_
#define _javax_management_relation_RelationSupportMBean_h_
//$ interface javax.management.relation.RelationSupportMBean
//$ extends javax.management.relation.Relation

#include <javax/management/relation/Relation.h>

namespace java {
	namespace lang {
		class Boolean;
	}
}

namespace javax {
	namespace management {
		namespace relation {

class $import RelationSupportMBean : public ::javax::management::relation::Relation {
	$interface(RelationSupportMBean, $NO_CLASS_INIT, ::javax::management::relation::Relation)
public:
	virtual ::java::lang::Boolean* isInRelationService() {return nullptr;}
	virtual void setRelationServiceManagementFlag(::java::lang::Boolean* flag) {}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RelationSupportMBean_h_