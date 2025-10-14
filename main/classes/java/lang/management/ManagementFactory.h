#ifndef _java_lang_management_ManagementFactory_h_
#define _java_lang_management_ManagementFactory_h_
//$ class java.lang.management.ManagementFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CLASS_LOADING_MXBEAN_NAME")
#undef CLASS_LOADING_MXBEAN_NAME
#pragma push_macro("COMPILATION_MXBEAN_NAME")
#undef COMPILATION_MXBEAN_NAME
#pragma push_macro("GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE")
#undef GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE
#pragma push_macro("MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE")
#undef MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE
#pragma push_macro("MEMORY_MXBEAN_NAME")
#undef MEMORY_MXBEAN_NAME
#pragma push_macro("MEMORY_POOL_MXBEAN_DOMAIN_TYPE")
#undef MEMORY_POOL_MXBEAN_DOMAIN_TYPE
#pragma push_macro("NOTIF_EMITTER")
#undef NOTIF_EMITTER
#pragma push_macro("OPERATING_SYSTEM_MXBEAN_NAME")
#undef OPERATING_SYSTEM_MXBEAN_NAME
#pragma push_macro("RUNTIME_MXBEAN_NAME")
#undef RUNTIME_MXBEAN_NAME
#pragma push_macro("THREAD_MXBEAN_NAME")
#undef THREAD_MXBEAN_NAME

namespace java {
	namespace lang {
		class ClassLoader;
		class Void;
	}
}
namespace java {
	namespace lang {
		namespace management {
			class ClassLoadingMXBean;
			class CompilationMXBean;
			class MemoryMXBean;
			class OperatingSystemMXBean;
			class PlatformManagedObject;
			class RuntimeMXBean;
			class ThreadMXBean;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
		class Map$Entry;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
		class MBeanServerConnection;
		class ObjectName;
	}
}
namespace sun {
	namespace management {
		namespace spi {
			class PlatformMBeanProvider$PlatformComponent;
		}
	}
}

namespace java {
	namespace lang {
		namespace management {

class $export ManagementFactory : public ::java::lang::Object {
	$class(ManagementFactory, 0, ::java::lang::Object)
public:
	ManagementFactory();
	void init$();
	static void addMXBean(::javax::management::MBeanServer* mbs, $String* name, Object$* pmo);
	static ::java::lang::management::ClassLoadingMXBean* getClassLoadingMXBean();
	static ::java::lang::management::CompilationMXBean* getCompilationMXBean();
	static ::java::util::List* getGarbageCollectorMXBeans();
	static ::java::lang::management::MemoryMXBean* getMemoryMXBean();
	static ::java::util::List* getMemoryManagerMXBeans();
	static ::java::util::List* getMemoryPoolMXBeans();
	static ::java::lang::management::OperatingSystemMXBean* getOperatingSystemMXBean();
	static ::javax::management::MBeanServer* getPlatformMBeanServer();
	static ::java::lang::management::PlatformManagedObject* getPlatformMXBean($Class* mxbeanInterface);
	static ::java::lang::management::PlatformManagedObject* getPlatformMXBean(::javax::management::MBeanServerConnection* connection, $Class* mxbeanInterface);
	static ::java::util::List* getPlatformMXBeans($Class* mxbeanInterface);
	static ::java::util::List* getPlatformMXBeans(::javax::management::MBeanServerConnection* connection, $Class* mxbeanInterface);
	static ::java::util::Set* getPlatformManagementInterfaces();
	static ::java::util::stream::Stream* getProxyNames(::sun::management::spi::PlatformMBeanProvider$PlatformComponent* pc, ::javax::management::MBeanServerConnection* conn, $Class* intf);
	static ::java::lang::management::RuntimeMXBean* getRuntimeMXBean();
	static ::java::lang::management::ThreadMXBean* getThreadMXBean();
	static bool isInstanceOf(::javax::management::MBeanServerConnection* connection, ::javax::management::ObjectName* objName, $String* intfName);
	static ::java::lang::Void* lambda$addMXBean$7(Object$* pmo, ::javax::management::MBeanServer* mbs, ::javax::management::ObjectName* oname);
	static ::java::util::stream::Stream* lambda$getPlatformMBeanServer$0(::sun::management::spi::PlatformMBeanProvider$PlatformComponent* pc);
	static void lambda$getPlatformMBeanServer$1(::java::util::Map$Entry* entry);
	static ::java::util::stream::Stream* lambda$getPlatformMXBeans$3($Class* mxbeanInterface, ::sun::management::spi::PlatformMBeanProvider$PlatformComponent* p);
	static ::java::util::stream::Stream* lambda$getPlatformManagementInterfaces$4(::sun::management::spi::PlatformMBeanProvider$PlatformComponent* pc);
	static bool lambda$getPlatformManagementInterfaces$5($Class* clazz);
	static $Class* lambda$getPlatformManagementInterfaces$6($Class* clazz);
	static ::java::lang::ClassLoader* lambda$newPlatformMXBeanProxy$2($Class* cls);
	static ::java::lang::Void* lambda$static$8();
	static $Object* newPlatformMXBeanProxy(::javax::management::MBeanServerConnection* connection, $String* mxbeanName, $Class* mxbeanInterface);
	static ::java::util::Collection* platformComponents();
	static bool $assertionsDisabled;
	static $String* CLASS_LOADING_MXBEAN_NAME;
	static $String* COMPILATION_MXBEAN_NAME;
	static $String* MEMORY_MXBEAN_NAME;
	static $String* OPERATING_SYSTEM_MXBEAN_NAME;
	static $String* RUNTIME_MXBEAN_NAME;
	static $String* THREAD_MXBEAN_NAME;
	static $String* GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE;
	static $String* MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE;
	static $String* MEMORY_POOL_MXBEAN_DOMAIN_TYPE;
	static ::javax::management::MBeanServer* platformMBeanServer;
	static $String* NOTIF_EMITTER;
};

		} // management
	} // lang
} // java

#pragma pop_macro("CLASS_LOADING_MXBEAN_NAME")
#pragma pop_macro("COMPILATION_MXBEAN_NAME")
#pragma pop_macro("GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE")
#pragma pop_macro("MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE")
#pragma pop_macro("MEMORY_MXBEAN_NAME")
#pragma pop_macro("MEMORY_POOL_MXBEAN_DOMAIN_TYPE")
#pragma pop_macro("NOTIF_EMITTER")
#pragma pop_macro("OPERATING_SYSTEM_MXBEAN_NAME")
#pragma pop_macro("RUNTIME_MXBEAN_NAME")
#pragma pop_macro("THREAD_MXBEAN_NAME")

#endif // _java_lang_management_ManagementFactory_h_