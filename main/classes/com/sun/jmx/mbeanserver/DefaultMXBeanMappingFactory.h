#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory
//$ extends com.sun.jmx.mbeanserver.MXBeanMappingFactory

#include <com/sun/jmx/mbeanserver/MXBeanMappingFactory.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class DefaultMXBeanMappingFactory$Mappings;
				class MXBeanMapping;
			}
		}
	}
}
namespace java {
	namespace io {
		class InvalidObjectException;
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
			class ParameterizedType;
			class Type;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class OpenDataException;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class DefaultMXBeanMappingFactory : public ::com::sun::jmx::mbeanserver::MXBeanMappingFactory {
	$class(DefaultMXBeanMappingFactory, 0, ::com::sun::jmx::mbeanserver::MXBeanMappingFactory)
public:
	DefaultMXBeanMappingFactory();
	void init$();
	static $String* capitalize($String* name);
	static $String* decapitalize($String* name);
	static ::com::sun::jmx::mbeanserver::MXBeanMapping* getMapping(::java::lang::reflect::Type* type);
	static ::java::io::InvalidObjectException* invalidObjectException($String* msg, $Throwable* cause);
	static ::java::io::InvalidObjectException* invalidObjectException($Throwable* cause);
	static bool isIdentity(::com::sun::jmx::mbeanserver::MXBeanMapping* mapping);
	::com::sun::jmx::mbeanserver::MXBeanMapping* makeArrayOrCollectionMapping(::java::lang::reflect::Type* collectionType, ::java::lang::reflect::Type* elementType, ::com::sun::jmx::mbeanserver::MXBeanMappingFactory* factory);
	::com::sun::jmx::mbeanserver::MXBeanMapping* makeCompositeMapping($Class* c, ::com::sun::jmx::mbeanserver::MXBeanMappingFactory* factory);
	static ::com::sun::jmx::mbeanserver::MXBeanMapping* makeEnumMapping($Class* enumClass, $Class* fake);
	static ::com::sun::jmx::mbeanserver::MXBeanMapping* makeMXBeanRefMapping(::java::lang::reflect::Type* t);
	::com::sun::jmx::mbeanserver::MXBeanMapping* makeMapping(::java::lang::reflect::Type* objType, ::com::sun::jmx::mbeanserver::MXBeanMappingFactory* factory);
	::com::sun::jmx::mbeanserver::MXBeanMapping* makeParameterizedTypeMapping(::java::lang::reflect::ParameterizedType* objType, ::com::sun::jmx::mbeanserver::MXBeanMappingFactory* factory);
	::com::sun::jmx::mbeanserver::MXBeanMapping* makeTabularMapping(::java::lang::reflect::Type* objType, bool sortedMap, ::java::lang::reflect::Type* keyType, ::java::lang::reflect::Type* valueType, ::com::sun::jmx::mbeanserver::MXBeanMappingFactory* factory);
	virtual ::com::sun::jmx::mbeanserver::MXBeanMapping* mappingForType(::java::lang::reflect::Type* objType, ::com::sun::jmx::mbeanserver::MXBeanMappingFactory* factory) override;
	static void mustBeComparable($Class* collection, ::java::lang::reflect::Type* element);
	static ::javax::management::openmbean::OpenDataException* openDataException($String* msg, $Throwable* cause);
	static ::javax::management::openmbean::OpenDataException* openDataException($Throwable* cause);
	static $String* propertyName(::java::lang::reflect::Method* m);
	static void putMapping(::java::lang::reflect::Type* type, ::com::sun::jmx::mbeanserver::MXBeanMapping* mapping);
	static void putPermanentMapping(::java::lang::reflect::Type* type, ::com::sun::jmx::mbeanserver::MXBeanMapping* mapping);
	static bool $assertionsDisabled;
	static ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$Mappings* mappings;
	static ::java::util::List* permanentMappings;
	static $StringArray* keyArray;
	static $StringArray* keyValueArray;
	static ::java::util::Map* inProgress;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory_h_