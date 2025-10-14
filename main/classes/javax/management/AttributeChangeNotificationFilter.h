#ifndef _javax_management_AttributeChangeNotificationFilter_h_
#define _javax_management_AttributeChangeNotificationFilter_h_
//$ class javax.management.AttributeChangeNotificationFilter
//$ extends javax.management.NotificationFilter

#include <javax/management/NotificationFilter.h>

namespace java {
	namespace util {
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

class $export AttributeChangeNotificationFilter : public ::javax::management::NotificationFilter {
	$class(AttributeChangeNotificationFilter, $NO_CLASS_INIT, ::javax::management::NotificationFilter)
public:
	AttributeChangeNotificationFilter();
	void init$();
	virtual void disableAllAttributes();
	virtual void disableAttribute($String* name);
	virtual void enableAttribute($String* name);
	virtual ::java::util::Vector* getEnabledAttributes();
	virtual bool isNotificationEnabled(::javax::management::Notification* notification) override;
	static const int64_t serialVersionUID = (int64_t)0xA7E9CC49419E9F53;
	::java::util::Vector* enabledAttributes = nullptr;
};

	} // management
} // javax

#endif // _javax_management_AttributeChangeNotificationFilter_h_