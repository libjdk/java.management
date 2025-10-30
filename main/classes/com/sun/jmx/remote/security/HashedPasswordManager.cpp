#include <com/sun/jmx/remote/security/HashedPasswordManager.h>

#include <com/sun/jmx/remote/security/HashedPasswordManager$UserCredentials.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/FileLock.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/SecureRandom.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/Base64$Decoder.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef UTF_8

using $HashedPasswordManager$UserCredentials = ::com::sun::jmx::remote::security::HashedPasswordManager$UserCredentials;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileLock = ::java::nio::channels::FileLock;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $SecureRandom = ::java::security::SecureRandom;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $Base64 = ::java::util::Base64;
using $Base64$Decoder = ::java::util::Base64$Decoder;
using $Base64$Encoder = ::java::util::Base64$Encoder;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class HashedPasswordManager$$Lambda$lambda$loadPasswords$0 : public $Consumer {
	$class(HashedPasswordManager$$Lambda$lambda$loadPasswords$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(HashedPasswordManager* inst, $StringBuilder* sbuf, $AtomicBoolean* hasClearPasswords) {
		$set(this, inst$, inst);
		$set(this, sbuf, sbuf);
		$set(this, hasClearPasswords, hasClearPasswords);
	}
	virtual void accept(Object$* line) override {
		$nc(inst$)->lambda$loadPasswords$0(sbuf, hasClearPasswords, $cast($String, line));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HashedPasswordManager$$Lambda$lambda$loadPasswords$0>());
	}
	HashedPasswordManager* inst$ = nullptr;
	$StringBuilder* sbuf = nullptr;
	$AtomicBoolean* hasClearPasswords = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HashedPasswordManager$$Lambda$lambda$loadPasswords$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HashedPasswordManager$$Lambda$lambda$loadPasswords$0, inst$)},
	{"sbuf", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(HashedPasswordManager$$Lambda$lambda$loadPasswords$0, sbuf)},
	{"hasClearPasswords", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PUBLIC, $field(HashedPasswordManager$$Lambda$lambda$loadPasswords$0, hasClearPasswords)},
	{}
};
$MethodInfo HashedPasswordManager$$Lambda$lambda$loadPasswords$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/jmx/remote/security/HashedPasswordManager;Ljava/lang/StringBuilder;Ljava/util/concurrent/atomic/AtomicBoolean;)V", nullptr, $PUBLIC, $method(static_cast<void(HashedPasswordManager$$Lambda$lambda$loadPasswords$0::*)(HashedPasswordManager*,$StringBuilder*,$AtomicBoolean*)>(&HashedPasswordManager$$Lambda$lambda$loadPasswords$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HashedPasswordManager$$Lambda$lambda$loadPasswords$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jmx.remote.security.HashedPasswordManager$$Lambda$lambda$loadPasswords$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* HashedPasswordManager$$Lambda$lambda$loadPasswords$0::load$($String* name, bool initialize) {
	$loadClass(HashedPasswordManager$$Lambda$lambda$loadPasswords$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HashedPasswordManager$$Lambda$lambda$loadPasswords$0::class$ = nullptr;

$FieldInfo _HashedPasswordManager_FieldInfo_[] = {
	{"DefaultHashAlgorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HashedPasswordManager, DefaultHashAlgorithm)},
	{"DefaultSaltLength", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HashedPasswordManager, DefaultSaltLength)},
	{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE | $FINAL, $field(HashedPasswordManager, random)},
	{"userCredentialsMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/jmx/remote/security/HashedPasswordManager$UserCredentials;>;", $PRIVATE | $FINAL, $field(HashedPasswordManager, userCredentialsMap)},
	{"passwordFile", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(HashedPasswordManager, passwordFile)},
	{"shouldHashPasswords", "Z", nullptr, $PRIVATE | $FINAL, $field(HashedPasswordManager, shouldHashPasswords)},
	{"isLogged", "Z", nullptr, $PRIVATE, $field(HashedPasswordManager, isLogged)},
	{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HashedPasswordManager, logger)},
	{}
};

