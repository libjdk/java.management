#ifndef _javax_management_relation_RoleInfo_h_
#define _javax_management_relation_RoleInfo_h_
//$ class javax.management.relation.RoleInfo
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("ROLE_CARDINALITY_INFINITY")
#undef ROLE_CARDINALITY_INFINITY

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}

namespace javax {
	namespace management {
		namespace relation {

class $import RoleInfo : public ::java::io::Serializable {
	$class(RoleInfo, 0, ::java::io::Serializable)
public:
	RoleInfo();
	void init$($String* roleName, $String* mbeanClassName, bool read, bool write, int32_t min, int32_t max, $String* descr);
	void init$($String* roleName, $String* mbeanClassName, bool read, bool write);
	void init$($String* roleName, $String* mbeanClassName);
	void init$(::javax::management::relation::RoleInfo* roleInfo);
	virtual bool checkMaxDegree(int32_t value);
	virtual bool checkMinDegree(int32_t value);
	virtual $String* getDescription();
	virtual int32_t getMaxDegree();
	virtual int32_t getMinDegree();
	virtual $String* getName();
	virtual $String* getRefMBeanClassName();
	void init($String* roleName, $String* mbeanClassName, bool read, bool write, int32_t min, int32_t max, $String* descr);
	virtual bool isReadable();
	virtual bool isWritable();
	void readObject(::java::io::ObjectInputStream* in);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0x644C5FE80184C94F;
	static const int64_t newSerialVersionUID = (int64_t)0x22C361777840B5BB;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	static const int32_t ROLE_CARDINALITY_INFINITY = (-1);
	$String* name = nullptr;
	bool isReadable$ = false;
	bool isWritable$ = false;
	$String* description = nullptr;
	int32_t minDegree = 0;
	int32_t maxDegree = 0;
	$String* referencedMBeanClassName = nullptr;
};

		} // relation
	} // management
} // javax

#pragma pop_macro("ROLE_CARDINALITY_INFINITY")

#endif // _javax_management_relation_RoleInfo_h_