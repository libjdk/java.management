#ifndef _javax_management_relation_RelationNotification_h_
#define _javax_management_relation_RelationNotification_h_
//$ class javax.management.relation.RelationNotification
//$ extends javax.management.Notification

#include <java/lang/Array.h>
#include <javax/management/Notification.h>

#pragma push_macro("RELATION_BASIC_CREATION")
#undef RELATION_BASIC_CREATION
#pragma push_macro("RELATION_BASIC_REMOVAL")
#undef RELATION_BASIC_REMOVAL
#pragma push_macro("RELATION_BASIC_UPDATE")
#undef RELATION_BASIC_UPDATE
#pragma push_macro("RELATION_MBEAN_CREATION")
#undef RELATION_MBEAN_CREATION
#pragma push_macro("RELATION_MBEAN_REMOVAL")
#undef RELATION_MBEAN_REMOVAL
#pragma push_macro("RELATION_MBEAN_UPDATE")
#undef RELATION_MBEAN_UPDATE

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class List;
	}
}
namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace javax {
	namespace management {
		namespace relation {

class $import RelationNotification : public ::javax::management::Notification {
	$class(RelationNotification, 0, ::javax::management::Notification)
public:
	RelationNotification();
	void init$($String* notifType, Object$* sourceObj, int64_t sequence, int64_t timeStamp, $String* message, $String* id, $String* typeName, ::javax::management::ObjectName* objectName, ::java::util::List* unregMBeanList);
	void init$($String* notifType, Object$* sourceObj, int64_t sequence, int64_t timeStamp, $String* message, $String* id, $String* typeName, ::javax::management::ObjectName* objectName, $String* name, ::java::util::List* newValue, ::java::util::List* oldValue);
	virtual ::java::util::List* getMBeansToUnregister();
	virtual ::java::util::List* getNewRoleValue();
	virtual ::javax::management::ObjectName* getObjectName();
	virtual ::java::util::List* getOldRoleValue();
	virtual $String* getRelationId();
	virtual $String* getRelationTypeName();
	virtual $String* getRoleName();
	bool isValidBasic($String* notifType, Object$* sourceObj, $String* id, $String* typeName);
	bool isValidBasicStrict($String* notifType, Object$* sourceObj, $String* id, $String* typeName);
	bool isValidCreate($String* notifType);
	bool isValidUpdate($String* notifType, $String* name, ::java::util::List* newValue, ::java::util::List* oldValue);
	void readObject(::java::io::ObjectInputStream* in);
	::javax::management::ObjectName* safeGetObjectName(::javax::management::ObjectName* src);
	::java::util::ArrayList* safeGetObjectNameList(::java::util::List* src);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0xE27D47BE45FBA895;
	static const int64_t newSerialVersionUID = (int64_t)0xA0A4E2B1F46318C1;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	static $String* RELATION_BASIC_CREATION;
	static $String* RELATION_MBEAN_CREATION;
	static $String* RELATION_BASIC_UPDATE;
	static $String* RELATION_MBEAN_UPDATE;
	static $String* RELATION_BASIC_REMOVAL;
	static $String* RELATION_MBEAN_REMOVAL;
	$String* relationId = nullptr;
	$String* relationTypeName = nullptr;
	::javax::management::ObjectName* relationObjName = nullptr;
	::java::util::List* unregisterMBeanList = nullptr;
	$String* roleName = nullptr;
	::java::util::List* oldRoleValue = nullptr;
	::java::util::List* newRoleValue = nullptr;
};

		} // relation
	} // management
} // javax

#pragma pop_macro("RELATION_BASIC_CREATION")
#pragma pop_macro("RELATION_BASIC_REMOVAL")
#pragma pop_macro("RELATION_BASIC_UPDATE")
#pragma pop_macro("RELATION_MBEAN_CREATION")
#pragma pop_macro("RELATION_MBEAN_REMOVAL")
#pragma pop_macro("RELATION_MBEAN_UPDATE")

#endif // _javax_management_relation_RelationNotification_h_