#ifndef _javax_management_relation_RelationType_h_
#define _javax_management_relation_RelationType_h_
//$ interface javax.management.relation.RelationType
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace management {
		namespace relation {
			class RoleInfo;
		}
	}
}

namespace javax {
	namespace management {
		namespace relation {

class $export RelationType : public ::java::io::Serializable {
	$interface(RelationType, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	virtual $String* getRelationTypeName() {return nullptr;}
	virtual ::javax::management::relation::RoleInfo* getRoleInfo($String* roleInfoName) {return nullptr;}
	virtual ::java::util::List* getRoleInfos() {return nullptr;}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RelationType_h_