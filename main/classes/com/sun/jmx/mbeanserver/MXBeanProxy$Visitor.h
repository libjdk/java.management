#ifndef _com_sun_jmx_mbeanserver_MXBeanProxy$Visitor_h_
#define _com_sun_jmx_mbeanserver_MXBeanProxy$Visitor_h_
//$ class com.sun.jmx.mbeanserver.MXBeanProxy$Visitor
//$ extends com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor

#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class ConvertingMethod;
				class MXBeanProxy;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MXBeanProxy$Visitor : public ::com::sun::jmx::mbeanserver::MBeanAnalyzer$MBeanVisitor {
	$class(MXBeanProxy$Visitor, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::MBeanAnalyzer$MBeanVisitor)
public:
	MXBeanProxy$Visitor();
	void init$(::com::sun::jmx::mbeanserver::MXBeanProxy* this$0);
	virtual void visitAttribute($String* attributeName, ::com::sun::jmx::mbeanserver::ConvertingMethod* getter, ::com::sun::jmx::mbeanserver::ConvertingMethod* setter);
	virtual void visitAttribute($String* attributeName, Object$* getter, Object$* setter) override;
	virtual void visitOperation($String* operationName, ::com::sun::jmx::mbeanserver::ConvertingMethod* operation);
	virtual void visitOperation($String* operationName, Object$* operation) override;
	::com::sun::jmx::mbeanserver::MXBeanProxy* this$0 = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MXBeanProxy$Visitor_h_