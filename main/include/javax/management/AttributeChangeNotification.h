#ifndef _javax_management_AttributeChangeNotification_h_
#define _javax_management_AttributeChangeNotification_h_
//$ class javax.management.AttributeChangeNotification
//$ extends javax.management.Notification

#include <javax/management/Notification.h>

#pragma push_macro("ATTRIBUTE_CHANGE")
#undef ATTRIBUTE_CHANGE

namespace javax {
	namespace management {

class $import AttributeChangeNotification : public ::javax::management::Notification {
	$class(AttributeChangeNotification, 0, ::javax::management::Notification)
public:
	AttributeChangeNotification();
	void init$(Object$* source, int64_t sequenceNumber, int64_t timeStamp, $String* msg, $String* attributeName, $String* attributeType, Object$* oldValue, Object$* newValue);
	virtual $String* getAttributeName();
	virtual $String* getAttributeType();
	virtual $Object* getNewValue();
	virtual $Object* getOldValue();
	static const int64_t serialVersionUID = (int64_t)0x076D53C940B0BF76;
	static $String* ATTRIBUTE_CHANGE;
	$String* attributeName = nullptr;
	$String* attributeType = nullptr;
	$Object* oldValue = nullptr;
	$Object* newValue = nullptr;
};

	} // management
} // javax

#pragma pop_macro("ATTRIBUTE_CHANGE")

#endif // _javax_management_AttributeChangeNotification_h_