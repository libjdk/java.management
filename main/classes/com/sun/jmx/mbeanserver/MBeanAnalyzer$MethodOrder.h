#ifndef _com_sun_jmx_mbeanserver_MBeanAnalyzer$MethodOrder_h_
#define _com_sun_jmx_mbeanserver_MBeanAnalyzer$MethodOrder_h_
//$ class com.sun.jmx.mbeanserver.MBeanAnalyzer$MethodOrder
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MBeanAnalyzer$MethodOrder : public ::java::util::Comparator {
	$class(MBeanAnalyzer$MethodOrder, 0, ::java::util::Comparator)
public:
	MBeanAnalyzer$MethodOrder();
	void init$();
	virtual int32_t compare(::java::lang::reflect::Method* a, ::java::lang::reflect::Method* b);
	virtual int32_t compare(Object$* a, Object$* b) override;
	static ::com::sun::jmx::mbeanserver::MBeanAnalyzer$MethodOrder* instance;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MBeanAnalyzer$MethodOrder_h_