#ifndef _javax_management_modelmbean_ModelMBeanNotificationInfo_h_
#define _javax_management_modelmbean_ModelMBeanNotificationInfo_h_
//$ class javax.management.modelmbean.ModelMBeanNotificationInfo
//$ extends javax.management.MBeanNotificationInfo
//$ implements javax.management.DescriptorAccess

#include <java/lang/Array.h>
#include <javax/management/DescriptorAccess.h>
#include <javax/management/MBeanNotificationInfo.h>

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
	}
}

namespace javax {
	namespace management {
		namespace modelmbean {

class $import ModelMBeanNotificationInfo : public ::javax::management::MBeanNotificationInfo, public ::javax::management::DescriptorAccess {
	$class(ModelMBeanNotificationInfo, 0, ::javax::management::MBeanNotificationInfo, ::javax::management::DescriptorAccess)
public:
	ModelMBeanNotificationInfo();
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($StringArray* notifTypes, $String* name, $String* description);
	void init$($StringArray* notifTypes, $String* name, $String* description, ::javax::management::Descriptor* descriptor);
	void init$(::javax::management::modelmbean::ModelMBeanNotificationInfo* inInfo);
	virtual $Object* clone() override;
	virtual ::javax::management::Descriptor* getDescriptor() override;
	void readObject(::java::io::ObjectInputStream* in);
	virtual void setDescriptor(::javax::management::Descriptor* inDescriptor) override;
	virtual $String* toString() override;
	::javax::management::Descriptor* validDescriptor(::javax::management::Descriptor* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0xB7ACCDAD2FD40147;
	static const int64_t newSerialVersionUID = (int64_t)0x98ABA0399FEE525B;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	::javax::management::Descriptor* notificationDescriptor = nullptr;
	static $String* currClass;
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_ModelMBeanNotificationInfo_h_