#ifndef _javax_management_NotificationFilterSupport_h_
#define _javax_management_NotificationFilterSupport_h_
//$ class javax.management.NotificationFilterSupport
//$ extends javax.management.NotificationFilter

#include <javax/management/NotificationFilter.h>

namespace java {
	namespace util {
		class List;
		class Vector;
	}
}
namespace javax {
	namespace management {
		class Notification;
	}
}

namespace javax {
	namespace management {

class $export NotificationFilterSupport : public ::javax::management::NotificationFilter {
	$class(NotificationFilterSupport, $NO_CLASS_INIT, ::javax::management::NotificationFilter)
public:
	NotificationFilterSupport();
	void init$();
	virtual void disableAllTypes();
	virtual void disableType($String* prefix);
	virtual void enableType($String* prefix);
	virtual ::java::util::Vector* getEnabledTypes();
	virtual bool isNotificationEnabled(::javax::management::Notification* notification) override;
	static const int64_t serialVersionUID = (int64_t)0x5B4D9668CF983659;
	::java::util::List* enabledTypes = nullptr;
};

	} // management
} // javax

#endif // _javax_management_NotificationFilterSupport_h_