

add_executable(
    CommandLineUtility
    banner.cpp
    main.cpp
    menu.cpp
)

target_include_directories(
    CommandLineUtility
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

install(
    TARGETS CommandLineUtility
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)