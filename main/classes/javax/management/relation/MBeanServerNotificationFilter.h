#ifndef _javax_management_relation_MBeanServerNotificationFilter_h_
#define _javax_management_relation_MBeanServerNotificationFilter_h_
//$ class javax.management.relation.MBeanServerNotificationFilter
//$ extends javax.management.NotificationFilterSupport

#include <java/lang/Array.h>
#include <javax/management/NotificationFilterSupport.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace util {
		class List;
		class Vector;
	}
}
namespace javax {
	namespace management {
		class Notification;
		class ObjectName;
	}
}

namespace javax {
	namespace management {
		namespace relation {

class $export MBeanServerNotificationFilter : public ::javax::management::NotificationFilterSupport {
	$class(MBeanServerNotificationFilter, 0, ::javax::management::NotificationFilterSupport)
public:
	MBeanServerNotificationFilter();
	void init$();
	virtual void disableAllObjectNames();
	virtual void disableObjectName(::javax::management::ObjectName* objectName);
	virtual void enableAllObjectNames();
	virtual void enableObjectName(::javax::management::ObjectName* objectName);
	virtual ::java::util::Vector* getDisabledObjectNames();
	virtual ::java::util::Vector* getEnabledObjectNames();
	virtual bool isNotificationEnabled(::javax::management::Notification* notif) override;
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0x534A9D90E596CB55;
	static const int64_t newSerialVersionUID = (int64_t)0x242A04BBEE3F8828;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	::java::util::List* selectedNames = nullptr;
	::java::util::List* deselectedNames = nullptr;
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_MBeanServerNotificationFilter_h_