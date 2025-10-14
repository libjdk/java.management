#ifndef _com_sun_jmx_mbeanserver_Repository_h_
#define _com_sun_jmx_mbeanserver_Repository_h_
//$ class com.sun.jmx.mbeanserver.Repository
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class NamedObject;
				class Repository$ObjectNamePattern;
				class Repository$RegistrationContext;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantReadWriteLock;
			}
		}
	}
}
namespace javax {
	namespace management {
		class DynamicMBean;
		class ObjectName;
		class QueryExp;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class Repository : public ::java::lang::Object {
	$class(Repository, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Repository();
	void init$($String* domain);
	void init$($String* domain, bool fairLock);
	void addAllMatching(::java::util::Map* moiTb, ::java::util::Set* result, ::com::sun::jmx::mbeanserver::Repository$ObjectNamePattern* pattern);
	virtual void addMBean(::javax::management::DynamicMBean* object, ::javax::management::ObjectName* name, ::com::sun::jmx::mbeanserver::Repository$RegistrationContext* context);
	void addMoiToTb(::javax::management::DynamicMBean* object, ::javax::management::ObjectName* name, $String* key, ::java::util::Map* moiTb, ::com::sun::jmx::mbeanserver::Repository$RegistrationContext* context);
	void addNewDomMoi(::javax::management::DynamicMBean* object, $String* dom, ::javax::management::ObjectName* name, ::com::sun::jmx::mbeanserver::Repository$RegistrationContext* context);
	virtual bool contains(::javax::management::ObjectName* name);
	virtual ::java::lang::Integer* getCount();
	virtual $String* getDefaultDomain();
	virtual $StringArray* getDomains();
	virtual ::java::util::Set* query(::javax::management::ObjectName* pattern, ::javax::management::QueryExp* query);
	void registering(::com::sun::jmx::mbeanserver::Repository$RegistrationContext* context);
	virtual void remove(::javax::management::ObjectName* name, ::com::sun::jmx::mbeanserver::Repository$RegistrationContext* context);
	virtual ::javax::management::DynamicMBean* retrieve(::javax::management::ObjectName* name);
	::com::sun::jmx::mbeanserver::NamedObject* retrieveNamedObject(::javax::management::ObjectName* name);
	void unregistering(::com::sun::jmx::mbeanserver::Repository$RegistrationContext* context, ::javax::management::ObjectName* name);
	::java::util::Map* domainTb = nullptr;
	$volatile(int32_t) nbElements = 0;
	$String* domain = nullptr;
	::java::util::concurrent::locks::ReentrantReadWriteLock* lock = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_Repository_h_