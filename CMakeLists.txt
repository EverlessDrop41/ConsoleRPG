cmake_minimum_required(VERSION 3.3)
project(ConsoleRPG)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Classes/Creature.cpp Classes/Creature.h Classes/Player.cpp Classes/Player.h Classes/Weapon.cpp Classes/Weapon.h)
add_executable(ConsoleRPG ${SOURCE_FILES})