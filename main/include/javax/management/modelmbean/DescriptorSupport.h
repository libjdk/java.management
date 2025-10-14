#ifndef _javax_management_modelmbean_DescriptorSupport_h_
#define _javax_management_modelmbean_DescriptorSupport_h_
//$ class javax.management.modelmbean.DescriptorSupport
//$ extends javax.management.Descriptor

#include <java/lang/Array.h>
#include <javax/management/Descriptor.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace util {
		class Map;
		class SortedMap;
	}
}

namespace javax {
	namespace management {
		namespace modelmbean {

class $import DescriptorSupport : public ::javax::management::Descriptor {
	$class(DescriptorSupport, 0, ::javax::management::Descriptor)
public:
	DescriptorSupport();
	void init$();
	void init$(int32_t initNumFields);
	void init$(::javax::management::modelmbean::DescriptorSupport* inDescr);
	void init$($String* inStr);
	void init$($StringArray* fieldNames, $ObjectArray* fieldValues);
	void init$($StringArray* fields);
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual $StringArray* getFieldNames() override;
	virtual $Object* getFieldValue($String* fieldName) override;
	virtual $ObjectArray* getFieldValues($StringArray* fieldNames) override;
	virtual $StringArray* getFields() override;
	virtual int32_t hashCode() override;
	void init(::java::util::Map* initMap);
	static bool isMagic(char16_t c);
	virtual bool isValid() override;
	static $String* makeFieldValue(Object$* value);
	static $Object* parseQuotedFieldValue($String* s);
	static $String* quote($String* s);
	void readObject(::java::io::ObjectInputStream* in);
	virtual void removeField($String* fieldName) override;
	virtual void setField($String* fieldName, Object$* fieldValue) override;
	virtual void setFields($StringArray* fieldNames, $ObjectArray* fieldValues) override;
	int64_t toNumeric($String* inStr);
	virtual $String* toString() override;
	virtual $String* toXMLString();
	static $String* unquote($String* s);
	bool validateField($String* fldName, Object$* fldValue);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0x7003F1D3BECAD481;
	static const int64_t newSerialVersionUID = (int64_t)0xA8AAE1DBA1E9E001;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static $String* serialForm;
	::java::util::SortedMap* descriptorMap = nullptr;
	static $String* currClass;
	static $StringArray* entities;
	static ::java::util::Map* entityToCharMap;
	static $StringArray* charToEntityMap;
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_DescriptorSupport_h_