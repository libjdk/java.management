#ifndef _javax_management_remote_MBeanServerForwarder_h_
#define _javax_management_remote_MBeanServerForwarder_h_
//$ interface javax.management.remote.MBeanServerForwarder
//$ extends javax.management.MBeanServer

#include <javax/management/MBeanServer.h>

namespace javax {
	namespace management {
		namespace remote {

class $export MBeanServerForwarder : public ::javax::management::MBeanServer {
	$interface(MBeanServerForwarder, $NO_CLASS_INIT, ::javax::management::MBeanServer)
public:
	virtual ::javax::management::MBeanServer* getMBeanServer() {return nullptr;}
	virtual void setMBeanServer(::javax::management::MBeanServer* mbs) {}
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_MBeanServerForwarder_h_