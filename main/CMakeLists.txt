#machine generated

jcpp_add_dependencies(
	"java.base:17.35"
)

include_directories("classes")
include_directories("native")

add_subdirectory("classes")
add_subdirectory("native")

set(local_object ${local_object}
	"$<TARGET_OBJECTS:classes>"
	"$<TARGET_OBJECTS:classes.com.sun.jmx.defaults>"
	"$<TARGET_OBJECTS:classes.com.sun.jmx.intercep_0>"
	"$<TARGET_OBJECTS:classes.com.sun.jmx.mbeanser_1>"
	"$<TARGET_OBJECTS:classes.com.sun.jmx.remote.i_2>"
	"$<TARGET_OBJECTS:classes.com.sun.jmx.remote.s_3>"
	"$<TARGET_OBJECTS:classes.com.sun.jmx.remote.u_4>"
	"$<TARGET_OBJECTS:classes.java.lang.management>"
	"$<TARGET_OBJECTS:classes.javax.management>"
	"$<TARGET_OBJECTS:classes.javax.management.loa_5>"
	"$<TARGET_OBJECTS:classes.javax.management.mod_6>"
	"$<TARGET_OBJECTS:classes.javax.management.mon_7>"
	"$<TARGET_OBJECTS:classes.javax.management.ope_8>"
	"$<TARGET_OBJECTS:classes.javax.management.rel_9>"
	"$<TARGET_OBJECTS:classes.javax.management.re_10>"
	"$<TARGET_OBJECTS:classes.javax.management.timer>"
	"$<TARGET_OBJECTS:classes.sun.management>"
	"$<TARGET_OBJECTS:classes.sun.management.counter>"
	"$<TARGET_OBJECTS:classes.sun.management.coun_11>"
	"$<TARGET_OBJECTS:classes.sun.management.spi>"
	"$<TARGET_OBJECTS:native>"
)

if(BUILD_STATIC_LIB)
	add_library(${JCPP_PROJECT_NAME}_static STATIC "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_static)

	install(TARGETS ${JCPP_PROJECT_NAME}_static
		LIBRARY DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		ARCHIVE DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		RUNTIME DESTINATION "${JCPP_BIN_INSTALL_PATH}"
	)
endif()

if(BUILD_SHARED_LIB)
	add_library(${JCPP_PROJECT_NAME}_shared SHARED "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)
if(JCPP_OS MATCHES "linux")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH "\\\$ORIGIN;\\\$ORIGIN/../lib")
elseif(JCPP_OS MATCHES "macosx")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH ".;../lib")
endif()

	target_link_libraries(${JCPP_PROJECT_NAME}_shared
		PUBLIC ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_EXT_LIBS}
	)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_shared)

	jcpp_enable_debug_info(${JCPP_PROJECT_NAME}_shared)

	install(TARGETS ${JCPP_PROJECT_NAME}_shared
		LIBRARY DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		ARCHIVE DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		RUNTIME DESTINATION "${JCPP_BIN_INSTALL_PATH}"
	)
endif()

install(
	DIRECTORY "include"
	DESTINATION "${JCPP_INSTALL_PATH}"
)

install(
	FILES "dependencies.txt"
	DESTINATION "${JCPP_INSTALL_PATH}"
)
