#ifndef _com_sun_jmx_mbeanserver_MXBeanMapping_h_
#define _com_sun_jmx_mbeanserver_MXBeanMapping_h_
//$ class com.sun.jmx.mbeanserver.MXBeanMapping
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Type;
		}
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class OpenType;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MXBeanMapping : public ::java::lang::Object {
	$class(MXBeanMapping, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MXBeanMapping();
	void init$(::java::lang::reflect::Type* javaType, ::javax::management::openmbean::OpenType* openType);
	virtual void checkReconstructible();
	virtual $Object* fromOpenValue(Object$* openValue) {return nullptr;}
	::java::lang::reflect::Type* getJavaType();
	$Class* getOpenClass();
	::javax::management::openmbean::OpenType* getOpenType();
	static $Class* makeOpenClass(::java::lang::reflect::Type* javaType, ::javax::management::openmbean::OpenType* openType);
	virtual $Object* toOpenValue(Object$* javaValue) {return nullptr;}
	::java::lang::reflect::Type* javaType = nullptr;
	::javax::management::openmbean::OpenType* openType = nullptr;
	$Class* openClass = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MXBeanMapping_h_