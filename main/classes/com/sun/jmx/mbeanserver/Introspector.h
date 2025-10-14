#ifndef _com_sun_jmx_mbeanserver_Introspector_h_
#define _com_sun_jmx_mbeanserver_Introspector_h_
//$ class com.sun.jmx.mbeanserver.Introspector
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALLOW_NONPUBLIC_MBEAN")
#undef ALLOW_NONPUBLIC_MBEAN

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MBeanIntrospector;
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
		namespace annotation {
			class Annotation;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class AnnotatedElement;
		}
	}
}
namespace javax {
	namespace management {
		class Descriptor;
		class DynamicMBean;
		class MBeanInfo;
		class NotCompliantMBeanException;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class Introspector : public ::java::lang::Object {
	$class(Introspector, 0, ::java::lang::Object)
public:
	Introspector();
	using ::java::lang::Object::equals;
	void init$();
	static $Object* annotationToField(Object$* x);
	static void checkCompliance($Class* mbeanClass);
	static ::javax::management::Descriptor* descriptorForAnnotations($Array<::java::lang::annotation::Annotation>* annots);
	static ::javax::management::Descriptor* descriptorForElement(::java::lang::reflect::AnnotatedElement* elmt);
	static $Object* elementFromComplex(Object$* complex, $String* element);
	static bool equals(Object$* x, Object$* y);
	static $Class* findMBeanInterface($Class* aClass, $String* aName);
	static ::javax::management::MBeanInfo* getClassMBeanInfo(::com::sun::jmx::mbeanserver::MBeanIntrospector* introspector, $Class* baseClass, $Class* mbeanInterface);
	static $Class* getMBeanInterface($Class* baseClass);
	static $Class* getMXBeanInterface($Class* baseClass);
	static $Class* getStandardMBeanInterface($Class* baseClass);
	static $Class* implementsMBean($Class* c, $String* clName);
	static bool isDynamic($Class* c);
	static ::javax::management::DynamicMBean* makeDynamicMBean(Object$* mbean);
	static ::javax::management::MBeanInfo* testCompliance($Class* baseClass);
	static ::javax::management::MBeanInfo* testCompliance($Class* baseClass, $Class* mbeanInterface);
	static void testComplianceMBeanInterface($Class* interfaceClass);
	static void testComplianceMXBeanInterface($Class* interfaceClass);
	static void testCreation($Class* c);
	static ::javax::management::NotCompliantMBeanException* throwException($Class* notCompliant, $Throwable* cause);
	static bool ALLOW_NONPUBLIC_MBEAN;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#pragma pop_macro("ALLOW_NONPUBLIC_MBEAN")

#endif // _com_sun_jmx_mbeanserver_Introspector_h_