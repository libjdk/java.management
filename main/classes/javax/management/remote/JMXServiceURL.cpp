#include <javax/management/remote/JMXServiceURL.h>

#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/IOException.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/CharSequence.h>
#include <java/lang/NumberFormatException.h>
#include <java/net/Inet4Address.h>
#include <java/net/Inet6Address.h>
#include <java/net/InetAddress.h>
#include <java/net/MalformedURLException.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketException.h>
#include <java/net/UnknownHostException.h>
#include <java/util/BitSet.h>
#include <java/util/Enumeration.h>
#include <java/util/Locale.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

#undef ENGLISH
#undef INVALID_INSTANCE_MSG

using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $IOException = ::java::io::IOException;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Inet4Address = ::java::net::Inet4Address;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;
using $MalformedURLException = ::java::net::MalformedURLException;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketException = ::java::net::SocketException;
using $UnknownHostException = ::java::net::UnknownHostException;
using $BitSet = ::java::util::BitSet;
using $Enumeration = ::java::util::Enumeration;
using $Locale = ::java::util::Locale;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace javax {
	namespace management {
		namespace remote {

$FieldInfo _JMXServiceURL_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMXServiceURL, serialVersionUID)},
	{"INVALID_INSTANCE_MSG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXServiceURL, INVALID_INSTANCE_MSG)},
	{"randomException", "Ljava/lang/Exception;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXServiceURL, randomException)},
	{"alphaBitSet", "Ljava/util/BitSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXServiceURL, alphaBitSet)},
	{"numericBitSet", "Ljava/util/BitSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXServiceURL, numericBitSet)},
	{"alphaNumericBitSet", "Ljava/util/BitSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXServiceURL, alphaNumericBitSet)},
	{"protocolBitSet", "Ljava/util/BitSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXServiceURL, protocolBitSet)},
	{"hostNameBitSet", "Ljava/util/BitSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXServiceURL, hostNameBitSet)},
	{"protocol", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JMXServiceURL, protocol)},
	{"host", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JMXServiceURL, host)},
	{"port", "I", nullptr, $PRIVATE, $field(JMXServiceURL, port)},
	{"urlPath", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JMXServiceURL, urlPath)},
	{"toString", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(JMXServiceURL, toString$)},
	{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXServiceURL, logger)},
	{}
};

$MethodInfo _JMXServiceURL_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JMXServiceURL::*)($String*)>(&JMXServiceURL::init$)), "java.net.MalformedURLException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(JMXServiceURL::*)($String*,$String*,int32_t)>(&JMXServiceURL::init$)), "java.net.MalformedURLException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JMXServiceURL::*)($String*,$String*,int32_t,$String*)>(&JMXServiceURL::init$)), "java.net.MalformedURLException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getActiveNetworkInterfaceIP", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(JMXServiceURL::*)()>(&JMXServiceURL::getActiveNetworkInterfaceIP)), "java.net.SocketException"},
	{"getHost", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPort", "()I", nullptr, $PUBLIC},
	{"getProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURLPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/String;CI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,char16_t,int32_t)>(&JMXServiceURL::indexOf))},
	{"indexOfFirstNotInSet", "(Ljava/lang/String;Ljava/util/BitSet;I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,$BitSet*,int32_t)>(&JMXServiceURL::indexOfFirstNotInSet))},
	{"isNumericIPv6Address", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&JMXServiceURL::isNumericIPv6Address))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JMXServiceURL::*)($ObjectInputStream*)>(&JMXServiceURL::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(JMXServiceURL::*)($String*,$String*,int32_t,$String*)>(&JMXServiceURL::validate)), "java.net.MalformedURLException"},
	{"validate", "()V", nullptr, $PRIVATE, $method(static_cast<void(JMXServiceURL::*)()>(&JMXServiceURL::validate)), "java.net.MalformedURLException"},
	{"validateHost", "(Ljava/lang/String;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,int32_t)>(&JMXServiceURL::validateHost)), "java.net.MalformedURLException"},
	{}
};

$ClassInfo _JMXServiceURL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.remote.JMXServiceURL",
	"java.lang.Object",
	"java.io.Serializable",
	_JMXServiceURL_FieldInfo_,
	_JMXServiceURL_MethodInfo_
};

$Object* allocate$JMXServiceURL($Class* clazz) {
	return $of($alloc(JMXServiceURL));
}

