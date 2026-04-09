# CMakeLists.txt for CommandLineUtility tests
# Add TstCommandLineUtility executable for testing CommandLineUtilityLib
add_executable(
    TstCommandLineUtility
    tst_banner.cpp
    tst_main.cpp
)

# Link CommandLineUtilityLib library to TstCommandLineUtility executable
# This line also brings in the includes
target_link_libraries(
    TstCommandLineUtility
    PRIVATE
    CommandLineUtilityLib
    GTest::gtest_main
)

# Install the executable to the appropriate directory
install(
    TARGETS TstCommandLineUtility
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)