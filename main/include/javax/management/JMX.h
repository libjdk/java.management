#ifndef _javax_management_JMX_h_
#define _javax_management_JMX_h_
//$ class javax.management.JMX
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_VALUE_FIELD")
#undef DEFAULT_VALUE_FIELD
#pragma push_macro("IMMUTABLE_INFO_FIELD")
#undef IMMUTABLE_INFO_FIELD
#pragma push_macro("INTERFACE_CLASS_NAME_FIELD")
#undef INTERFACE_CLASS_NAME_FIELD
#pragma push_macro("JMX")
#undef JMX
#pragma push_macro("LEGAL_VALUES_FIELD")
#undef LEGAL_VALUES_FIELD
#pragma push_macro("MAX_VALUE_FIELD")
#undef MAX_VALUE_FIELD
#pragma push_macro("MIN_VALUE_FIELD")
#undef MIN_VALUE_FIELD
#pragma push_macro("MXBEAN_FIELD")
#undef MXBEAN_FIELD
#pragma push_macro("OPEN_TYPE_FIELD")
#undef OPEN_TYPE_FIELD
#pragma push_macro("ORIGINAL_TYPE_FIELD")
#undef ORIGINAL_TYPE_FIELD

namespace javax {
	namespace management {
		class MBeanServerConnection;
		class ObjectName;
	}
}

namespace javax {
	namespace management {

class $import JMX : public ::java::lang::Object {
	$class(JMX, 0, ::java::lang::Object)
public:
	JMX();
	void init$();
	static $Object* createProxy(::javax::management::MBeanServerConnection* connection, ::javax::management::ObjectName* objectName, $Class* interfaceClass, bool notificationEmitter, bool isMXBean);
	static bool isMXBeanInterface($Class* interfaceClass);
	static $Object* newMBeanProxy(::javax::management::MBeanServerConnection* connection, ::javax::management::ObjectName* objectName, $Class* interfaceClass);
	static $Object* newMBeanProxy(::javax::management::MBeanServerConnection* connection, ::javax::management::ObjectName* objectName, $Class* interfaceClass, bool notificationEmitter);
	static $Object* newMXBeanProxy(::javax::management::MBeanServerConnection* connection, ::javax::management::ObjectName* objectName, $Class* interfaceClass);
	static $Object* newMXBeanProxy(::javax::management::MBeanServerConnection* connection, ::javax::management::ObjectName* objectName, $Class* interfaceClass, bool notificationEmitter);
	static ::javax::management::JMX* proof;
	static $String* DEFAULT_VALUE_FIELD;
	static $String* IMMUTABLE_INFO_FIELD;
	static $String* INTERFACE_CLASS_NAME_FIELD;
	static $String* LEGAL_VALUES_FIELD;
	static $String* MAX_VALUE_FIELD;
	static $String* MIN_VALUE_FIELD;
	static $String* MXBEAN_FIELD;
	static $String* OPEN_TYPE_FIELD;
	static $String* ORIGINAL_TYPE_FIELD;
};

	} // management
} // javax

#pragma pop_macro("DEFAULT_VALUE_FIELD")
#pragma pop_macro("IMMUTABLE_INFO_FIELD")
#pragma pop_macro("INTERFACE_CLASS_NAME_FIELD")
#pragma pop_macro("JMX")
#pragma pop_macro("LEGAL_VALUES_FIELD")
#pragma pop_macro("MAX_VALUE_FIELD")
#pragma pop_macro("MIN_VALUE_FIELD")
#pragma pop_macro("MXBEAN_FIELD")
#pragma pop_macro("OPEN_TYPE_FIELD")
#pragma pop_macro("ORIGINAL_TYPE_FIELD")

#endif // _javax_management_JMX_h_