# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_interbotix_perception_pipelines_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED interbotix_perception_pipelines_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(interbotix_perception_pipelines_FOUND FALSE)
  elseif(NOT interbotix_perception_pipelines_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(interbotix_perception_pipelines_FOUND FALSE)
  endif()
  return()
endif()
set(_interbotix_perception_pipelines_CONFIG_INCLUDED TRUE)

# output package information
if(NOT interbotix_perception_pipelines_FIND_QUIETLY)
  message(STATUS "Found interbotix_perception_pipelines: 0.0.0 (${interbotix_perception_pipelines_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'interbotix_perception_pipelines' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${interbotix_perception_pipelines_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(interbotix_perception_pipelines_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${interbotix_perception_pipelines_DIR}/${_extra}")
endforeach()
