#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "interbotix_xs_ros_control::interbotix_xs_ros_control" for configuration ""
set_property(TARGET interbotix_xs_ros_control::interbotix_xs_ros_control APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(interbotix_xs_ros_control::interbotix_xs_ros_control PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libinterbotix_xs_ros_control.so"
  IMPORTED_SONAME_NOCONFIG "libinterbotix_xs_ros_control.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS interbotix_xs_ros_control::interbotix_xs_ros_control )
list(APPEND _IMPORT_CHECK_FILES_FOR_interbotix_xs_ros_control::interbotix_xs_ros_control "${_IMPORT_PREFIX}/lib/libinterbotix_xs_ros_control.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
