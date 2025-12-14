add_executable(transport_tests
    tests/transport_tests.cpp
)
target_include_directories(transport_tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../src)
