#ifndef _com_sun_jmx_mbeanserver_ConvertingMethod_h_
#define _com_sun_jmx_mbeanserver_ConvertingMethod_h_
//$ class com.sun.jmx.mbeanserver.ConvertingMethod
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MXBeanLookup;
				class MXBeanMapping;
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
			class Type;
		}
	}
}
namespace javax {
	namespace management {
		class Descriptor;
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

class ConvertingMethod : public ::java::lang::Object {
	$class(ConvertingMethod, 0, ::java::lang::Object)
public:
	ConvertingMethod();
	void init$(::java::lang::reflect::Method* m);
	void checkCallFromOpen();
	void checkCallToOpen();
	static ::com::sun::jmx::mbeanserver::ConvertingMethod* from(::java::lang::reflect::Method* m);
	$Object* fromOpenParameter(::com::sun::jmx::mbeanserver::MXBeanLookup* lookup, Object$* param, int32_t paramNo);
	$ObjectArray* fromOpenParameters($ObjectArray* params);
	$Object* fromOpenReturnValue(::com::sun::jmx::mbeanserver::MXBeanLookup* lookup, Object$* ret);
	::javax::management::Descriptor* getDescriptor();
	$Array<::java::lang::reflect::Type>* getGenericParameterTypes();
	::java::lang::reflect::Type* getGenericReturnType();
	::java::lang::reflect::Method* getMethod();
	$String* getName();
	$Array<::javax::management::openmbean::OpenType>* getOpenParameterTypes();
	::javax::management::openmbean::OpenType* getOpenReturnType();
	$StringArray* getOpenSignature();
	$Object* invokeWithOpenReturn(::com::sun::jmx::mbeanserver::MXBeanLookup* lookup, Object$* obj, $ObjectArray* params);
	$Object* invokeWithOpenReturn(Object$* obj, $ObjectArray* params);
	$String* methodName();
	$Object* toOpenParameter(::com::sun::jmx::mbeanserver::MXBeanLookup* lookup, Object$* param, int32_t paramNo);
	$ObjectArray* toOpenParameters(::com::sun::jmx::mbeanserver::MXBeanLookup* lookup, $ObjectArray* params);
	$Object* toOpenReturnValue(::com::sun::jmx::mbeanserver::MXBeanLookup* lookup, Object$* ret);
	static $StringArray* noStrings;
	::java::lang::reflect::Method* method = nullptr;
	::com::sun::jmx::mbeanserver::MXBeanMapping* returnMapping = nullptr;
	$Array<::com::sun::jmx::mbeanserver::MXBeanMapping>* paramMappings = nullptr;
	bool paramConversionIsIdentity = false;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_ConvertingMethod_h_