$MethodInfo _HashedPasswordManager_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(HashedPasswordManager::*)($String*,bool)>(&HashedPasswordManager::init$))},
	{"authenticate", "(Ljava/lang/String;[C)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<bool(HashedPasswordManager::*)($String*,$chars*)>(&HashedPasswordManager::authenticate))},
	{"getHash", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(HashedPasswordManager::*)($String*,$String*)>(&HashedPasswordManager::getHash))},
	{"lambda$loadPasswords$0", "(Ljava/lang/StringBuilder;Ljava/util/concurrent/atomic/AtomicBoolean;Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(HashedPasswordManager::*)($StringBuilder*,$AtomicBoolean*,$String*)>(&HashedPasswordManager::lambda$loadPasswords$0))},
	{"loadPasswords", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(HashedPasswordManager::*)()>(&HashedPasswordManager::loadPasswords)), "java.io.IOException,java.lang.SecurityException"},
	{"readPasswordFile", "()[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(HashedPasswordManager::*)()>(&HashedPasswordManager::readPasswordFile)), "java.io.IOException"},
	{"writePasswordFile", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(HashedPasswordManager::*)($String*)>(&HashedPasswordManager::writePasswordFile)), "java.io.IOException"},
	{}
};

$InnerClassInfo _HashedPasswordManager_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.security.HashedPasswordManager$UserCredentials", "com.sun.jmx.remote.security.HashedPasswordManager", "UserCredentials", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _HashedPasswordManager_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jmx.remote.security.HashedPasswordManager",
	"java.lang.Object",
	nullptr,
	_HashedPasswordManager_FieldInfo_,
	_HashedPasswordManager_MethodInfo_,
	nullptr,
	nullptr,
	_HashedPasswordManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.security.HashedPasswordManager$UserCredentials"
};

$Object* allocate$HashedPasswordManager($Class* clazz) {
	return $of($alloc(HashedPasswordManager));
}

$String* HashedPasswordManager::DefaultHashAlgorithm = nullptr;
$ClassLogger* HashedPasswordManager::logger = nullptr;

void HashedPasswordManager::init$($String* filename, bool shouldHashPasswords) {
	$set(this, random, $new($SecureRandom));
	$set(this, userCredentialsMap, $new($HashMap));
	this->isLogged = false;
	$set(this, passwordFile, filename);
	this->shouldHashPasswords = shouldHashPasswords;
}

$StringArray* HashedPasswordManager::getHash($String* algorithm, $String* password) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, salt, $new($bytes, HashedPasswordManager::DefaultSaltLength));
		$nc(this->random)->nextBytes(salt);
		$var($MessageDigest, digest, $MessageDigest::getInstance(algorithm));
		$nc(digest)->reset();
		digest->update(salt);
		$init($StandardCharsets);
		$var($bytes, hash, digest->digest($($nc(password)->getBytes($StandardCharsets::UTF_8))));
		$var($String, saltStr, $nc($($Base64::getEncoder()))->encodeToString(salt));
		$var($String, hashStr, $nc($($Base64::getEncoder()))->encodeToString(hash));
		return $new($StringArray, {
			saltStr,
			hashStr
		});
	} catch ($NoSuchAlgorithmException& ex) {
		if ($nc(HashedPasswordManager::logger)->debugOn()) {
			$nc(HashedPasswordManager::logger)->debug("getHash"_s, $$str({"Invalid algorithm : "_s, algorithm}));
		}
		return $new($StringArray, {
			""_s,
			""_s
		});
	}
	$shouldNotReachHere();
}

