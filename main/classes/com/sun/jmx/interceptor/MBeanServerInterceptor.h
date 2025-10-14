#ifndef _com_sun_jmx_interceptor_MBeanServerInterceptor_h_
#define _com_sun_jmx_interceptor_MBeanServerInterceptor_h_
//$ interface com.sun.jmx.interceptor.MBeanServerInterceptor
//$ extends javax.management.MBeanServer

#include <javax/management/MBeanServer.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

class MBeanServerInterceptor : public ::javax::management::MBeanServer {
	$interface(MBeanServerInterceptor, $NO_CLASS_INIT, ::javax::management::MBeanServer)
public:
	virtual ::javax::management::loading::ClassLoaderRepository* getClassLoaderRepository() override {return nullptr;}
	virtual $Object* instantiate($String* className) override {return nullptr;}
	virtual $Object* instantiate($String* className, ::javax::management::ObjectName* loaderName) override {return nullptr;}
	virtual $Object* instantiate($String* className, $ObjectArray* params, $StringArray* signature) override {return nullptr;}
	virtual $Object* instantiate($String* className, ::javax::management::ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) override {return nullptr;}
};

			} // interceptor
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_interceptor_MBeanServerInterceptor_h_