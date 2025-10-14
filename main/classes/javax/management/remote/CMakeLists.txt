#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.management.re_10_SRCS)
file(GLOB classes.javax.management.re_10_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.management.re_10_HEADERS}) 
list(LENGTH classes.javax.management.re_10_SRCS classes.javax.management.re_10_SRCS_LENGTH)
if(classes.javax.management.re_10_SRCS_LENGTH)
	add_library(classes.javax.management.re_10 OBJECT "${classes.javax.management.re_10_SRCS}" "${classes.javax.management.re_10_HEADERS}")
	jcpp_enable_bigobj(classes.javax.management.re_10)
endif()