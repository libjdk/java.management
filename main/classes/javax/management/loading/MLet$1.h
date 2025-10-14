#ifndef _javax_management_loading_MLet$1_h_
#define _javax_management_loading_MLet$1_h_
//$ class javax.management.loading.MLet$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace management {
		class MBeanServer;
	}
}
namespace javax {
	namespace management {
		namespace loading {
			class MLet;
		}
	}
}

namespace javax {
	namespace management {
		namespace loading {

class MLet$1 : public ::java::security::PrivilegedAction {
	$class(MLet$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	MLet$1();
	void init$(::javax::management::loading::MLet* this$0, ::javax::management::MBeanServer* val$server);
	virtual $Object* run() override;
	::javax::management::loading::MLet* this$0 = nullptr;
	::javax::management::MBeanServer* val$server = nullptr;
};

		} // loading
	} // management
} // javax

#endif // _javax_management_loading_MLet$1_h_