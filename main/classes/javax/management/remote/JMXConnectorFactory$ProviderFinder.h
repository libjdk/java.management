#ifndef _javax_management_remote_JMXConnectorFactory$ProviderFinder_h_
#define _javax_management_remote_JMXConnectorFactory$ProviderFinder_h_
//$ class javax.management.remote.JMXConnectorFactory$ProviderFinder
//$ extends java.util.function.Predicate

#include <java/util/function/Predicate.h>

namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace util {
		class ServiceLoader$Provider;
	}
}
namespace javax {
	namespace management {
		namespace remote {
			class JMXConnectorFactory$ConnectorFactory;
			class JMXServiceURL;
		}
	}
}

namespace javax {
	namespace management {
		namespace remote {

class JMXConnectorFactory$ProviderFinder : public ::java::util::function::Predicate {
	$class(JMXConnectorFactory$ProviderFinder, $NO_CLASS_INIT, ::java::util::function::Predicate)
public:
	JMXConnectorFactory$ProviderFinder();
	void init$(::javax::management::remote::JMXConnectorFactory$ConnectorFactory* factory, ::javax::management::remote::JMXServiceURL* url);
	$Object* get();
	bool test(::java::util::ServiceLoader$Provider* sp);
	virtual bool test(Object$* sp) override;
	::javax::management::remote::JMXConnectorFactory$ConnectorFactory* factory = nullptr;
	::javax::management::remote::JMXServiceURL* url = nullptr;
	::java::io::IOException* exception = nullptr;
	$Object* connection = nullptr;
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_JMXConnectorFactory$ProviderFinder_h_