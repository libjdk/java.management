#include <javax/management/monitor/Monitor$DaemonThreadFactory.h>

#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/management/monitor/Monitor.h>
#include <jcpp.h>

#undef NORM_PRIORITY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $Monitor = ::javax::management::monitor::Monitor;

namespace javax {
	namespace management {
		namespace monitor {

$FieldInfo _Monitor$DaemonThreadFactory_FieldInfo_[] = {
	{"group", "Ljava/lang/ThreadGroup;", nullptr, $FINAL, $field(Monitor$DaemonThreadFactory, group)},
	{"threadNumber", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL, $field(Monitor$DaemonThreadFactory, threadNumber)},
	{"namePrefix", "Ljava/lang/String;", nullptr, $FINAL, $field(Monitor$DaemonThreadFactory, namePrefix)},
	{"nameSuffix", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Monitor$DaemonThreadFactory, nameSuffix)},
	{}
};

$MethodInfo _Monitor$DaemonThreadFactory_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Monitor$DaemonThreadFactory::*)($String*)>(&Monitor$DaemonThreadFactory::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/ThreadGroup;)V", nullptr, $PUBLIC, $method(static_cast<void(Monitor$DaemonThreadFactory::*)($String*,$ThreadGroup*)>(&Monitor$DaemonThreadFactory::init$))},
	{"getThreadGroup", "()Ljava/lang/ThreadGroup;", nullptr, $PUBLIC},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Monitor$DaemonThreadFactory_InnerClassesInfo_[] = {
	{"javax.management.monitor.Monitor$DaemonThreadFactory", "javax.management.monitor.Monitor", "DaemonThreadFactory", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Monitor$DaemonThreadFactory_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.monitor.Monitor$DaemonThreadFactory",
	"java.lang.Object",
	"java.util.concurrent.ThreadFactory",
	_Monitor$DaemonThreadFactory_FieldInfo_,
	_Monitor$DaemonThreadFactory_MethodInfo_,
	nullptr,
	nullptr,
	_Monitor$DaemonThreadFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.monitor.Monitor"
};

$Object* allocate$Monitor$DaemonThreadFactory($Class* clazz) {
	return $of($alloc(Monitor$DaemonThreadFactory));
}

$String* Monitor$DaemonThreadFactory::nameSuffix = nullptr;

void Monitor$DaemonThreadFactory::init$($String* poolName) {
	$useLocalCurrentObjectStackCache();
	$set(this, threadNumber, $new($AtomicInteger, 1));
	$var($SecurityManager, s, $System::getSecurityManager());
	$set(this, group, (s != nullptr) ? $nc(s)->getThreadGroup() : $($Thread::currentThread())->getThreadGroup());
	$set(this, namePrefix, $str({"JMX Monitor "_s, poolName, " Pool [Thread-"_s}));
}

void Monitor$DaemonThreadFactory::init$($String* poolName, $ThreadGroup* threadGroup) {
	$set(this, threadNumber, $new($AtomicInteger, 1));
	$set(this, group, threadGroup);
	$set(this, namePrefix, $str({"JMX Monitor "_s, poolName, " Pool [Thread-"_s}));
}

$ThreadGroup* Monitor$DaemonThreadFactory::getThreadGroup() {
	return this->group;
}

$Thread* Monitor$DaemonThreadFactory::newThread($Runnable* r) {
	$useLocalCurrentObjectStackCache();
	$var($Thread, t, $new($Thread, this->group, r, $$str({this->namePrefix, $$str($nc(this->threadNumber)->getAndIncrement()), Monitor$DaemonThreadFactory::nameSuffix}), 0, false));
	t->setDaemon(true);
	if (t->getPriority() != $Thread::NORM_PRIORITY) {
		t->setPriority($Thread::NORM_PRIORITY);
	}
	return t;
}

Monitor$DaemonThreadFactory::Monitor$DaemonThreadFactory() {
}

void clinit$Monitor$DaemonThreadFactory($Class* class$) {
	$assignStatic(Monitor$DaemonThreadFactory::nameSuffix, "]"_s);
}

$Class* Monitor$DaemonThreadFactory::load$($String* name, bool initialize) {
	$loadClass(Monitor$DaemonThreadFactory, name, initialize, &_Monitor$DaemonThreadFactory_ClassInfo_, clinit$Monitor$DaemonThreadFactory, allocate$Monitor$DaemonThreadFactory);
	return class$;
}

$Class* Monitor$DaemonThreadFactory::class$ = nullptr;

		} // monitor
	} // management
} // javax