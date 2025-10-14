#ifndef _sun_management_MethodInfo_h_
#define _sun_management_MethodInfo_h_
//$ class sun.management.MethodInfo
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace sun {
	namespace management {

class $import MethodInfo : public ::java::io::Serializable {
	$class(MethodInfo, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	MethodInfo();
	void init$($String* name, int64_t type, int32_t compileSize);
	virtual int32_t getCompileSize();
	virtual $String* getName();
	virtual int64_t getType();
	virtual $String* toString() override;
	$String* name = nullptr;
	int64_t type = 0;
	int32_t compileSize = 0;
	static const int64_t serialVersionUID = (int64_t)0x6109C59A2636DD85;
};

	} // management
} // sun

#endif // _sun_management_MethodInfo_h_