$String* JMXServiceURL::INVALID_INSTANCE_MSG = nullptr;
$Exception* JMXServiceURL::randomException = nullptr;
$BitSet* JMXServiceURL::alphaBitSet = nullptr;
$BitSet* JMXServiceURL::numericBitSet = nullptr;
$BitSet* JMXServiceURL::alphaNumericBitSet = nullptr;
$BitSet* JMXServiceURL::protocolBitSet = nullptr;
$BitSet* JMXServiceURL::hostNameBitSet = nullptr;
$ClassLogger* JMXServiceURL::logger = nullptr;

void JMXServiceURL::init$($String* serviceURL) {
	$useLocalCurrentObjectStackCache();
	int32_t serviceURLLength = $nc(serviceURL)->length();
	for (int32_t i = 0; i < serviceURLLength; ++i) {
		char16_t c = serviceURL->charAt(i);
		if (c < 32 || c >= 127) {
			$throwNew($MalformedURLException, $$str({"Service URL contains non-ASCII character 0x"_s, $($Integer::toHexString(c))}));
		}
	}
	$var($String, requiredPrefix, "service:jmx:"_s);
	int32_t requiredPrefixLength = requiredPrefix->length();
	if (!serviceURL->regionMatches(true, 0, requiredPrefix, 0, requiredPrefixLength)) {
		$throwNew($MalformedURLException, $$str({"Service URL must start with "_s, requiredPrefix}));
	}
	int32_t protoStart = requiredPrefixLength;
	int32_t protoEnd = indexOf(serviceURL, u':', protoStart);
	$init($Locale);
	$set(this, protocol, $(serviceURL->substring(protoStart, protoEnd))->toLowerCase($Locale::ENGLISH));
	if (!serviceURL->regionMatches(protoEnd, "://"_s, 0, 3)) {
		$throwNew($MalformedURLException, "Missing \"://\" after protocol name"_s);
	}
	int32_t hostStart = protoEnd + 3;
	int32_t hostEnd = 0;
	if (hostStart < serviceURLLength && serviceURL->charAt(hostStart) == u'[') {
		hostEnd = serviceURL->indexOf((int32_t)u']', hostStart) + 1;
		if (hostEnd == 0) {
			$throwNew($MalformedURLException, "Bad host name: [ without ]"_s);
		}
		$set(this, host, serviceURL->substring(hostStart + 1, hostEnd - 1));
		if (!isNumericIPv6Address(this->host)) {
			$throwNew($MalformedURLException, "Address inside [...] must be numeric IPv6 address"_s);
		}
	} else {
		hostEnd = indexOfFirstNotInSet(serviceURL, JMXServiceURL::hostNameBitSet, hostStart);
		$set(this, host, serviceURL->substring(hostStart, hostEnd));
	}
	int32_t portEnd = 0;
	if (hostEnd < serviceURLLength && serviceURL->charAt(hostEnd) == u':') {
		if ($nc(this->host)->length() == 0) {
			$throwNew($MalformedURLException, "Cannot give port number without host name"_s);
		}
		int32_t portStart = hostEnd + 1;
		portEnd = indexOfFirstNotInSet(serviceURL, JMXServiceURL::numericBitSet, portStart);
		$var($String, portString, serviceURL->substring(portStart, portEnd));
		try {
			this->port = $Integer::parseInt(portString);
		} catch ($NumberFormatException& e) {
			$throwNew($MalformedURLException, $$str({"Bad port number: \""_s, portString, "\": "_s, e}));
		}
	} else {
		portEnd = hostEnd;
		this->port = 0;
	}
	int32_t urlPathStart = portEnd;
	if (urlPathStart < serviceURLLength) {
		$set(this, urlPath, serviceURL->substring(urlPathStart));
	} else {
		$set(this, urlPath, ""_s);
	}
	validate();
}

void JMXServiceURL::init$($String* protocol, $String* host, int32_t port) {
	JMXServiceURL::init$(protocol, host, port, nullptr);
}

