#ifndef _javax_management_remote_JMXServiceURL_h_
#define _javax_management_remote_JMXServiceURL_h_
//$ class javax.management.remote.JMXServiceURL
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

#pragma push_macro("INVALID_INSTANCE_MSG")
#undef INVALID_INSTANCE_MSG

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {
					class ClassLogger;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace util {
		class BitSet;
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $export JMXServiceURL : public ::java::io::Serializable {
	$class(JMXServiceURL, 0, ::java::io::Serializable)
public:
	JMXServiceURL();
	void init$($String* serviceURL);
	void init$($String* protocol, $String* host, int32_t port);
	void init$($String* protocol, $String* host, int32_t port, $String* urlPath);
	virtual bool equals(Object$* obj) override;
	$String* getActiveNetworkInterfaceIP();
	virtual $String* getHost();
	virtual int32_t getPort();
	virtual $String* getProtocol();
	virtual $String* getURLPath();
	virtual int32_t hashCode() override;
	static int32_t indexOf($String* s, char16_t c, int32_t fromIndex);
	static int32_t indexOfFirstNotInSet($String* s, ::java::util::BitSet* set, int32_t fromIndex);
	static bool isNumericIPv6Address($String* s);
	void readObject(::java::io::ObjectInputStream* inputStream);
	virtual $String* toString() override;
	void validate($String* proto, $String* h, int32_t p, $String* url);
	void validate();
	static void validateHost($String* h, int32_t port);
	static const int64_t serialVersionUID = (int64_t)0x716D9FA05D926D1C;
	static $String* INVALID_INSTANCE_MSG;
	static ::java::lang::Exception* randomException;
	static ::java::util::BitSet* alphaBitSet;
	static ::java::util::BitSet* numericBitSet;
	static ::java::util::BitSet* alphaNumericBitSet;
	static ::java::util::BitSet* protocolBitSet;
	static ::java::util::BitSet* hostNameBitSet;
	$String* protocol = nullptr;
	$String* host = nullptr;
	int32_t port = 0;
	$String* urlPath = nullptr;
	$String* toString$ = nullptr;
	static ::com::sun::jmx::remote::util::ClassLogger* logger;
};

		} // remote
	} // management
} // javax

#pragma pop_macro("INVALID_INSTANCE_MSG")

#endif // _javax_management_remote_JMXServiceURL_h_