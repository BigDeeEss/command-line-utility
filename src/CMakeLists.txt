# CMakeLists.txt for CommandLineUtilityLib and CommandLineUtility
# Add CommandLineUtilityLib library for use with CommandLineUtility executable and tests
add_library(
    CommandLineUtilityLib
    STATIC
)

# Add source files to CommandLineUtilityLib
target_sources(
    CommandLineUtilityLib
    PUBLIC
    banner.cpp
    menu.cpp
)

# Add additional source files to CommandLineUtilityLib
add_subdirectory(bmi_calculator)

# Include directories for the target
# Use PUBLIC so that they are visible to linked lbraries
target_include_directories(
    CommandLineUtilityLib
    PUBLIC
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

# Add main executable
add_executable(
    CommandLineUtility
    main.cpp
)

# Link CommandLineUtilityLib library to CommandLineUtility executable
# This line also brings in the includes
target_link_libraries(
    CommandLineUtility
    PRIVATE
    CommandLineUtilityLib
)

# Install the executable to the appropriate directory
install(
    TARGETS CommandLineUtility
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)