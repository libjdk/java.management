#ifndef _javax_management_modelmbean_ModelMBeanInfoSupport_h_
#define _javax_management_modelmbean_ModelMBeanInfoSupport_h_
//$ class javax.management.modelmbean.ModelMBeanInfoSupport
//$ extends javax.management.MBeanInfo
//$ implements javax.management.modelmbean.ModelMBeanInfo

#include <java/lang/Array.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/modelmbean/ModelMBeanInfo.h>

#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("ATTR")
#undef ATTR
#pragma push_macro("CONS")
#undef CONS
#pragma push_macro("MMB")
#undef MMB
#pragma push_macro("NOTF")
#undef NOTF
#pragma push_macro("NO_ATTRIBUTES")
#undef NO_ATTRIBUTES
#pragma push_macro("NO_CONSTRUCTORS")
#undef NO_CONSTRUCTORS
#pragma push_macro("NO_NOTIFICATIONS")
#undef NO_NOTIFICATIONS
#pragma push_macro("NO_OPERATIONS")
#undef NO_OPERATIONS
#pragma push_macro("OPER")
#undef OPER

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
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
			class ModelMBeanConstructorInfo;
			class ModelMBeanNotificationInfo;
			class ModelMBeanOperationInfo;
		}
	}
}

namespace javax {
	namespace management {
		namespace modelmbean {

class $import ModelMBeanInfoSupport : public ::javax::management::MBeanInfo, public ::javax::management::modelmbean::ModelMBeanInfo {
	$class(ModelMBeanInfoSupport, 0, ::javax::management::MBeanInfo, ::javax::management::modelmbean::ModelMBeanInfo)
public:
	ModelMBeanInfoSupport();
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual $Array<::javax::management::MBeanAttributeInfo>* getAttributes() override;
	virtual $String* getClassName() override;
	virtual $Array<::javax::management::MBeanConstructorInfo>* getConstructors() override;
	virtual $String* getDescription() override;
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotifications() override;
	virtual $Array<::javax::management::MBeanOperationInfo>* getOperations() override;
	virtual int32_t hashCode() override;
	void init$(::javax::management::modelmbean::ModelMBeanInfo* mbi);
	void init$($String* className, $String* description, $Array<::javax::management::modelmbean::ModelMBeanAttributeInfo>* attributes, $Array<::javax::management::modelmbean::ModelMBeanConstructorInfo>* constructors, $Array<::javax::management::modelmbean::ModelMBeanOperationInfo>* operations, $Array<::javax::management::modelmbean::ModelMBeanNotificationInfo>* notifications);
	void init$($String* className, $String* description, $Array<::javax::management::modelmbean::ModelMBeanAttributeInfo>* attributes, $Array<::javax::management::modelmbean::ModelMBeanConstructorInfo>* constructors, $Array<::javax::management::modelmbean::ModelMBeanOperationInfo>* operations, $Array<::javax::management::modelmbean::ModelMBeanNotificationInfo>* notifications, ::javax::management::Descriptor* mbeandescriptor);
	virtual $Object* clone() override;
	virtual ::javax::management::modelmbean::ModelMBeanAttributeInfo* getAttribute($String* inName) override;
	virtual ::javax::management::modelmbean::ModelMBeanConstructorInfo* getConstructor($String* inName);
	virtual ::javax::management::Descriptor* getDescriptor($String* inDescriptorName);
	virtual ::javax::management::Descriptor* getDescriptor($String* inDescriptorName, $String* inDescriptorType) override;
	virtual ::javax::management::Descriptor* getDescriptor() override;
	virtual $Array<::javax::management::Descriptor>* getDescriptors($String* inDescriptorType) override;
	virtual ::javax::management::Descriptor* getMBeanDescriptor() override;
	::javax::management::Descriptor* getMBeanDescriptorNoException();
	virtual ::javax::management::modelmbean::ModelMBeanNotificationInfo* getNotification($String* inName) override;
	virtual ::javax::management::modelmbean::ModelMBeanOperationInfo* getOperation($String* inName) override;
	void readObject(::java::io::ObjectInputStream* in);
	virtual void setDescriptor(::javax::management::Descriptor* inDescriptor, $String* inDescriptorType) override;
	virtual void setDescriptors($Array<::javax::management::Descriptor>* inDescriptors) override;
	virtual void setMBeanDescriptor(::javax::management::Descriptor* inMBeanDescriptor) override;
	virtual $String* toString() override;
	::javax::management::Descriptor* validDescriptor(::javax::management::Descriptor* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0xC943CCF46E372743;
	static const int64_t newSerialVersionUID = (int64_t)0xE522EE8F42424E9F;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	::javax::management::Descriptor* modelMBeanDescriptor = nullptr;
	$Array<::javax::management::MBeanAttributeInfo>* modelMBeanAttributes = nullptr;
	$Array<::javax::management::MBeanConstructorInfo>* modelMBeanConstructors = nullptr;
	$Array<::javax::management::MBeanNotificationInfo>* modelMBeanNotifications = nullptr;
	$Array<::javax::management::MBeanOperationInfo>* modelMBeanOperations = nullptr;
	static $String* ATTR;
	static $String* OPER;
	static $String* NOTF;
	static $String* CONS;
	static $String* MMB;
	static $String* ALL;
	static $String* currClass;
	static $Array<::javax::management::modelmbean::ModelMBeanAttributeInfo>* NO_ATTRIBUTES;
	static $Array<::javax::management::modelmbean::ModelMBeanConstructorInfo>* NO_CONSTRUCTORS;
	static $Array<::javax::management::modelmbean::ModelMBeanNotificationInfo>* NO_NOTIFICATIONS;
	static $Array<::javax::management::modelmbean::ModelMBeanOperationInfo>* NO_OPERATIONS;
};

		} // modelmbean
	} // management
} // javax

#pragma pop_macro("ALL")
#pragma pop_macro("ATTR")
#pragma pop_macro("CONS")
#pragma pop_macro("MMB")
#pragma pop_macro("NOTF")
#pragma pop_macro("NO_ATTRIBUTES")
#pragma pop_macro("NO_CONSTRUCTORS")
#pragma pop_macro("NO_NOTIFICATIONS")
#pragma pop_macro("NO_OPERATIONS")
#pragma pop_macro("OPER")

#endif // _javax_management_modelmbean_ModelMBeanInfoSupport_h_