$StringArray* HashedPasswordManager::readPasswordFile() {
	$useLocalCurrentObjectStackCache();
	$synchronized(HashedPasswordManager::class$) {
		$var($bytes, data, nullptr);
		$var($File, f, $new($File, this->passwordFile));
		{
			$var($FileInputStream, fin, $new($FileInputStream, f));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($FileLock, lock, $nc($(fin->getChannel()))->lock(0, $Long::MAX_VALUE, true));
						{
							$var($Throwable, var$1, nullptr);
							try {
								try {
									$assign(data, $new($bytes, (int32_t)f->length()));
									int32_t read = fin->read(data);
									if (read != data->length) {
										$throwNew($IOException, "Failed to read data from the password file"_s);
									}
									$nc(lock)->release();
								} catch ($Throwable& t$) {
									if (lock != nullptr) {
										try {
											lock->close();
										} catch ($Throwable& x2) {
											t$->addSuppressed(x2);
										}
									}
									$throw(t$);
								}
							} catch ($Throwable& var$2) {
								$assign(var$1, var$2);
							} /*finally*/ {
								if (lock != nullptr) {
									lock->close();
								}
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
					} catch ($Throwable& t$) {
						try {
							fin->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$0, var$3);
				} /*finally*/ {
					fin->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
		$init($StandardCharsets);
		$var($String, str, $new($String, data, $StandardCharsets::UTF_8));
		return str->split("\\r?\\n"_s);
	}
}

void HashedPasswordManager::writePasswordFile($String* input) {
	$useLocalCurrentObjectStackCache();
	$synchronized(HashedPasswordManager::class$) {
		{
			$var($FileOutputStream, fout, $new($FileOutputStream, this->passwordFile));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$init($StandardCharsets);
						$var($OutputStreamWriter, out, $new($OutputStreamWriter, static_cast<$OutputStream*>(fout), $StandardCharsets::UTF_8));
						{
							$var($Throwable, var$1, nullptr);
							try {
								try {
									$var($FileLock, lock, $nc($(fout->getChannel()))->lock());
									{
										$var($Throwable, var$2, nullptr);
										try {
											try {
												out->write(input);
												$nc(lock)->release();
											} catch ($Throwable& t$) {
												if (lock != nullptr) {
													try {
														lock->close();
													} catch ($Throwable& x2) {
														t$->addSuppressed(x2);
													}
												}
												$throw(t$);
											}
										} catch ($Throwable& var$3) {
											$assign(var$2, var$3);
										} /*finally*/ {
											if (lock != nullptr) {
												lock->close();
											}
										}
										if (var$2 != nullptr) {
											$throw(var$2);
										}
									}
								} catch ($Throwable& t$) {
									try {
										out->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable& var$4) {
								$assign(var$1, var$4);
							} /*finally*/ {
								out->close();
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
					} catch ($Throwable& t$) {
						try {
							fout->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$5) {
					$assign(var$0, var$5);
				} /*finally*/ {
					fout->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

bool HashedPasswordManager::authenticate($String* userName, $chars* inputPassword) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($nc(this->userCredentialsMap)->containsKey(userName)) {
			try {
				$var($HashedPasswordManager$UserCredentials, us, $cast($HashedPasswordManager$UserCredentials, $nc(this->userCredentialsMap)->get(userName)));
				$var($bytes, salt, $nc($($Base64::getDecoder()))->decode($nc(us)->b64Salt));
				$var($bytes, targetHash, $nc($($Base64::getDecoder()))->decode($nc(us)->b64Hash));
				$var($MessageDigest, digest, $MessageDigest::getInstance($nc(us)->hashAlgorithm));
				$nc(digest)->reset();
				digest->update(salt);
				$var($ByteBuffer, byteBuffer, $nc($($Charset::forName("UTF-8"_s)))->encode($($CharBuffer::wrap(inputPassword))));
				$var($bytes, passwordBytes, $new($bytes, $nc(byteBuffer)->limit()));
				byteBuffer->get(passwordBytes);
				$var($bytes, hash, digest->digest(passwordBytes));
				return $Arrays::equals(hash, targetHash);
			} catch ($NoSuchAlgorithmException& ex) {
				if ($nc(HashedPasswordManager::logger)->debugOn()) {
					$nc(HashedPasswordManager::logger)->debug("authenticate"_s, $$str({"Unrecognized hash algorithm : "_s, $nc(($cast($HashedPasswordManager$UserCredentials, $($nc(this->userCredentialsMap)->get(userName)))))->hashAlgorithm, " - for user : "_s, userName}));
				}
				return false;
			}
		} else {
			if ($nc(HashedPasswordManager::logger)->debugOn()) {
				$nc(HashedPasswordManager::logger)->debug("authenticate"_s, $$str({"Unknown user : "_s, userName}));
			}
			return false;
		}
	}
}

void HashedPasswordManager::loadPasswords() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkRead(this->passwordFile);
		}
		$var($AtomicBoolean, hasClearPasswords, $new($AtomicBoolean, false));
		$var($StringBuilder, sbuf, $new($StringBuilder));
		$var($String, header, "# The passwords in this file are hashed.\n# In order to change the password for a role, replace the hashed password entry\n# with a clear text password or a new hashed password. If the new password is in clear,\n# it will be replaced with its hash when a new login attempt is made.\n\n"_s);
		$nc(this->userCredentialsMap)->clear();
		$nc($($Arrays::stream($(readPasswordFile()))))->forEach(static_cast<$Consumer*>($$new(HashedPasswordManager$$Lambda$lambda$loadPasswords$0, this, sbuf, hasClearPasswords)));
		if (!this->shouldHashPasswords && hasClearPasswords->get()) {
			if ($nc(HashedPasswordManager::logger)->debugOn()) {
				$nc(HashedPasswordManager::logger)->debug("loadPasswords"_s, $$str({"Passwords in "_s, this->passwordFile, " are in clear but are requested not to be hashed !!!"_s}));
			}
		}
		if (sbuf->indexOf("# The passwords in this file are hashed"_s) != 0) {
			sbuf->insert(0, header);
		}
		if (this->shouldHashPasswords && hasClearPasswords->get()) {
			if ($$new($File, this->passwordFile)->canWrite()) {
				writePasswordFile($(sbuf->toString()));
				if ($nc(HashedPasswordManager::logger)->debugOn()) {
					$nc(HashedPasswordManager::logger)->debug("loadPasswords"_s, $$str({"Wrote hashed passwords to file : "_s, this->passwordFile}));
				}
			} else if ($nc(HashedPasswordManager::logger)->debugOn() && !this->isLogged) {
				this->isLogged = true;
				$nc(HashedPasswordManager::logger)->debug("loadPasswords"_s, $$str({"Passwords in "_s, this->passwordFile, " are in clear and password file is read-only. Passwords cannot be hashed !!!!"_s}));
			}
		}
	}
}

void HashedPasswordManager::lambda$loadPasswords$0($StringBuilder* sbuf, $AtomicBoolean* hasClearPasswords, $String* line) {
	$useLocalCurrentObjectStackCache();
	if ($($nc(line)->trim())->startsWith("#"_s)) {
		$nc(sbuf)->append(line)->append("\n"_s);
		return;
	}
	$var($StringArray, tokens, $nc(line)->split("\\s+"_s));
	switch (tokens->length) {
	case 2:
		{
			{
				$var($StringArray, b64str, getHash(HashedPasswordManager::DefaultHashAlgorithm, tokens->get(1)));
				$var($HashedPasswordManager$UserCredentials, us, $new($HashedPasswordManager$UserCredentials, tokens->get(0), HashedPasswordManager::DefaultHashAlgorithm, $nc(b64str)->get(0), b64str->get(1)));
				$nc(sbuf)->append(us->userName)->append(" "_s)->append(us->b64Salt)->append(" "_s)->append(us->b64Hash)->append(" "_s)->append(us->hashAlgorithm)->append("\n"_s);
				if ($nc(this->userCredentialsMap)->get(tokens->get(0)) != nullptr) {
					if ($nc(HashedPasswordManager::logger)->debugOn()) {
						$nc(HashedPasswordManager::logger)->debug("loadPasswords"_s, $$str({"Ignoring entry for role : "_s, tokens->get(0)}));
					}
				}
				$nc(this->userCredentialsMap)->put(tokens->get(0), us);
				$nc(hasClearPasswords)->set(true);
				if ($nc(HashedPasswordManager::logger)->debugOn()) {
					$nc(HashedPasswordManager::logger)->debug("loadPasswords"_s, "Found atleast one clear password"_s);
				}
				break;
			}
		}
	case 3:
		{}
	case 4:
		{
			{
				$var($HashedPasswordManager$UserCredentials, us, $new($HashedPasswordManager$UserCredentials, tokens->get(0), (tokens->length == 4 ? tokens->get(3) : HashedPasswordManager::DefaultHashAlgorithm), tokens->get(1), tokens->get(2)));
				$nc(sbuf)->append(line)->append("\n"_s);
				if ($nc(this->userCredentialsMap)->get(tokens->get(0)) != nullptr) {
					if ($nc(HashedPasswordManager::logger)->debugOn()) {
						$nc(HashedPasswordManager::logger)->debug("loadPasswords"_s, $$str({"Ignoring entry for role : "_s, tokens->get(0)}));
					}
				}
				$nc(this->userCredentialsMap)->put(tokens->get(0), us);
				break;
			}
		}
	default:
		{
			$nc(sbuf)->append(line)->append("\n"_s);
			break;
		}
	}
}

void clinit$HashedPasswordManager($Class* class$) {
	$assignStatic(HashedPasswordManager::DefaultHashAlgorithm, "SHA3-512"_s);
	$assignStatic(HashedPasswordManager::logger, $new($ClassLogger, "javax.management.remote.misc"_s, "HashedPasswordManager"_s));
}

HashedPasswordManager::HashedPasswordManager() {
}

$Class* HashedPasswordManager::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(HashedPasswordManager$$Lambda$lambda$loadPasswords$0::classInfo$.name)) {
			return HashedPasswordManager$$Lambda$lambda$loadPasswords$0::load$(name, initialize);
		}
	}
	$loadClass(HashedPasswordManager, name, initialize, &_HashedPasswordManager_ClassInfo_, clinit$HashedPasswordManager, allocate$HashedPasswordManager);
	return class$;
}

$Class* HashedPasswordManager::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com