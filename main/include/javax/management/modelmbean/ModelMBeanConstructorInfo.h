#ifndef _javax_management_modelmbean_ModelMBeanConstructorInfo_h_
#define _javax_management_modelmbean_ModelMBeanConstructorInfo_h_
//$ class javax.management.modelmbean.ModelMBeanConstructorInfo
//$ extends javax.management.MBeanConstructorInfo
//$ implements javax.management.DescriptorAccess

#include <java/lang/Array.h>
#include <javax/management/DescriptorAccess.h>
#include <javax/management/MBeanConstructorInfo.h>

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
			class Constructor;
		}
	}
}
namespace javax {
	namespace management {
		class Descriptor;
		class MBeanParameterInfo;
	}
}

namespace javax {
	namespace management {
		namespace modelmbean {

class $import ModelMBeanConstructorInfo : public ::javax::management::MBeanConstructorInfo, public ::javax::management::DescriptorAccess {
	$class(ModelMBeanConstructorInfo, 0, ::javax::management::MBeanConstructorInfo, ::javax::management::DescriptorAccess)
public:
	ModelMBeanConstructorInfo();
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* description, ::java::lang::reflect::Constructor* constructorMethod);
	void init$($String* description, ::java::lang::reflect::Constructor* constructorMethod, ::javax::management::Descriptor* descriptor);
	void init$($String* name, $String* description, $Array<::javax::management::MBeanParameterInfo>* signature);
	void init$($String* name, $String* description, $Array<::javax::management::MBeanParameterInfo>* signature, ::javax::management::Descriptor* descriptor);
	void init$(::javax::management::modelmbean::ModelMBeanConstructorInfo* old);
	virtual $Object* clone() override;
	virtual ::javax::management::Descriptor* getDescriptor() override;
	void readObject(::java::io::ObjectInputStream* in);
	virtual void setDescriptor(::javax::management::Descriptor* inDescriptor) override;
	virtual $String* toString() override;
	::javax::management::Descriptor* validDescriptor(::javax::management::Descriptor* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0xC261817B498E500A;
	static const int64_t newSerialVersionUID = (int64_t)0x359BF2934A2019EA;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	::javax::management::Descriptor* consDescriptor = nullptr;
	static $String* currClass;
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_ModelMBeanConstructorInfo_h_