#ifndef _com_sun_jmx_remote_internal_ArrayNotificationBuffer$BroadcasterQuery_h_
#define _com_sun_jmx_remote_internal_ArrayNotificationBuffer$BroadcasterQuery_h_
//$ class com.sun.jmx.remote.internal.ArrayNotificationBuffer$BroadcasterQuery
//$ extends javax.management.QueryEval
//$ implements javax.management.QueryExp

#include <javax/management/QueryEval.h>
#include <javax/management/QueryExp.h>

namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ArrayNotificationBuffer$BroadcasterQuery : public ::javax::management::QueryEval, public ::javax::management::QueryExp {
	$class(ArrayNotificationBuffer$BroadcasterQuery, $NO_CLASS_INIT, ::javax::management::QueryEval, ::javax::management::QueryExp)
public:
	ArrayNotificationBuffer$BroadcasterQuery();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool apply(::javax::management::ObjectName* name) override;
	virtual void setMBeanServer(::javax::management::MBeanServer* s) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x6665A76F34ED2970;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ArrayNotificationBuffer$BroadcasterQuery_h_