void JMXServiceURL::init$($String* protocol$renamed, $String* host$renamed, int32_t port, $String* urlPath$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, protocol, protocol$renamed);
	$var($String, host, host$renamed);
	$var($String, urlPath, urlPath$renamed);
	if (protocol == nullptr) {
		$assign(protocol, "jmxmp"_s);
	}
	if (host == nullptr) {
		$var($InetAddress, local, nullptr);
		try {
			$assign(local, $InetAddress::getLocalHost());
			$assign(host, $nc(local)->getHostName());
			try {
				validateHost(host, port);
			} catch ($MalformedURLException& e) {
				if ($nc(JMXServiceURL::logger)->fineOn()) {
					$nc(JMXServiceURL::logger)->fine("JMXServiceURL"_s, $$str({"Replacing illegal local host name "_s, host, " with numeric IP address (see RFC 1034)"_s}), e);
				}
				$assign(host, local->getHostAddress());
			}
		} catch ($UnknownHostException& e) {
			try {
				$assign(host, getActiveNetworkInterfaceIP());
				if (host == nullptr) {
					$throwNew($MalformedURLException, "Unable to resolve hostname or get valid IP address"_s);
				}
			} catch ($SocketException& ex) {
				$throwNew($MalformedURLException, "Unable to resolve hostname or get valid IP address"_s);
			}
		}
	}
	if ($nc(host)->startsWith("["_s)) {
		if (!host->endsWith("]"_s)) {
			$throwNew($MalformedURLException, "Host starts with [ but does not end with ]"_s);
		}
		$assign(host, host->substring(1, host->length() - 1));
		if (!isNumericIPv6Address(host)) {
			$throwNew($MalformedURLException, "Address inside [...] must be numeric IPv6 address"_s);
		}
		if (host->startsWith("["_s)) {
			$throwNew($MalformedURLException, "More than one [[...]]"_s);
		}
	}
	$init($Locale);
	$set(this, protocol, $nc(protocol)->toLowerCase($Locale::ENGLISH));
	$set(this, host, host);
	this->port = port;
	if (urlPath == nullptr) {
		$assign(urlPath, ""_s);
	}
	$set(this, urlPath, urlPath);
	validate();
}

$String* JMXServiceURL::getActiveNetworkInterfaceIP() {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, networkInterface, $NetworkInterface::getNetworkInterfaces());
	$var($String, ipv6AddrStr, nullptr);
	while ($nc(networkInterface)->hasMoreElements()) {
		$var($NetworkInterface, nic, $cast($NetworkInterface, networkInterface->nextElement()));
		bool var$0 = $nc(nic)->isUp();
		if (var$0 && !nic->isLoopback()) {
			$var($Enumeration, inet, nic->getInetAddresses());
			while ($nc(inet)->hasMoreElements()) {
				$var($InetAddress, addr, $cast($InetAddress, inet->nextElement()));
				if ($instanceOf($Inet4Address, addr) && !$nc(addr)->isLinkLocalAddress()) {
					return addr->getHostAddress();
				} else if ($instanceOf($Inet6Address, addr) && !addr->isLinkLocalAddress()) {
					$assign(ipv6AddrStr, addr->getHostAddress());
				}
			}
		}
	}
	return ipv6AddrStr;
}

void JMXServiceURL::readObject($ObjectInputStream* inputStream) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, gf, $nc(inputStream)->readFields());
	$var($String, h, $cast($String, $nc(gf)->get("host"_s, ($Object*)nullptr)));
	int32_t p = gf->get("port"_s, -1);
	$var($String, proto, $cast($String, gf->get("protocol"_s, ($Object*)nullptr)));
	$var($String, url, $cast($String, gf->get("urlPath"_s, ($Object*)nullptr)));
	if (proto == nullptr || url == nullptr || h == nullptr) {
		$var($StringBuilder, sb, $$new($StringBuilder, JMXServiceURL::INVALID_INSTANCE_MSG)->append(u'['));
		bool empty = true;
		if (proto == nullptr) {
			sb->append("protocol=null"_s);
			empty = false;
		}
		if (h == nullptr) {
			sb->append(empty ? ""_s : ","_s)->append("host=null"_s);
			empty = false;
		}
		if (url == nullptr) {
			sb->append(empty ? ""_s : ","_s)->append("urlPath=null"_s);
		}
		sb->append(u']');
		$throwNew($InvalidObjectException, $(sb->toString()));
	}
	bool var$0 = $nc(h)->contains("["_s);
	if (var$0 || $nc(h)->contains("]"_s)) {
		$throwNew($InvalidObjectException, $$str({"Invalid host name: "_s, h}));
	}
	try {
		validate(proto, h, p, url);
		$set(this, protocol, proto);
		$set(this, host, h);
		this->port = p;
		$set(this, urlPath, url);
	} catch ($MalformedURLException& e) {
		$throwNew($InvalidObjectException, $$str({JMXServiceURL::INVALID_INSTANCE_MSG, ": "_s, $(e->getMessage())}));
	}
}

