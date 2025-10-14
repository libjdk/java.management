#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.management.timer_SRCS)
file(GLOB classes.javax.management.timer_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.management.timer_HEADERS}) 
list(LENGTH classes.javax.management.timer_SRCS classes.javax.management.timer_SRCS_LENGTH)
if(classes.javax.management.timer_SRCS_LENGTH)
	add_library(classes.javax.management.timer OBJECT "${classes.javax.management.timer_SRCS}" "${classes.javax.management.timer_HEADERS}")
	jcpp_enable_bigobj(classes.javax.management.timer)
endif()