#ifndef _com_sun_jmx_remote_internal_ServerNotifForwarder$IdAndFilter_h_
#define _com_sun_jmx_remote_internal_ServerNotifForwarder$IdAndFilter_h_
//$ class com.sun.jmx.remote.internal.ServerNotifForwarder$IdAndFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace javax {
	namespace management {
		class NotificationFilter;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ServerNotifForwarder$IdAndFilter : public ::java::lang::Object {
	$class(ServerNotifForwarder$IdAndFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ServerNotifForwarder$IdAndFilter();
	void init$(::java::lang::Integer* id, ::javax::management::NotificationFilter* filter);
	virtual bool equals(Object$* o) override;
	virtual ::javax::management::NotificationFilter* getFilter();
	virtual ::java::lang::Integer* getId();
	virtual int32_t hashCode() override;
	::java::lang::Integer* id = nullptr;
	::javax::management::NotificationFilter* filter = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ServerNotifForwarder$IdAndFilter_h_