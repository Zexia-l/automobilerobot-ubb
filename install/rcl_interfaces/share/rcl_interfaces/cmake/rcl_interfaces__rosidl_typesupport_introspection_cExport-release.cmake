#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rcl_interfaces::rcl_interfaces__rosidl_typesupport_introspection_c" for configuration "Release"
set_property(TARGET rcl_interfaces::rcl_interfaces__rosidl_typesupport_introspection_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rcl_interfaces::rcl_interfaces__rosidl_typesupport_introspection_c PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so"
  IMPORTED_SONAME_RELEASE "librcl_interfaces__rosidl_typesupport_introspection_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rcl_interfaces::rcl_interfaces__rosidl_typesupport_introspection_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_rcl_interfaces::rcl_interfaces__rosidl_typesupport_introspection_c "${_IMPORT_PREFIX}/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
