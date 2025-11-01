#ifndef _javax_management_ObjectName_h_
#define _javax_management_ObjectName_h_
//$ class javax.management.ObjectName
//$ extends java.lang.Comparable
//$ implements javax.management.QueryExp

#include <java/lang/Array.h>
#include <java/lang/Comparable.h>
#include <javax/management/QueryExp.h>

#pragma push_macro("DOMAIN_LENGTH_MASK")
#undef DOMAIN_LENGTH_MASK
#pragma push_macro("DOMAIN_PATTERN")
#undef DOMAIN_PATTERN
#pragma push_macro("FLAG_MASK")
#undef FLAG_MASK
#pragma push_macro("PROPLIST_PATTERN")
#undef PROPLIST_PATTERN
#pragma push_macro("PROPVAL_PATTERN")
#undef PROPVAL_PATTERN
#pragma push_macro("WILDCARD")
#undef WILDCARD

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Map;
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName$Property;
	}
}

namespace javax {
	namespace management {

class $import ObjectName : public ::java::lang::Comparable, public ::javax::management::QueryExp {
	$class(ObjectName, 0, ::java::lang::Comparable, ::javax::management::QueryExp)
public:
	ObjectName();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* name);
	void init$($String* domain, $String* key, $String* value);
	void init$($String* domain, ::java::util::Hashtable* table);
	::java::util::Map* _getKeyPropertyList();
	void addProperty(::javax::management::ObjectName$Property* prop, int32_t index, ::java::util::Map* keys_map, $String* key_name);
	virtual bool apply(::javax::management::ObjectName* name) override;
	static void checkKey($String* key);
	static bool checkValue($String* val);
	virtual int32_t compareTo(::javax::management::ObjectName* name);
	virtual int32_t compareTo(Object$* name) override;
	void construct($String* name);
	void construct($String* domain, ::java::util::Map* props);
	virtual bool equals(Object$* object) override;
	virtual $String* getCanonicalKeyPropertyListString();
	virtual $String* getCanonicalName();
	virtual $String* getDomain();
	int32_t getDomainLength();
	static ::javax::management::ObjectName* getInstance($String* name);
	static ::javax::management::ObjectName* getInstance($String* domain, $String* key, $String* value);
	static ::javax::management::ObjectName* getInstance($String* domain, ::java::util::Hashtable* table);
	static ::javax::management::ObjectName* getInstance(::javax::management::ObjectName* name);
	virtual $String* getKeyProperty($String* property);
	virtual ::java::util::Hashtable* getKeyPropertyList();
	virtual $String* getKeyPropertyListString();
	$String* getSerializedNameString();
	virtual int32_t hashCode() override;
	bool isDomain($String* domain);
	virtual bool isDomainPattern();
	virtual bool isPattern();
	virtual bool isPropertyListPattern();
	virtual bool isPropertyPattern();
	virtual bool isPropertyValuePattern();
	virtual bool isPropertyValuePattern($String* property);
	bool matchDomains(::javax::management::ObjectName* name);
	bool matchKeys(::javax::management::ObjectName* name);
	static int32_t parseKey($chars* s, int32_t startKey);
	static $ints* parseValue($chars* s, int32_t startValue);
	static $String* quote($String* s);
	void readObject(::java::io::ObjectInputStream* in);
	void setCanonicalName($chars* specified_chars, $chars* canonical_chars, $StringArray* keys, ::java::util::Map* keys_map, int32_t prop_index, int32_t nb_props);
	void setDomainLength(int32_t length);
	void setDomainPattern(bool value);
	virtual void setMBeanServer(::javax::management::MBeanServer* mbs) override;
	void setPropertyListPattern(bool value);
	void setPropertyValuePattern(bool value);
	virtual $String* toString() override;
	static $String* unquote($String* q);
	int32_t writeKeyPropertyListString($chars* canonicalChars, $chars* data, int32_t offset);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int32_t DOMAIN_PATTERN = 0x80000000;
	static const int32_t PROPLIST_PATTERN = 0x40000000;
	static const int32_t PROPVAL_PATTERN = 0x20000000;
	static const int32_t FLAG_MASK = 0xE0000000; // DOMAIN_PATTERN | PROPLIST_PATTERN | PROPVAL_PATTERN
	static const int32_t DOMAIN_LENGTH_MASK = ~FLAG_MASK;
	static const int64_t oldSerialVersionUID = (int64_t)0xB41E7D55CFD55210;
	static const int64_t newSerialVersionUID = (int64_t)0x0F03A71BEB6D15CF;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	static $Array<::javax::management::ObjectName$Property>* _Empty_property_array;
	$String* _canonicalName = nullptr;
	$Array<::javax::management::ObjectName$Property>* _kp_array = nullptr;
	$Array<::javax::management::ObjectName$Property>* _ca_array = nullptr;
	::java::util::Map* _propertyList = nullptr;
	int32_t _compressed_storage = 0;
	static ::javax::management::ObjectName* WILDCARD;
};

	} // management
} // javax

#pragma pop_macro("DOMAIN_LENGTH_MASK")
#pragma pop_macro("DOMAIN_PATTERN")
#pragma pop_macro("FLAG_MASK")
#pragma pop_macro("PROPLIST_PATTERN")
#pragma pop_macro("PROPVAL_PATTERN")
#pragma pop_macro("WILDCARD")

#endif // _javax_management_ObjectName_h_