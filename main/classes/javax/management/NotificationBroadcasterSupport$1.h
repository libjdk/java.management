#ifndef _javax_management_NotificationBroadcasterSupport$1_h_
#define _javax_management_NotificationBroadcasterSupport$1_h_
//$ class javax.management.NotificationBroadcasterSupport$1
//$ extends java.util.concurrent.Executor

#include <java/util/concurrent/Executor.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace javax {
	namespace management {

class NotificationBroadcasterSupport$1 : public ::java::util::concurrent::Executor {
	$class(NotificationBroadcasterSupport$1, $NO_CLASS_INIT, ::java::util::concurrent::Executor)
public:
	NotificationBroadcasterSupport$1();
	void init$();
	virtual void execute(::java::lang::Runnable* r) override;
};

	} // management
} // javax

#endif // _javax_management_NotificationBroadcasterSupport$1_h_