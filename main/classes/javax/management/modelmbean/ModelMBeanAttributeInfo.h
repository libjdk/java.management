#ifndef _javax_management_modelmbean_ModelMBeanAttributeInfo_h_
#define _javax_management_modelmbean_ModelMBeanAttributeInfo_h_
//$ class javax.management.modelmbean.ModelMBeanAttributeInfo
//$ extends javax.management.MBeanAttributeInfo
//$ implements javax.management.DescriptorAccess

#include <java/lang/Array.h>
#include <javax/management/DescriptorAccess.h>
#include <javax/management/MBeanAttributeInfo.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace javax {
	namespace management {
		class Descriptor;
	}
}

namespace javax {
	namespace management {
		namespace modelmbean {

class $export ModelMBeanAttributeInfo : public ::javax::management::MBeanAttributeInfo, public ::javax::management::DescriptorAccess {
	$class(ModelMBeanAttributeInfo, 0, ::javax::management::MBeanAttributeInfo, ::javax::management::DescriptorAccess)
public:
	ModelMBeanAttributeInfo();
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name, $String* description, ::java::lang::reflect::Method* getter, ::java::lang::reflect::Method* setter);
	void init$($String* name, $String* description, ::java::lang::reflect::Method* getter, ::java::lang::reflect::Method* setter, ::javax::management::Descriptor* descriptor);
	void init$($String* name, $String* type, $String* description, bool isReadable, bool isWritable, bool isIs);
	void init$($String* name, $String* type, $String* description, bool isReadable, bool isWritable, bool isIs, ::javax::management::Descriptor* descriptor);
	void init$(::javax::management::modelmbean::ModelMBeanAttributeInfo* inInfo);
	virtual $Object* clone() override;
	virtual ::javax::management::Descriptor* getDescriptor() override;
	void readObject(::java::io::ObjectInputStream* in);
	virtual void setDescriptor(::javax::management::Descriptor* inDescriptor) override;
	virtual $String* toString() override;
	::javax::management::Descriptor* validDescriptor(::javax::management::Descriptor* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0x62814AF8F0446C19;
	static const int64_t newSerialVersionUID = (int64_t)0x55C940A1EF0E6771;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	::javax::management::Descriptor* attrDescriptor = nullptr;
	static $String* currClass;
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_ModelMBeanAttributeInfo_h_