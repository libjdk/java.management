#ifndef _javax_management_modelmbean_ModelMBeanInfo_h_
#define _javax_management_modelmbean_ModelMBeanInfo_h_
//$ interface javax.management.modelmbean.ModelMBeanInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace management {
		class Descriptor;
		class MBeanAttributeInfo;
		class MBeanConstructorInfo;
		class MBeanNotificationInfo;
		class MBeanOperationInfo;
	}
}
namespace javax {
	namespace management {
		namespace modelmbean {
			class ModelMBeanAttributeInfo;
			class ModelMBeanNotificationInfo;
			class ModelMBeanOperationInfo;
		}
	}
}

namespace javax {
	namespace management {
		namespace modelmbean {

class $import ModelMBeanInfo : public ::java::lang::Object {
	$interface(ModelMBeanInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* clone() override;
	virtual ::javax::management::modelmbean::ModelMBeanAttributeInfo* getAttribute($String* inName) {return nullptr;}
	virtual $Array<::javax::management::MBeanAttributeInfo>* getAttributes() {return nullptr;}
	virtual $String* getClassName() {return nullptr;}
	virtual $Array<::javax::management::MBeanConstructorInfo>* getConstructors() {return nullptr;}
	virtual $String* getDescription() {return nullptr;}
	virtual ::javax::management::Descriptor* getDescriptor($String* inDescriptorName, $String* inDescriptorType) {return nullptr;}
	virtual $Array<::javax::management::Descriptor>* getDescriptors($String* inDescriptorType) {return nullptr;}
	virtual ::javax::management::Descriptor* getMBeanDescriptor() {return nullptr;}
	virtual ::javax::management::modelmbean::ModelMBeanNotificationInfo* getNotification($String* inName) {return nullptr;}
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotifications() {return nullptr;}
	virtual ::javax::management::modelmbean::ModelMBeanOperationInfo* getOperation($String* inName) {return nullptr;}
	virtual $Array<::javax::management::MBeanOperationInfo>* getOperations() {return nullptr;}
	virtual void setDescriptor(::javax::management::Descriptor* inDescriptor, $String* inDescriptorType) {}
	virtual void setDescriptors($Array<::javax::management::Descriptor>* inDescriptors) {}
	virtual void setMBeanDescriptor(::javax::management::Descriptor* inDescriptor) {}
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_ModelMBeanInfo_h_