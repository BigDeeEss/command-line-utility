

add_executable(
    exampleproject
    main.cpp
)

install(
    TARGETS exampleproject
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)