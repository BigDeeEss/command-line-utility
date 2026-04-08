add_library(
    CommandLineUtilityLib
    banner.cpp
    menu.cpp
)

# Include directories for the target
target_include_directories(
    CommandLineUtilityLib
    PRIVATE
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

# Add main executable
add_executable(
    CommandLineUtility
    main.cpp
)

target_link_libraries(
    CommandLineUtility
    PRIVATE
    CommandLineUtilityLib::CommandLineUtilityLib
)

# Install the executable to the appropriate directory
install(
    TARGETS CommandLineUtility
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)