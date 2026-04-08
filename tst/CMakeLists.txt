add_executable(
    TstCommandLineUtility
    tst_banner.cpp
    tst_main.cpp
)

# Include directories for the target
target_include_directories(
    TstCommandLineUtility
    PRIVATE
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
)

target_link_libraries(
    TstCommandLineUtility
    PRIVATE
    GTest::gtest_main
)

# Install the executable to the appropriate directory
install(
    TARGETS TstCommandLineUtility
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)