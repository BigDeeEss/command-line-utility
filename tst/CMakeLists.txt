
# CMakeLists.txt for CommandLineUtility tests
# Add TstCommandLineUtility executable for testing CommandLineUtilityLib
add_executable(
    TstCommandLineUtility
)

# Add source files to TstCommandLineUtility
target_sources(
    TstCommandLineUtility
    PRIVATE
    tst_banner.cpp
    tst_main.cpp
    tst_menu.cpp
)

# Add additional source files to TstCommandLineUtility
add_subdirectory(bmi_calculator)

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