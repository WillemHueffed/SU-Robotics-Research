# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_interbotix_ros_xseries_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED interbotix_ros_xseries_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(interbotix_ros_xseries_FOUND FALSE)
  elseif(NOT interbotix_ros_xseries_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(interbotix_ros_xseries_FOUND FALSE)
  endif()
  return()
endif()
set(_interbotix_ros_xseries_CONFIG_INCLUDED TRUE)

# output package information
if(NOT interbotix_ros_xseries_FIND_QUIETLY)
  message(STATUS "Found interbotix_ros_xseries: 0.0.0 (${interbotix_ros_xseries_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'interbotix_ros_xseries' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${interbotix_ros_xseries_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(interbotix_ros_xseries_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${interbotix_ros_xseries_DIR}/${_extra}")
endforeach()
