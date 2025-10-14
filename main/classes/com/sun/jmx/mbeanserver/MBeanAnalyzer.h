#ifndef _com_sun_jmx_mbeanserver_MBeanAnalyzer_h_
#define _com_sun_jmx_mbeanserver_MBeanAnalyzer_h_
//$ class com.sun.jmx.mbeanserver.MBeanAnalyzer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MBeanAnalyzer$MBeanVisitor;
				class MBeanIntrospector;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MBeanAnalyzer : public ::java::lang::Object {
	$class(MBeanAnalyzer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MBeanAnalyzer();
	void init$($Class* mbeanType, ::com::sun::jmx::mbeanserver::MBeanIntrospector* introspector);
	static ::com::sun::jmx::mbeanserver::MBeanAnalyzer* analyzer($Class* mbeanType, ::com::sun::jmx::mbeanserver::MBeanIntrospector* introspector);
	static ::java::util::List* eliminateCovariantMethods(::java::util::List* startMethods);
	void initMaps($Class* mbeanType, ::com::sun::jmx::mbeanserver::MBeanIntrospector* introspector);
	virtual void visit(::com::sun::jmx::mbeanserver::MBeanAnalyzer$MBeanVisitor* visitor);
	::java::util::Map* opMap = nullptr;
	::java::util::Map* attrMap = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MBeanAnalyzer_h_