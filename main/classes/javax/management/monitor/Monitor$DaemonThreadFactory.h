#ifndef _javax_management_monitor_Monitor$DaemonThreadFactory_h_
#define _javax_management_monitor_Monitor$DaemonThreadFactory_h_
//$ class javax.management.monitor.Monitor$DaemonThreadFactory
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
		class ThreadGroup;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

namespace javax {
	namespace management {
		namespace monitor {

class Monitor$DaemonThreadFactory : public ::java::util::concurrent::ThreadFactory {
	$class(Monitor$DaemonThreadFactory, 0, ::java::util::concurrent::ThreadFactory)
public:
	Monitor$DaemonThreadFactory();
	void init$($String* poolName);
	void init$($String* poolName, ::java::lang::ThreadGroup* threadGroup);
	virtual ::java::lang::ThreadGroup* getThreadGroup();
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
	::java::lang::ThreadGroup* group = nullptr;
	::java::util::concurrent::atomic::AtomicInteger* threadNumber = nullptr;
	$String* namePrefix = nullptr;
	static $String* nameSuffix;
};

		} // monitor
	} // management
} // javax

#endif // _javax_management_monitor_Monitor$DaemonThreadFactory_h_