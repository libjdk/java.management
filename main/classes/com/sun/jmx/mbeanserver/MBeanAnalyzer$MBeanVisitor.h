#ifndef _com_sun_jmx_mbeanserver_MBeanAnalyzer$MBeanVisitor_h_
#define _com_sun_jmx_mbeanserver_MBeanAnalyzer$MBeanVisitor_h_
//$ interface com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MBeanAnalyzer$MBeanVisitor : public ::java::lang::Object {
	$interface(MBeanAnalyzer$MBeanVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void visitAttribute($String* attributeName, Object$* getter, Object$* setter) {}
	virtual void visitOperation($String* operationName, Object$* operation) {}
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MBeanAnalyzer$MBeanVisitor_h_