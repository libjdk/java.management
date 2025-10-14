#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$RecordCompositeBuilder_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$RecordCompositeBuilder_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$RecordCompositeBuilder
//$ extends com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor.h>
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

class DefaultMXBeanMappingFactory$RecordCompositeBuilder : public ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor {
	$class(DefaultMXBeanMappingFactory$RecordCompositeBuilder, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilderViaConstructor)
public:
	DefaultMXBeanMappingFactory$RecordCompositeBuilder();
	void init$($Class* targetClass, $StringArray* itemNames);
	virtual $String* applicable($Array<::java::lang::reflect::Method>* getters) override;
	virtual $Object* fromCompositeData(::javax::management::openmbean::CompositeData* cd, $StringArray* itemNames, $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>* mappings) override;
	virtual $StringArray* getConstPropValues(::java::lang::reflect::Constructor* ctor) override;
	virtual $String* matchingMechanism(::java::lang::reflect::Constructor* constr) override;
	virtual $String* referenceMechannism($String* matchingMechanism) override;
	virtual $String* reportConstructorsAmbiguousFor(::java::util::Set* names) override;
	virtual $String* reportMultipleConstructorsFoundFor($StringArray* propertyNames) override;
	virtual $String* reportNoConstructor() override;
	virtual $String* reportNoConstructorFoundFor(::java::util::Set* names) override;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$RecordCompositeBuilder_h_