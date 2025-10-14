#ifndef _com_sun_jmx_remote_internal_NotificationBuffer_h_
#define _com_sun_jmx_remote_internal_NotificationBuffer_h_
//$ interface com.sun.jmx.remote.internal.NotificationBuffer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {
					class NotificationBufferFilter;
				}
			}
		}
	}
}
namespace javax {
	namespace management {
		namespace remote {
			class NotificationResult;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class $export NotificationBuffer : public ::java::lang::Object {
	$interface(NotificationBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void dispose() {}
	virtual ::javax::management::remote::NotificationResult* fetchNotifications(::com::sun::jmx::remote::internal::NotificationBufferFilter* filter, int64_t startSequenceNumber, int64_t timeout, int32_t maxNotifications) {return nullptr;}
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_NotificationBuffer_h_