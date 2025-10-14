#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor
//$ extends com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilder.h>
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
		namespace reflect {
			class Constructor;
			class Method;
		}
	}
}
namespace java {
	namespace util {
		class BitSet;
		class List;
		class Set;
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

class DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor : public ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder {
	$class(DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder)
public:
	DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor();
	void init$($Class* targetClass, $StringArray* itemNames);
	virtual $String* applicable($Array<::java::lang::reflect::Method>* getters) override;
	virtual $Object* fromCompositeData(::javax::management::openmbean::CompositeData* cd, $StringArray* itemNames, $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>* mappings) override;
	virtual $StringArray* getConstPropValues(::java::lang::reflect::Constructor* ctr);
	virtual $String* matchingMechanism(::java::lang::reflect::Constructor* constr);
	virtual $String* referenceMechannism($String* matchingMechanism);
	virtual $String* reportConstructorsAmbiguousFor(::java::util::Set* names);
	virtual $String* reportMultipleConstructorsFoundFor($StringArray* propertyNames);
	virtual $String* reportNoConstructor();
	virtual $String* reportNoConstructorFoundFor(::java::util::Set* names);
	static bool subset(::java::util::BitSet* sub, ::java::util::BitSet* sup);
	::java::util::List* annotatedConstructors = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor_h_