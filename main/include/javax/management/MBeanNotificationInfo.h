#ifndef _javax_management_MBeanNotificationInfo_h_
#define _javax_management_MBeanNotificationInfo_h_
//$ class javax.management.MBeanNotificationInfo
//$ extends javax.management.MBeanFeatureInfo
//$ implements java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/management/MBeanFeatureInfo.h>

#pragma push_macro("NO_NOTIFICATIONS")
#undef NO_NOTIFICATIONS
#pragma push_macro("NO_TYPES")
#undef NO_TYPES

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace javax {
	namespace management {
		class Descriptor;
	}
}

namespace javax {
	namespace management {

class $import MBeanNotificationInfo : public ::javax::management::MBeanFeatureInfo, public ::java::lang::Cloneable {
	$class(MBeanNotificationInfo, 0, ::javax::management::MBeanFeatureInfo, ::java::lang::Cloneable)
public:
	MBeanNotificationInfo();
	virtual void finalize() override;
	void init$($StringArray* notifTypes, $String* name, $String* description);
	void init$($StringArray* notifTypes, $String* name, $String* description, ::javax::management::Descriptor* descriptor);
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	$StringArray* fastGetNotifTypes();
	virtual $StringArray* getNotifTypes();
	virtual int32_t hashCode() override;
	void readObject(::java::io::ObjectInputStream* ois);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xCA09BAA9DD73FD48;
	static $StringArray* NO_TYPES;
	static $Array<::javax::management::MBeanNotificationInfo>* NO_NOTIFICATIONS;
	$StringArray* types = nullptr;
	bool arrayGettersSafe = false;
};

	} // management
} // javax

#pragma pop_macro("NO_NOTIFICATIONS")
#pragma pop_macro("NO_TYPES")

#endif // _javax_management_MBeanNotificationInfo_h_