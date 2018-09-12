cmake_minimum_required(VERSION 3.10)
project(cpp_exercises)

set(CMAKE_CXX_STANDARD 11)

add_executable(cpp_exercises main.cpp imaginary/Imaginary.cpp imaginary/Imaginary.h wisielec/wisielec.cpp wisielec/wisielec.h exercises/changeFormat.cpp exercises/changeFormat.h kolko_i_krzyzyk/kolko_krzyzyk.cpp kolko_i_krzyzyk/kolko_krzyzyk.h doublebasepalindromes/DoubleBasePalindromes.cpp doublebasepalindromes/DoubleBasePalindromes.h biggest_result/biggest_result.cpp biggest_result/biggest_result.h exercises/multiplication_table.cpp exercises/multiplication_table.h exercises/cezar.cpp exercises/cezar.h exercises/polybus.cpp exercises/polybus.h)