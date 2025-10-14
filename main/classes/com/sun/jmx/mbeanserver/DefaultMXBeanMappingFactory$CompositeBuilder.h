#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilder_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilder_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MXBeanMapping;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class CompositeData;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class DefaultMXBeanMappingFactory$CompositeBuilder : public ::java::lang::Object {
	$class(DefaultMXBeanMappingFactory$CompositeBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultMXBeanMappingFactory$CompositeBuilder();
	void init$($Class* targetClass, $StringArray* itemNames);
	virtual $String* applicable($Array<::java::lang::reflect::Method>* getters) {return nullptr;}
	virtual $Object* fromCompositeData(::javax::management::openmbean::CompositeData* cd, $StringArray* itemNames, $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>* converters) {return nullptr;}
	virtual $StringArray* getItemNames();
	virtual $Class* getTargetClass();
	virtual $Throwable* possibleCause();
	$Class* targetClass = nullptr;
	$StringArray* itemNames = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilder_h_