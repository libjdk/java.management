#ifndef _javax_management_openmbean_CompositeDataInvocationHandler_h_
#define _javax_management_openmbean_CompositeDataInvocationHandler_h_
//$ class javax.management.openmbean.CompositeDataInvocationHandler
//$ extends java.lang.reflect.InvocationHandler

#include <java/lang/Array.h>
#include <java/lang/reflect/InvocationHandler.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MXBeanLookup;
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
			class CompositeData;
		}
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $import CompositeDataInvocationHandler : public ::java::lang::reflect::InvocationHandler {
	$class(CompositeDataInvocationHandler, 0, ::java::lang::reflect::InvocationHandler)
public:
	CompositeDataInvocationHandler();
	using ::java::lang::reflect::InvocationHandler::equals;
	void init$(::javax::management::openmbean::CompositeData* compositeData);
	void init$(::javax::management::openmbean::CompositeData* compositeData, ::com::sun::jmx::mbeanserver::MXBeanLookup* lookup);
	bool equals(Object$* proxy, Object$* other);
	virtual ::javax::management::openmbean::CompositeData* getCompositeData();
	virtual $Object* invoke(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* args) override;
	static bool $assertionsDisabled;
	::javax::management::openmbean::CompositeData* compositeData = nullptr;
	::com::sun::jmx::mbeanserver::MXBeanLookup* lookup = nullptr;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_CompositeDataInvocationHandler_h_