#ifndef _com_sun_jmx_mbeanserver_PerInterface$InitMaps_h_
#define _com_sun_jmx_mbeanserver_PerInterface$InitMaps_h_
//$ class com.sun.jmx.mbeanserver.PerInterface$InitMaps
//$ extends com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor

#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class PerInterface;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class PerInterface$InitMaps : public ::com::sun::jmx::mbeanserver::MBeanAnalyzer$MBeanVisitor {
	$class(PerInterface$InitMaps, 0, ::com::sun::jmx::mbeanserver::MBeanAnalyzer$MBeanVisitor)
public:
	PerInterface$InitMaps();
	void init$(::com::sun::jmx::mbeanserver::PerInterface* this$0);
	virtual void visitAttribute($String* attributeName, Object$* getter, Object$* setter) override;
	virtual void visitOperation($String* operationName, Object$* operation) override;
	::com::sun::jmx::mbeanserver::PerInterface* this$0 = nullptr;
	static bool $assertionsDisabled;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_PerInterface$InitMaps_h_