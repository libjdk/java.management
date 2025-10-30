#include <javax/management/loading/MLetParser.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <javax/management/loading/MLetContent.h>
#include <jcpp.h>

#undef ENGLISH
#undef MLET_LOGGER
#undef TRACE

using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $MLetContent = ::javax::management::loading::MLetContent;

namespace javax {
	namespace management {
		namespace loading {

$FieldInfo _MLetParser_FieldInfo_[] = {
	{"c", "I", nullptr, $PRIVATE, $field(MLetParser, c)},
	{"tag", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(MLetParser, tag)},
	{}
};

$MethodInfo _MLetParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MLetParser::*)()>(&MLetParser::init$))},
	{"parse", "(Ljava/net/URL;)Ljava/util/List;", "(Ljava/net/URL;)Ljava/util/List<Ljavax/management/loading/MLetContent;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"parseURL", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljavax/management/loading/MLetContent;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"scanIdentifier", "(Ljava/io/Reader;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"scanTag", "(Ljava/io/Reader;)Ljava/util/Map;", "(Ljava/io/Reader;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"skipSpace", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _MLetParser_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.loading.MLetParser",
	"java.lang.Object",
	nullptr,
	_MLetParser_FieldInfo_,
	_MLetParser_MethodInfo_
};

$Object* allocate$MLetParser($Class* clazz) {
	return $of($alloc(MLetParser));
}

$String* MLetParser::tag = nullptr;

void MLetParser::init$() {
}

void MLetParser::skipSpace($Reader* in) {
	while ((this->c >= 0) && ((this->c == u' ') || (this->c == u'\t') || (this->c == u'\n') || (this->c == u'\r'))) {
		this->c = $nc(in)->read();
	}
}

$String* MLetParser::scanIdentifier($Reader* in) {
	$var($StringBuilder, buf, $new($StringBuilder));
	while (true) {
		if (((this->c >= u'a') && (this->c <= u'z')) || ((this->c >= u'A') && (this->c <= u'Z')) || ((this->c >= u'0') && (this->c <= u'9')) || (this->c == u'_')) {
			buf->append((char16_t)this->c);
			this->c = $nc(in)->read();
		} else {
			return buf->toString();
		}
	}
}

$Map* MLetParser::scanTag($Reader* in) {
	$useLocalCurrentObjectStackCache();
	$var($Map, atts, $new($HashMap));
	skipSpace(in);
	while (this->c >= 0 && this->c != u'>') {
		if (this->c == u'<') {
			$throwNew($IOException, "Missing \'>\' in tag"_s);
		}
		$var($String, att, scanIdentifier(in));
		$var($String, val, ""_s);
		skipSpace(in);
		if (this->c == u'=') {
			int32_t quote = -1;
			this->c = $nc(in)->read();
			skipSpace(in);
			if ((this->c == u'\'') || (this->c == u'\"')) {
				quote = this->c;
				this->c = in->read();
			}
			$var($StringBuilder, buf, $new($StringBuilder));
			while ((this->c > 0) && (((quote < 0) && (this->c != u' ') && (this->c != u'\t') && (this->c != u'\n') && (this->c != u'\r') && (this->c != u'>')) || ((quote >= 0) && (this->c != quote)))) {
				buf->append((char16_t)this->c);
				this->c = in->read();
			}
			if (this->c == quote) {
				this->c = in->read();
			}
			skipSpace(in);
			$assign(val, buf->toString());
		}
		$init($Locale);
		atts->put($($nc(att)->toLowerCase($Locale::ENGLISH)), val);
		skipSpace(in);
	}
	return atts;
}

$List* MLetParser::parse($URL* url$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($URL, url, url$renamed);
	$var($String, requiresTypeWarning, "<arg type=... value=...> tag requires type parameter."_s);
	$var($String, requiresValueWarning, "<arg type=... value=...> tag requires value parameter."_s);
	$var($String, paramOutsideWarning, "<arg> tag outside <mlet> ... </mlet>."_s);
	$var($String, requiresCodeWarning, "<mlet> tag requires either code or object parameter."_s);
	$var($String, requiresJarsWarning, "<mlet> tag requires archive parameter."_s);
	$var($URLConnection, conn, nullptr);
	$assign(conn, $nc(url)->openConnection());
	$var($Reader, in, $new($BufferedReader, $$new($InputStreamReader, $($nc(conn)->getInputStream()), "UTF-8"_s)));
	$assign(url, $nc(conn)->getURL());
	$var($List, mlets, $new($ArrayList));
	$var($Map, atts, nullptr);
	$var($List, types, $new($ArrayList));
	$var($List, values, $new($ArrayList));
	while (true) {
		this->c = in->read();
		if (this->c == -1) {
			break;
		}
		if (this->c == u'<') {
			this->c = in->read();
			if (this->c == u'/') {
				this->c = in->read();
				$var($String, nm, scanIdentifier(in));
				if (this->c != u'>') {
					$throwNew($IOException, "Missing \'>\' in tag"_s);
				}
				if ($nc(nm)->equalsIgnoreCase(MLetParser::tag)) {
					if (atts != nullptr) {
						mlets->add($$new($MLetContent, url, atts, types, values));
					}
					$assign(atts, nullptr);
					$assign(types, $new($ArrayList));
					$assign(values, $new($ArrayList));
				}
			} else {
				$var($String, nm, scanIdentifier(in));
				if ($nc(nm)->equalsIgnoreCase("arg"_s)) {
					$var($Map, t, scanTag(in));
					$var($String, att, $cast($String, $nc(t)->get("type"_s)));
					if (att == nullptr) {
						$init($JmxProperties);
						$init($System$Logger$Level);
						$nc($JmxProperties::MLET_LOGGER)->log($System$Logger$Level::TRACE, requiresTypeWarning);
						$throwNew($IOException, requiresTypeWarning);
					} else if (atts != nullptr) {
						types->add(att);
					} else {
						$init($JmxProperties);
						$init($System$Logger$Level);
						$nc($JmxProperties::MLET_LOGGER)->log($System$Logger$Level::TRACE, paramOutsideWarning);
						$throwNew($IOException, paramOutsideWarning);
					}
					$var($String, val, $cast($String, t->get("value"_s)));
					if (val == nullptr) {
						$init($JmxProperties);
						$init($System$Logger$Level);
						$nc($JmxProperties::MLET_LOGGER)->log($System$Logger$Level::TRACE, requiresValueWarning);
						$throwNew($IOException, requiresValueWarning);
					} else if (atts != nullptr) {
						values->add(val);
					} else {
						$init($JmxProperties);
						$init($System$Logger$Level);
						$nc($JmxProperties::MLET_LOGGER)->log($System$Logger$Level::TRACE, paramOutsideWarning);
						$throwNew($IOException, paramOutsideWarning);
					}
				} else if (nm->equalsIgnoreCase(MLetParser::tag)) {
					$assign(atts, scanTag(in));
					bool var$0 = $nc(atts)->get("code"_s) == nullptr;
					if (var$0 && atts->get("object"_s) == nullptr) {
						$init($JmxProperties);
						$init($System$Logger$Level);
						$nc($JmxProperties::MLET_LOGGER)->log($System$Logger$Level::TRACE, requiresCodeWarning);
						$throwNew($IOException, requiresCodeWarning);
					}
					if ($nc(atts)->get("archive"_s) == nullptr) {
						$init($JmxProperties);
						$init($System$Logger$Level);
						$nc($JmxProperties::MLET_LOGGER)->log($System$Logger$Level::TRACE, requiresJarsWarning);
						$throwNew($IOException, requiresJarsWarning);
					}
				}
			}
		}
	}
	in->close();
	return mlets;
}

$List* MLetParser::parseURL($String* urlname) {
	$useLocalCurrentObjectStackCache();
	$var($URL, url, nullptr);
	if ($nc(urlname)->indexOf((int32_t)u':') <= 1) {
		$var($String, userDir, $System::getProperty("user.dir"_s));
		$var($String, prot, nullptr);
		bool var$0 = $nc(userDir)->charAt(0) == u'/';
		$init($File);
		if (var$0 || $nc(userDir)->charAt(0) == $File::separatorChar) {
			$assign(prot, "file:"_s);
		} else {
			$assign(prot, "file:/"_s);
		}
		$assign(url, $new($URL, $$str({prot, $($nc(userDir)->replace($File::separatorChar, u'/')), "/"_s})));
		$assign(url, $new($URL, url, urlname));
	} else {
		$assign(url, $new($URL, urlname));
	}
	return parse(url);
}

void clinit$MLetParser($Class* class$) {
	$assignStatic(MLetParser::tag, "mlet"_s);
}

MLetParser::MLetParser() {
}

$Class* MLetParser::load$($String* name, bool initialize) {
	$loadClass(MLetParser, name, initialize, &_MLetParser_ClassInfo_, clinit$MLetParser, allocate$MLetParser);
	return class$;
}

$Class* MLetParser::class$ = nullptr;

		} // loading
	} // management
} // javax