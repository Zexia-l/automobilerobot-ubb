#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rclc_parameter::rclc_parameter" for configuration "Release"
set_property(TARGET rclc_parameter::rclc_parameter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rclc_parameter::rclc_parameter PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librclc_parameter.so"
  IMPORTED_SONAME_RELEASE "librclc_parameter.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rclc_parameter::rclc_parameter )
list(APPEND _IMPORT_CHECK_FILES_FOR_rclc_parameter::rclc_parameter "${_IMPORT_PREFIX}/lib/librclc_parameter.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
