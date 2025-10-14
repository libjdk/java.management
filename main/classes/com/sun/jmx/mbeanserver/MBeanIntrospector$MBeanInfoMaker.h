#ifndef _com_sun_jmx_mbeanserver_MBeanIntrospector$MBeanInfoMaker_h_
#define _com_sun_jmx_mbeanserver_MBeanIntrospector$MBeanInfoMaker_h_
//$ class com.sun.jmx.mbeanserver.MBeanIntrospector$MBeanInfoMaker
//$ extends com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor

#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor.h>

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
	namespace util {
		class List;
	}
}
namespace javax {
	namespace management {
		class MBeanInfo;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MBeanIntrospector$MBeanInfoMaker : public ::com::sun::jmx::mbeanserver::MBeanAnalyzer$MBeanVisitor {
	$class(MBeanIntrospector$MBeanInfoMaker, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::MBeanAnalyzer$MBeanVisitor)
public:
	MBeanIntrospector$MBeanInfoMaker();
	void init$(::com::sun::jmx::mbeanserver::MBeanIntrospector* this$0);
	virtual ::javax::management::MBeanInfo* makeMBeanInfo($Class* mbeanInterface, $String* description);
	virtual void visitAttribute($String* attributeName, Object$* getter, Object$* setter) override;
	virtual void visitOperation($String* operationName, Object$* operation) override;
	::com::sun::jmx::mbeanserver::MBeanIntrospector* this$0 = nullptr;
	::java::util::List* attrs = nullptr;
	::java::util::List* ops = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MBeanIntrospector$MBeanInfoMaker_h_