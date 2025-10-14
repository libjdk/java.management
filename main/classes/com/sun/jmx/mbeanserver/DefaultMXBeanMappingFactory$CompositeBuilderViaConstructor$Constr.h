#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}
namespace java {
	namespace util {
		class BitSet;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr : public ::java::lang::Object {
	$class(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr();
	void init$(::java::lang::reflect::Constructor* constructor, $ints* paramIndexes, ::java::util::BitSet* presentParams);
	::java::lang::reflect::Constructor* constructor = nullptr;
	$ints* paramIndexes = nullptr;
	::java::util::BitSet* presentParams = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor$Constr_h_