#ifndef _com_sun_jmx_mbeanserver_MXBeanMappingFactory_h_
#define _com_sun_jmx_mbeanserver_MXBeanMappingFactory_h_
//$ class com.sun.jmx.mbeanserver.MXBeanMappingFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT

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
		namespace reflect {
			class Type;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MXBeanMappingFactory : public ::java::lang::Object {
	$class(MXBeanMappingFactory, 0, ::java::lang::Object)
public:
	MXBeanMappingFactory();
	void init$();
	virtual ::com::sun::jmx::mbeanserver::MXBeanMapping* mappingForType(::java::lang::reflect::Type* t, ::com::sun::jmx::mbeanserver::MXBeanMappingFactory* f) {return nullptr;}
	static ::com::sun::jmx::mbeanserver::MXBeanMappingFactory* DEFAULT;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#pragma pop_macro("DEFAULT")

#endif // _com_sun_jmx_mbeanserver_MXBeanMappingFactory_h_