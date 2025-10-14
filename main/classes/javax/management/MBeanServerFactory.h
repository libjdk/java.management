#ifndef _javax_management_MBeanServerFactory_h_
#define _javax_management_MBeanServerFactory_h_
//$ class javax.management.MBeanServerFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
		class MBeanServerBuilder;
	}
}
namespace javax {
	namespace management {
		namespace loading {
			class ClassLoaderRepository;
		}
	}
}

namespace javax {
	namespace management {

class $export MBeanServerFactory : public ::java::lang::Object {
	$class(MBeanServerFactory, 0, ::java::lang::Object)
public:
	MBeanServerFactory();
	void init$();
	static void addMBeanServer(::javax::management::MBeanServer* mbs);
	static void checkMBeanServerBuilder();
	static void checkPermission($String* action);
	static ::javax::management::MBeanServer* createMBeanServer();
	static ::javax::management::MBeanServer* createMBeanServer($String* domain);
	static ::java::util::ArrayList* findMBeanServer($String* agentId);
	static ::javax::management::loading::ClassLoaderRepository* getClassLoaderRepository(::javax::management::MBeanServer* server);
	static ::javax::management::MBeanServerBuilder* getNewMBeanServerBuilder();
	static $Class* loadBuilderClass($String* builderClassName);
	static $String* mBeanServerId(::javax::management::MBeanServer* mbs);
	static ::javax::management::MBeanServerBuilder* newBuilder($Class* builderClass);
	static ::javax::management::MBeanServer* newMBeanServer();
	static ::javax::management::MBeanServer* newMBeanServer($String* domain);
	static void releaseMBeanServer(::javax::management::MBeanServer* mbeanServer);
	static void removeMBeanServer(::javax::management::MBeanServer* mbs);
	static ::javax::management::MBeanServerBuilder* builder;
	static ::java::util::ArrayList* mBeanServerList;
};

	} // management
} // javax

#endif // _javax_management_MBeanServerFactory_h_