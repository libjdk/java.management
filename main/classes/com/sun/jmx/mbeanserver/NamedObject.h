#ifndef _com_sun_jmx_mbeanserver_NamedObject_h_
#define _com_sun_jmx_mbeanserver_NamedObject_h_
//$ class com.sun.jmx.mbeanserver.NamedObject
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {
		class DynamicMBean;
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class NamedObject : public ::java::lang::Object {
	$class(NamedObject, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NamedObject();
	void init$(::javax::management::ObjectName* objectName, ::javax::management::DynamicMBean* object);
	void init$($String* objectName, ::javax::management::DynamicMBean* object);
	virtual bool equals(Object$* object) override;
	virtual ::javax::management::ObjectName* getName();
	virtual ::javax::management::DynamicMBean* getObject();
	virtual int32_t hashCode() override;
	::javax::management::ObjectName* name = nullptr;
	::javax::management::DynamicMBean* object = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_NamedObject_h_