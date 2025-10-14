#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.management.rel_9_SRCS)
file(GLOB classes.javax.management.rel_9_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.management.rel_9_HEADERS}) 
list(LENGTH classes.javax.management.rel_9_SRCS classes.javax.management.rel_9_SRCS_LENGTH)
if(classes.javax.management.rel_9_SRCS_LENGTH)
	add_library(classes.javax.management.rel_9 OBJECT "${classes.javax.management.rel_9_SRCS}" "${classes.javax.management.rel_9_HEADERS}")
	jcpp_enable_bigobj(classes.javax.management.rel_9)
endif()