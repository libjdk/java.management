#machine generated

add_subdirectory("perf")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.management.counter_SRCS)
file(GLOB classes.sun.management.counter_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.management.counter_HEADERS}) 
list(LENGTH classes.sun.management.counter_SRCS classes.sun.management.counter_SRCS_LENGTH)
if(classes.sun.management.counter_SRCS_LENGTH)
	add_library(classes.sun.management.counter OBJECT "${classes.sun.management.counter_SRCS}" "${classes.sun.management.counter_HEADERS}")
	jcpp_enable_bigobj(classes.sun.management.counter)
endif()