#ifndef _javax_management_relation_RelationTypeSupport_h_
#define _javax_management_relation_RelationTypeSupport_h_
//$ class javax.management.relation.RelationTypeSupport
//$ extends javax.management.relation.RelationType

#include <java/lang/Array.h>
#include <javax/management/relation/RelationType.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
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

class $export RelationTypeSupport : public ::javax::management::relation::RelationType {
	$class(RelationTypeSupport, 0, ::javax::management::relation::RelationType)
public:
	RelationTypeSupport();
	void init$($String* relationTypeName, $Array<::javax::management::relation::RoleInfo>* roleInfoArray);
	void init$($String* relationTypeName);
	virtual void addRoleInfo(::javax::management::relation::RoleInfo* roleInfo);
	static void checkRoleInfos($Array<::javax::management::relation::RoleInfo>* roleInfoArray);
	virtual $String* getRelationTypeName() override;
	virtual ::javax::management::relation::RoleInfo* getRoleInfo($String* roleInfoName) override;
	virtual ::java::util::List* getRoleInfos() override;
	void initMembers($String* relationTypeName, $Array<::javax::management::relation::RoleInfo>* roleInfoArray);
	void readObject(::java::io::ObjectInputStream* in);
	virtual void setRelationServiceFlag(bool flag);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0x8E7E491FC7F2FF3A;
	static const int64_t newSerialVersionUID = (int64_t)0x3FFDD26C37591FDF;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	$String* typeName = nullptr;
	::java::util::Map* roleName2InfoMap = nullptr;
	bool isInRelationService = false;
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RelationTypeSupport_h_