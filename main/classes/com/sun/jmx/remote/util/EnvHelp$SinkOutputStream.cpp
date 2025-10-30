#include <com/sun/jmx/remote/util/EnvHelp$SinkOutputStream.h>

#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {

$MethodInfo _EnvHelp$SinkOutputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(EnvHelp$SinkOutputStream::*)()>(&EnvHelp$SinkOutputStream::init$))},
	{"write", "([BII)V", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _EnvHelp$SinkOutputStream_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.util.EnvHelp$SinkOutputStream", "com.sun.jmx.remote.util.EnvHelp", "SinkOutputStream", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _EnvHelp$SinkOutputStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.remote.util.EnvHelp$SinkOutputStream",
	"java.io.OutputStream",
	nullptr,
	nullptr,
	_EnvHelp$SinkOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_EnvHelp$SinkOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.util.EnvHelp"
};

$Object* allocate$EnvHelp$SinkOutputStream($Class* clazz) {
	return $of($alloc(EnvHelp$SinkOutputStream));
}

void EnvHelp$SinkOutputStream::init$() {
	$OutputStream::init$();
}

void EnvHelp$SinkOutputStream::write($bytes* b, int32_t off, int32_t len) {
}

void EnvHelp$SinkOutputStream::write(int32_t b) {
}

EnvHelp$SinkOutputStream::EnvHelp$SinkOutputStream() {
}

$Class* EnvHelp$SinkOutputStream::load$($String* name, bool initialize) {
	$loadClass(EnvHelp$SinkOutputStream, name, initialize, &_EnvHelp$SinkOutputStream_ClassInfo_, allocate$EnvHelp$SinkOutputStream);
	return class$;
}

$Class* EnvHelp$SinkOutputStream::class$ = nullptr;

				} // util
			} // remote
		} // jmx
	} // sun
} // com