void JMXServiceURL::validate($String* proto, $String* h, int32_t p, $String* url) {
	$useLocalCurrentObjectStackCache();
	int32_t protoEnd = indexOfFirstNotInSet(proto, JMXServiceURL::protocolBitSet, 0);
	bool var$0 = protoEnd == 0 || protoEnd < $nc(proto)->length();
	if (var$0 || !$nc(JMXServiceURL::alphaBitSet)->get($nc(proto)->charAt(0))) {
		$throwNew($MalformedURLException, $$str({"Missing or invalid protocol name: \""_s, proto, "\""_s}));
	}
	validateHost(h, p);
	if (p < 0) {
		$throwNew($MalformedURLException, $$str({"Bad port: "_s, $$str(p)}));
	}
	if ($nc(url)->length() > 0) {
		bool var$1 = !url->startsWith("/"_s);
		if (var$1 && !url->startsWith(";"_s)) {
			$throwNew($MalformedURLException, $$str({"Bad URL path: "_s, url}));
		}
	}
}

void JMXServiceURL::validate() {
	validate(this->protocol, this->host, this->port, this->urlPath);
}

void JMXServiceURL::validateHost($String* h, int32_t port) {
	$init(JMXServiceURL);
	$useLocalCurrentObjectStackCache();
	if ($nc(h)->length() == 0) {
		if (port != 0) {
			$throwNew($MalformedURLException, "Cannot give port number without host name"_s);
		}
		return;
	}
	if (isNumericIPv6Address(h)) {
		try {
			$InetAddress::getByName(h);
		} catch ($Exception& e) {
			$var($MalformedURLException, bad, $new($MalformedURLException, $$str({"Bad IPv6 address: "_s, h})));
			$EnvHelp::initCause(bad, e);
			$throw(bad);
		}
	} else {
		int32_t hostLen = $nc(h)->length();
		char16_t lastc = u'.';
		bool sawDot = false;
		char16_t componentStart = (char16_t)0;
		for (int32_t i = 0; i < hostLen; ++i) {
			char16_t c = h->charAt(i);
			bool isAlphaNumeric = $nc(JMXServiceURL::alphaNumericBitSet)->get(c);
			if (lastc == u'.') {
				componentStart = c;
			}
			if (isAlphaNumeric) {
				lastc = u'a';
			} else if (c == u'-') {
				if (lastc == u'.') {
					break;
				}
				lastc = u'-';
			} else if (c == u'.') {
				sawDot = true;
				if (lastc != u'a') {
					break;
				}
				lastc = u'.';
			} else {
				lastc = u'.';
				break;
			}
		}
		try {
			if (lastc != u'a') {
				$throw(JMXServiceURL::randomException);
			}
			if (sawDot && !$nc(JMXServiceURL::alphaBitSet)->get(componentStart)) {
				$var($StringTokenizer, tok, $new($StringTokenizer, h, "."_s, true));
				for (int32_t i = 0; i < 4; ++i) {
					$var($String, ns, tok->nextToken());
					int32_t n = $Integer::parseInt(ns);
					if (n < 0 || n > 255) {
						$throw(JMXServiceURL::randomException);
					}
					if (i < 3 && !$nc($(tok->nextToken()))->equals("."_s)) {
						$throw(JMXServiceURL::randomException);
					}
				}
				if (tok->hasMoreTokens()) {
					$throw(JMXServiceURL::randomException);
				}
			}
		} catch ($Exception& e) {
			$throwNew($MalformedURLException, $$str({"Bad host: \""_s, h, "\""_s}));
		}
	}
}

$String* JMXServiceURL::getProtocol() {
	return this->protocol;
}

$String* JMXServiceURL::getHost() {
	return this->host;
}

int32_t JMXServiceURL::getPort() {
	return this->port;
}

$String* JMXServiceURL::getURLPath() {
	return this->urlPath;
}

$String* JMXServiceURL::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->toString$ != nullptr) {
		return this->toString$;
	}
	$var($StringBuilder, buf, $new($StringBuilder, "service:jmx:"_s));
	buf->append($(getProtocol()))->append("://"_s);
	$var($String, getHost, this->getHost());
	if (isNumericIPv6Address(getHost)) {
		buf->append(u'[')->append(getHost)->append(u']');
	} else {
		buf->append(getHost);
	}
	int32_t getPort = this->getPort();
	if (getPort != 0) {
		buf->append(u':')->append(getPort);
	}
	buf->append($(getURLPath()));
	$set(this, toString$, buf->toString());
	return this->toString$;
}

