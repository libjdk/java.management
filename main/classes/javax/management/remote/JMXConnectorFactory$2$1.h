#ifndef _javax_management_remote_JMXConnectorFactory$2$1_h_
#define _javax_management_remote_JMXConnectorFactory$2$1_h_
//$ class javax.management.remote.JMXConnectorFactory$2$1
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

namespace javax {
	namespace management {
		namespace remote {
			class JMXConnectorFactory$2;
		}
	}
}

namespace javax {
	namespace management {
		namespace remote {

class JMXConnectorFactory$2$1 : public ::java::lang::ClassLoader {
	$class(JMXConnectorFactory$2$1, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	JMXConnectorFactory$2$1();
	void init$(::javax::management::remote::JMXConnectorFactory$2* this$0, ::java::lang::ClassLoader* arg0);
	using ::java::lang::ClassLoader::loadClass;
	virtual $Class* loadClass($String* name, bool resolve) override;
	::javax::management::remote::JMXConnectorFactory$2* this$0 = nullptr;
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_JMXConnectorFactory$2$1_h_