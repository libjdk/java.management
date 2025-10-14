#ifndef _com_sun_jmx_mbeanserver_PerInterface$MethodAndSig_h_
#define _com_sun_jmx_mbeanserver_PerInterface$MethodAndSig_h_
//$ class com.sun.jmx.mbeanserver.PerInterface$MethodAndSig
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class PerInterface$MethodAndSig : public ::java::lang::Object {
	$class(PerInterface$MethodAndSig, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PerInterface$MethodAndSig();
	void init$(::com::sun::jmx::mbeanserver::PerInterface* this$0);
	::com::sun::jmx::mbeanserver::PerInterface* this$0 = nullptr;
	$Object* method = nullptr;
	$StringArray* signature = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_PerInterface$MethodAndSig_h_