bool JMXServiceURL::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(JMXServiceURL, obj))) {
		return false;
	}
	$var(JMXServiceURL, u, $cast(JMXServiceURL, obj));
	bool var$2 = $nc($($nc(u)->getProtocol()))->equalsIgnoreCase($(getProtocol()));
	bool var$1 = var$2 && $nc($(u->getHost()))->equalsIgnoreCase($(getHost()));
	if (var$1) {
		int32_t var$3 = u->getPort();
		var$1 = var$3 == getPort();
	}
	bool var$0 = var$1;
	return (var$0 && $nc($(u->getURLPath()))->equals($(getURLPath())));
}

int32_t JMXServiceURL::hashCode() {
	return $nc($(toString()))->hashCode();
}

bool JMXServiceURL::isNumericIPv6Address($String* s) {
	$init(JMXServiceURL);
	return ($nc(s)->indexOf((int32_t)u':') >= 0);
}

int32_t JMXServiceURL::indexOf($String* s, char16_t c, int32_t fromIndex) {
	$init(JMXServiceURL);
	int32_t index = $nc(s)->indexOf((int32_t)c, fromIndex);
	if (index < 0) {
		return s->length();
	} else {
		return index;
	}
}

int32_t JMXServiceURL::indexOfFirstNotInSet($String* s, $BitSet* set, int32_t fromIndex) {
	$init(JMXServiceURL);
	int32_t slen = $nc(s)->length();
	int32_t i = fromIndex;
	while (true) {
		if (i >= slen) {
			break;
		}
		char16_t c = s->charAt(i);
		if (c >= 128) {
			break;
		}
		if (!$nc(set)->get(c)) {
			break;
		}
		++i;
	}
	return i;
}

void clinit$JMXServiceURL($Class* class$) {
	$assignStatic(JMXServiceURL::INVALID_INSTANCE_MSG, "Trying to deserialize an invalid instance of JMXServiceURL"_s);
	$assignStatic(JMXServiceURL::randomException, $new($Exception));
	$assignStatic(JMXServiceURL::alphaBitSet, $new($BitSet, 128));
	$assignStatic(JMXServiceURL::numericBitSet, $new($BitSet, 128));
	$assignStatic(JMXServiceURL::alphaNumericBitSet, $new($BitSet, 128));
	$assignStatic(JMXServiceURL::protocolBitSet, $new($BitSet, 128));
	$assignStatic(JMXServiceURL::hostNameBitSet, $new($BitSet, 128));
	{
		for (char16_t c = u'0'; c <= u'9'; ++c) {
			$nc(JMXServiceURL::numericBitSet)->set(c);
		}
		for (char16_t c = u'A'; c <= u'Z'; ++c) {
			$nc(JMXServiceURL::alphaBitSet)->set(c);
		}
		for (char16_t c = u'a'; c <= u'z'; ++c) {
			$nc(JMXServiceURL::alphaBitSet)->set(c);
		}
		$nc(JMXServiceURL::alphaNumericBitSet)->or$(JMXServiceURL::alphaBitSet);
		$nc(JMXServiceURL::alphaNumericBitSet)->or$(JMXServiceURL::numericBitSet);
		$nc(JMXServiceURL::protocolBitSet)->or$(JMXServiceURL::alphaNumericBitSet);
		$nc(JMXServiceURL::protocolBitSet)->set(u'+');
		$nc(JMXServiceURL::protocolBitSet)->set(u'-');
		$nc(JMXServiceURL::hostNameBitSet)->or$(JMXServiceURL::alphaNumericBitSet);
		$nc(JMXServiceURL::hostNameBitSet)->set(u'-');
		$nc(JMXServiceURL::hostNameBitSet)->set(u'.');
	}
	$assignStatic(JMXServiceURL::logger, $new($ClassLogger, "javax.management.remote.misc"_s, "JMXServiceURL"_s));
}

JMXServiceURL::JMXServiceURL() {
}

$Class* JMXServiceURL::load$($String* name, bool initialize) {
	$loadClass(JMXServiceURL, name, initialize, &_JMXServiceURL_ClassInfo_, clinit$JMXServiceURL, allocate$JMXServiceURL);
	return class$;
}

$Class* JMXServiceURL::class$ = nullptr;

		} // remote
	} // management
} // javax