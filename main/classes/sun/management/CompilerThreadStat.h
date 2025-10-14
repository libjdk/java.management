#ifndef _sun_management_CompilerThreadStat_h_
#define _sun_management_CompilerThreadStat_h_
//$ class sun.management.CompilerThreadStat
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace sun {
	namespace management {
		class MethodInfo;
	}
}

namespace sun {
	namespace management {

class $export CompilerThreadStat : public ::java::io::Serializable {
	$class(CompilerThreadStat, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	CompilerThreadStat();
	void init$($String* name, int64_t taskCount, int64_t time, ::sun::management::MethodInfo* lastMethod);
	virtual int64_t getCompileTaskCount();
	virtual int64_t getCompileTime();
	virtual ::sun::management::MethodInfo* getLastCompiledMethodInfo();
	virtual $String* getName();
	virtual $String* toString() override;
	$String* name = nullptr;
	int64_t taskCount = 0;
	int64_t compileTime = 0;
	::sun::management::MethodInfo* lastMethod = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x6109C59A2636DD85;
};

	} // management
} // sun

#endif // _sun_management_CompilerThreadStat_h_