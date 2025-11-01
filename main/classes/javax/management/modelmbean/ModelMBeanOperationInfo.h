#ifndef _javax_management_modelmbean_ModelMBeanOperationInfo_h_
#define _javax_management_modelmbean_ModelMBeanOperationInfo_h_
//$ class javax.management.modelmbean.ModelMBeanOperationInfo
//$ extends javax.management.MBeanOperationInfo
//$ implements javax.management.DescriptorAccess

#include <java/lang/Array.h>
#include <javax/management/DescriptorAccess.h>
#include <javax/management/MBeanOperationInfo.h>

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
		class MBeanParameterInfo;
	}
}

namespace javax {
	namespace management {
		namespace modelmbean {

class $export ModelMBeanOperationInfo : public ::javax::management::MBeanOperationInfo, public ::javax::management::DescriptorAccess {
	$class(ModelMBeanOperationInfo, 0, ::javax::management::MBeanOperationInfo, ::javax::management::DescriptorAccess)
public:
	ModelMBeanOperationInfo();
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* description, ::java::lang::reflect::Method* operationMethod);
	void init$($String* description, ::java::lang::reflect::Method* operationMethod, ::javax::management::Descriptor* descriptor);
	void init$($String* name, $String* description, $Array<::javax::management::MBeanParameterInfo>* signature, $String* type, int32_t impact);
	void init$($String* name, $String* description, $Array<::javax::management::MBeanParameterInfo>* signature, $String* type, int32_t impact, ::javax::management::Descriptor* descriptor);
	void init$(::javax::management::modelmbean::ModelMBeanOperationInfo* inInfo);
	virtual $Object* clone() override;
	virtual ::javax::management::Descriptor* getDescriptor() override;
	void readObject(::java::io::ObjectInputStream* in);
	virtual void setDescriptor(::javax::management::Descriptor* inDescriptor) override;
	virtual $String* toString() override;
	::javax::management::Descriptor* validDescriptor(::javax::management::Descriptor* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0x7E1DCE2A56F1E767;
	static const int64_t newSerialVersionUID = (int64_t)0x5AA8ED3AE19F17E1;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	::javax::management::Descriptor* operationDescriptor = nullptr;
	static $String* currClass;
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_ModelMBeanOperationInfo_h_