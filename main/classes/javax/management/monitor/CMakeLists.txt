#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.management.mon_7_SRCS)
file(GLOB classes.javax.management.mon_7_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.management.mon_7_HEADERS}) 
list(LENGTH classes.javax.management.mon_7_SRCS classes.javax.management.mon_7_SRCS_LENGTH)
if(classes.javax.management.mon_7_SRCS_LENGTH)
	add_library(classes.javax.management.mon_7 OBJECT "${classes.javax.management.mon_7_SRCS}" "${classes.javax.management.mon_7_HEADERS}")
	jcpp_enable_bigobj(classes.javax.management.mon_7)
endif()