cmake_minimum_required(VERSION 3.10.0)
add_executable(isogram_test isogram.cpp isogram_test.cpp)
target_link_libraries(isogram_test PUBLIC doctest default)
add_test(NAME isogram_test COMMAND isogram_test --force-colors -d)
add_custom_target(cloud-test COMMAND isogram_test --force-colors -d)

add_executable(isogram isogram.cpp main.cpp)
target_link_libraries(isogram PUBLIC default)
