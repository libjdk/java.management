#ifndef _javax_management_MBeanInfo_h_
#define _javax_management_MBeanInfo_h_
//$ class javax.management.MBeanInfo
//$ extends java.lang.Cloneable
//$ implements java.io.Serializable,javax.management.DescriptorRead

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/management/DescriptorRead.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Map;
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

class $import MBeanInfo : public ::java::lang::Cloneable, public ::java::io::Serializable, public ::javax::management::DescriptorRead {
	$class(MBeanInfo, 0, ::java::lang::Cloneable, ::java::io::Serializable, ::javax::management::DescriptorRead)
public:
	MBeanInfo();
	virtual void finalize() override;
	void init$($String* className, $String* description, $Array<::javax::management::MBeanAttributeInfo>* attributes, $Array<::javax::management::MBeanConstructorInfo>* constructors, $Array<::javax::management::MBeanOperationInfo>* operations, $Array<::javax::management::MBeanNotificationInfo>* notifications);
	void init$($String* className, $String* description, $Array<::javax::management::MBeanAttributeInfo>* attributes, $Array<::javax::management::MBeanConstructorInfo>* constructors, $Array<::javax::management::MBeanOperationInfo>* operations, $Array<::javax::management::MBeanNotificationInfo>* notifications, ::javax::management::Descriptor* descriptor);
	static bool arrayGettersSafe($Class* subclass, $Class* immutableClass);
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	$Array<::javax::management::MBeanAttributeInfo>* fastGetAttributes();
	$Array<::javax::management::MBeanConstructorInfo>* fastGetConstructors();
	$Array<::javax::management::MBeanNotificationInfo>* fastGetNotifications();
	$Array<::javax::management::MBeanOperationInfo>* fastGetOperations();
	virtual $Array<::javax::management::MBeanAttributeInfo>* getAttributes();
	virtual $String* getClassName();
	virtual $Array<::javax::management::MBeanConstructorInfo>* getConstructors();
	virtual $String* getDescription();
	virtual ::javax::management::Descriptor* getDescriptor() override;
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotifications();
	virtual $Array<::javax::management::MBeanOperationInfo>* getOperations();
	virtual int32_t hashCode() override;
	static bool isEqual($String* s1, $String* s2);
	$Array<::javax::management::MBeanAttributeInfo>* nonNullAttributes();
	$Array<::javax::management::MBeanConstructorInfo>* nonNullConstructors();
	$Array<::javax::management::MBeanNotificationInfo>* nonNullNotifications();
	$Array<::javax::management::MBeanOperationInfo>* nonNullOperations();
	void readObject(::java::io::ObjectInputStream* in);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0xA6795E2F085689C9;
	::javax::management::Descriptor* descriptor = nullptr;
	$String* description = nullptr;
	$String* className = nullptr;
	$Array<::javax::management::MBeanAttributeInfo>* attributes = nullptr;
	$Array<::javax::management::MBeanOperationInfo>* operations = nullptr;
	$Array<::javax::management::MBeanConstructorInfo>* constructors = nullptr;
	$Array<::javax::management::MBeanNotificationInfo>* notifications = nullptr;
	int32_t hashCode$ = 0;
	bool arrayGettersSafe$ = false;
	static ::java::util::Map* arrayGettersSafeMap;
};

	} // management
} // javax

#endif // _javax_management_MBeanInfo_h_