#ifndef _com_sun_jmx_remote_util_EnvHelp$SinkOutputStream_h_
#define _com_sun_jmx_remote_util_EnvHelp$SinkOutputStream_h_
//$ class com.sun.jmx.remote.util.EnvHelp$SinkOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {

class EnvHelp$SinkOutputStream : public ::java::io::OutputStream {
	$class(EnvHelp$SinkOutputStream, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	EnvHelp$SinkOutputStream();
	void init$();
	using ::java::io::OutputStream::write;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	virtual void write(int32_t b) override;
};

				} // util
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_util_EnvHelp$SinkOutputStream_h_