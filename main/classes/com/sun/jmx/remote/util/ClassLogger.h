#ifndef _com_sun_jmx_remote_util_ClassLogger_h_
#define _com_sun_jmx_remote_util_ClassLogger_h_
//$ class com.sun.jmx.remote.util.ClassLogger
//$ extends java.lang.System$Logger

#include <java/lang/Array.h>
#include <java/lang/System$Logger.h>

namespace java {
	namespace lang {
		class System$Logger$Level;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class ResourceBundle;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {

class $export ClassLogger : public ::java::lang::System$Logger {
	$class(ClassLogger, $NO_CLASS_INIT, ::java::lang::System$Logger)
public:
	ClassLogger();
	void init$($String* subsystem, $String* className);
	void config($String* func, $String* msg);
	void config($String* func, $Throwable* t);
	void config($String* func, $String* msg, $Throwable* t);
	bool configOn();
	void debug($String* func, $String* msg);
	void debug($String* func, $Throwable* t);
	void debug($String* func, $String* msg, $Throwable* t);
	bool debugOn();
	void error($String* func, $String* msg);
	void error($String* func, $Throwable* t);
	void error($String* func, $String* msg, $Throwable* t);
	void fine($String* func, $String* msg);
	void fine($String* func, $Throwable* t);
	void fine($String* func, $String* msg, $Throwable* t);
	bool fineOn();
	void finer($String* func, $String* msg);
	void finer($String* func, $Throwable* t);
	void finer($String* func, $String* msg, $Throwable* t);
	bool finerOn();
	void finest($String* func, $String* msg);
	void finest($String* func, $Throwable* t);
	void finest($String* func, $String* msg, $Throwable* t);
	bool finestOn();
	virtual $String* getName() override;
	void info($String* func, $String* msg);
	void info($String* func, $Throwable* t);
	void info($String* func, $String* msg, $Throwable* t);
	bool infoOn();
	virtual bool isLoggable(::java::lang::System$Logger$Level* level) override;
	using ::java::lang::System$Logger::log;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* msg, $Throwable* thrown) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* format, $ObjectArray* params) override;
	void severe($String* func, $String* msg);
	void severe($String* func, $Throwable* t);
	void severe($String* func, $String* msg, $Throwable* t);
	void trace($String* func, $String* msg);
	void trace($String* func, $Throwable* t);
	void trace($String* func, $String* msg, $Throwable* t);
	bool traceOn();
	void warning($String* func, $String* msg);
	void warning($String* func, $Throwable* t);
	void warning($String* func, $String* msg, $Throwable* t);
	bool warningOn();
	$String* className = nullptr;
	::java::lang::System$Logger* logger = nullptr;
};

				} // util
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_util_ClassLogger_h_