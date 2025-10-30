#include <javax/management/monitor/Monitor$MonitorTask.h>

#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadGroup.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/BlockingQueue.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/LinkedBlockingQueue.h>
#include <java/util/concurrent/ScheduledExecutorService.h>
#include <java/util/concurrent/ScheduledFuture.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/management/monitor/Monitor$DaemonThreadFactory.h>
#include <javax/management/monitor/Monitor$MonitorTask$1.h>
#include <javax/management/monitor/Monitor$SchedulerTask.h>
#include <javax/management/monitor/Monitor.h>
#include <jcpp.h>

#undef MILLISECONDS
#undef SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $AbstractExecutorService = ::java::util::concurrent::AbstractExecutorService;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $Future = ::java::util::concurrent::Future;
using $LinkedBlockingQueue = ::java::util::concurrent::LinkedBlockingQueue;
using $ScheduledExecutorService = ::java::util::concurrent::ScheduledExecutorService;
using $ScheduledFuture = ::java::util::concurrent::ScheduledFuture;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $ThreadPoolExecutor = ::java::util::concurrent::ThreadPoolExecutor;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Monitor = ::javax::management::monitor::Monitor;
using $Monitor$DaemonThreadFactory = ::javax::management::monitor::Monitor$DaemonThreadFactory;
using $Monitor$MonitorTask$1 = ::javax::management::monitor::Monitor$MonitorTask$1;
using $Monitor$SchedulerTask = ::javax::management::monitor::Monitor$SchedulerTask;

namespace javax {
	namespace management {
		namespace monitor {

$FieldInfo _Monitor$MonitorTask_FieldInfo_[] = {
	{"this$0", "Ljavax/management/monitor/Monitor;", nullptr, $FINAL | $SYNTHETIC, $field(Monitor$MonitorTask, this$0)},
	{"executor", "Ljava/util/concurrent/ThreadPoolExecutor;", nullptr, $PRIVATE, $field(Monitor$MonitorTask, executor)},
	{}
};

$MethodInfo _Monitor$MonitorTask_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/monitor/Monitor;)V", nullptr, $PUBLIC, $method(static_cast<void(Monitor$MonitorTask::*)($Monitor*)>(&Monitor$MonitorTask::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"submit", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<*>;", $PUBLIC},
	{}
};

$InnerClassInfo _Monitor$MonitorTask_InnerClassesInfo_[] = {
	{"javax.management.monitor.Monitor$MonitorTask", "javax.management.monitor.Monitor", "MonitorTask", $PRIVATE},
	{"javax.management.monitor.Monitor$MonitorTask$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Monitor$MonitorTask_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.monitor.Monitor$MonitorTask",
	"java.lang.Object",
	"java.lang.Runnable",
	_Monitor$MonitorTask_FieldInfo_,
	_Monitor$MonitorTask_MethodInfo_,
	nullptr,
	nullptr,
	_Monitor$MonitorTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.monitor.Monitor"
};

$Object* allocate$Monitor$MonitorTask($Class* clazz) {
	return $of($alloc(Monitor$MonitorTask));
}

void Monitor$MonitorTask::init$($Monitor* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$var($SecurityManager, s, $System::getSecurityManager());
	$var($ThreadGroup, group, (s != nullptr) ? $nc(s)->getThreadGroup() : $($Thread::currentThread())->getThreadGroup());
	$init($Monitor);
	$synchronized($Monitor::executorsLock) {
		{
			$var($Iterator, i$, $nc($($nc($Monitor::executors)->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ThreadPoolExecutor, e, $cast($ThreadPoolExecutor, i$->next()));
				{
					$var($Monitor$DaemonThreadFactory, tf, $cast($Monitor$DaemonThreadFactory, $nc(e)->getThreadFactory()));
					$var($ThreadGroup, tg, $nc(tf)->getThreadGroup());
					if (tg == group) {
						$set(this, executor, e);
						break;
					}
				}
			}
		}
		if (this->executor == nullptr) {
			int32_t var$0 = $Monitor::maximumPoolSize;
			int32_t var$1 = $Monitor::maximumPoolSize;
			$init($TimeUnit);
			$var($TimeUnit, var$2, $TimeUnit::SECONDS);
			$var($BlockingQueue, var$3, static_cast<$BlockingQueue*>($new($LinkedBlockingQueue)));
			$set(this, executor, $new($ThreadPoolExecutor, var$0, var$1, (int64_t)60, var$2, var$3, static_cast<$ThreadFactory*>($$new($Monitor$DaemonThreadFactory, $$str({"ThreadGroup<"_s, $($nc(group)->getName()), "> Executor"_s}), group))));
			$nc(this->executor)->allowCoreThreadTimeOut(true);
			$nc($Monitor::executors)->put(this->executor, nullptr);
		}
	}
}

$Future* Monitor$MonitorTask::submit() {
	return $nc(this->executor)->submit(static_cast<$Runnable*>(this));
}

void Monitor$MonitorTask::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ScheduledFuture, sf, nullptr);
	$var($AccessControlContext, ac, nullptr);
	$synchronized(this->this$0) {
		$assign(sf, this->this$0->schedulerFuture);
		$assign(ac, this->this$0->acc);
	}
	$var($PrivilegedAction, action, $new($Monitor$MonitorTask$1, this));
	if (ac == nullptr) {
		$throwNew($SecurityException, "AccessControlContext cannot be null"_s);
	}
	$AccessController::doPrivileged(action, ac);
	$synchronized(this->this$0) {
		if (this->this$0->isActive() && this->this$0->schedulerFuture == sf) {
			$set(this->this$0, monitorFuture, nullptr);
			$init($Monitor);
			$init($TimeUnit);
			$set(this->this$0, schedulerFuture, $nc($Monitor::scheduler)->schedule(static_cast<$Runnable*>(this->this$0->schedulerTask), this->this$0->getGranularityPeriod(), $TimeUnit::MILLISECONDS));
		}
	}
}

Monitor$MonitorTask::Monitor$MonitorTask() {
}

$Class* Monitor$MonitorTask::load$($String* name, bool initialize) {
	$loadClass(Monitor$MonitorTask, name, initialize, &_Monitor$MonitorTask_ClassInfo_, allocate$Monitor$MonitorTask);
	return class$;
}

$Class* Monitor$MonitorTask::class$ = nullptr;

		} // monitor
	} // management
} // javax