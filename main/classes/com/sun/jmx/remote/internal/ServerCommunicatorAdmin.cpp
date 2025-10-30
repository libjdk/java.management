#include <com/sun/jmx/remote/internal/ServerCommunicatorAdmin.h>

#include <com/sun/jmx/remote/internal/ServerCommunicatorAdmin$Timeout.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ServerCommunicatorAdmin$Timeout = ::com::sun::jmx::remote::internal::ServerCommunicatorAdmin$Timeout;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ServerCommunicatorAdmin_FieldInfo_[] = {
	{"timestamp", "J", nullptr, $PRIVATE, $field(ServerCommunicatorAdmin, timestamp)},
	{"lock", "[I", nullptr, $PRIVATE | $FINAL, $field(ServerCommunicatorAdmin, lock)},
	{"currentJobs", "I", nullptr, $PRIVATE, $field(ServerCommunicatorAdmin, currentJobs)},
	{"timeout", "J", nullptr, $PRIVATE, $field(ServerCommunicatorAdmin, timeout)},
	{"terminated", "Z", nullptr, $PRIVATE, $field(ServerCommunicatorAdmin, terminated)},
	{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ServerCommunicatorAdmin, logger)},
	{"timelogger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ServerCommunicatorAdmin, timelogger)},
	{}
};

$MethodInfo _ServerCommunicatorAdmin_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(ServerCommunicatorAdmin::*)(int64_t)>(&ServerCommunicatorAdmin::init$))},
	{"doStop", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"logtime", "(Ljava/lang/String;J)V", nullptr, $PRIVATE, $method(static_cast<void(ServerCommunicatorAdmin::*)($String*,int64_t)>(&ServerCommunicatorAdmin::logtime))},
	{"reqIncoming", "()Z", nullptr, $PUBLIC},
	{"rspOutgoing", "()Z", nullptr, $PUBLIC},
	{"terminate", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServerCommunicatorAdmin_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ServerCommunicatorAdmin$Timeout", "com.sun.jmx.remote.internal.ServerCommunicatorAdmin", "Timeout", $PRIVATE},
	{}
};

$ClassInfo _ServerCommunicatorAdmin_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jmx.remote.internal.ServerCommunicatorAdmin",
	"java.lang.Object",
	nullptr,
	_ServerCommunicatorAdmin_FieldInfo_,
	_ServerCommunicatorAdmin_MethodInfo_,
	nullptr,
	nullptr,
	_ServerCommunicatorAdmin_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ServerCommunicatorAdmin$Timeout"
};

$Object* allocate$ServerCommunicatorAdmin($Class* clazz) {
	return $of($alloc(ServerCommunicatorAdmin));
}

$ClassLogger* ServerCommunicatorAdmin::logger = nullptr;
$ClassLogger* ServerCommunicatorAdmin::timelogger = nullptr;

void ServerCommunicatorAdmin::init$(int64_t timeout) {
	$useLocalCurrentObjectStackCache();
	$set(this, lock, $new($ints, 0));
	this->currentJobs = 0;
	this->terminated = false;
	if ($nc(ServerCommunicatorAdmin::logger)->traceOn()) {
		$nc(ServerCommunicatorAdmin::logger)->trace("Constructor"_s, $$str({"Creates a new ServerCommunicatorAdmin object with the timeout "_s, $$str(timeout)}));
	}
	this->timeout = timeout;
	this->timestamp = 0;
	if (timeout < $Long::MAX_VALUE) {
		$var($Runnable, timeoutTask, $new($ServerCommunicatorAdmin$Timeout, this));
		$var($Thread, t, $new($Thread, nullptr, timeoutTask, "JMX-Server-Admin-Timeout"_s, 0, false));
		t->setName($$str({"JMX server connection timeout "_s, $$str(t->getId())}));
		t->setDaemon(true);
		t->start();
	}
}

bool ServerCommunicatorAdmin::reqIncoming() {
	if ($nc(ServerCommunicatorAdmin::logger)->traceOn()) {
		$nc(ServerCommunicatorAdmin::logger)->trace("reqIncoming"_s, "Receive a new request."_s);
	}
	$synchronized(this->lock) {
		if (this->terminated) {
			$nc(ServerCommunicatorAdmin::logger)->warning("reqIncoming"_s, "The server has decided to close this client connection."_s);
		}
		++this->currentJobs;
		return this->terminated;
	}
}

bool ServerCommunicatorAdmin::rspOutgoing() {
	if ($nc(ServerCommunicatorAdmin::logger)->traceOn()) {
		$nc(ServerCommunicatorAdmin::logger)->trace("reqIncoming"_s, "Finish a request."_s);
	}
	$synchronized(this->lock) {
		if (--this->currentJobs == 0) {
			this->timestamp = $System::currentTimeMillis();
			logtime("Admin: Timestamp="_s, this->timestamp);
			$nc($of(this->lock))->notify();
		}
		return this->terminated;
	}
}

void ServerCommunicatorAdmin::terminate() {
	if ($nc(ServerCommunicatorAdmin::logger)->traceOn()) {
		$nc(ServerCommunicatorAdmin::logger)->trace("terminate"_s, "terminate the ServerCommunicatorAdmin object."_s);
	}
	$synchronized(this->lock) {
		if (this->terminated) {
			return;
		}
		this->terminated = true;
		$nc($of(this->lock))->notify();
	}
}

void ServerCommunicatorAdmin::logtime($String* desc, int64_t time) {
	$useLocalCurrentObjectStackCache();
	$nc(ServerCommunicatorAdmin::timelogger)->trace("synchro"_s, $$str({desc, $$str(time)}));
}

void clinit$ServerCommunicatorAdmin($Class* class$) {
	$assignStatic(ServerCommunicatorAdmin::logger, $new($ClassLogger, "javax.management.remote.misc"_s, "ServerCommunicatorAdmin"_s));
	$assignStatic(ServerCommunicatorAdmin::timelogger, $new($ClassLogger, "javax.management.remote.timeout"_s, "ServerCommunicatorAdmin"_s));
}

ServerCommunicatorAdmin::ServerCommunicatorAdmin() {
}

$Class* ServerCommunicatorAdmin::load$($String* name, bool initialize) {
	$loadClass(ServerCommunicatorAdmin, name, initialize, &_ServerCommunicatorAdmin_ClassInfo_, clinit$ServerCommunicatorAdmin, allocate$ServerCommunicatorAdmin);
	return class$;
}

$Class* ServerCommunicatorAdmin::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com