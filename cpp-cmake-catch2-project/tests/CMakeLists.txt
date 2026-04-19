enable_testing()

include(FetchContent)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.13.0
)
FetchContent_MakeAvailable(Catch2)

include(Catch)

add_executable(cpp-cmake-catch2-tests test1.cpp)
target_link_libraries(cpp-cmake-catch2-tests PRIVATE
    Catch2::Catch2WithMain
)

catch_discover_tests(cpp-cmake-catch2-tests)