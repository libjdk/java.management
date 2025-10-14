#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeMapping_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeMapping_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeMapping
//$ extends com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class DefaultMXBeanMappingFactory;
				class DefaultMXBeanMappingFactory$CompositeBuilder;
				class MXBeanMapping;
				class MXBeanMappingFactory;
			}
		}
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
			class CompositeType;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class DefaultMXBeanMappingFactory$CompositeMapping : public ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping {
	$class(DefaultMXBeanMappingFactory$CompositeMapping, 0, ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping)
public:
	DefaultMXBeanMappingFactory$CompositeMapping();
	void init$(::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory* this$0, $Class* targetClass, ::javax::management::openmbean::CompositeType* compositeType, $StringArray* itemNames, $Array<::java::lang::reflect::Method>* getters, ::com::sun::jmx::mbeanserver::MXBeanMappingFactory* factory);
	virtual void checkReconstructible() override;
	virtual $Object* fromNonNullOpenValue(Object$* value) override;
	void makeCompositeBuilder();
	virtual $Object* toNonNullOpenValue(Object$* value) override;
	::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory* this$0 = nullptr;
	static bool $assertionsDisabled;
	$StringArray* itemNames = nullptr;
	$Array<::java::lang::reflect::Method>* getters = nullptr;
	$Array<::com::sun::jmx::mbeanserver::MXBeanMapping>* getterMappings = nullptr;
	::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder* compositeBuilder = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeMapping_h_