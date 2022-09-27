cmake_minimum_required(VERSION 3.22)
project(algorithm_practice)

set(CMAKE_CXX_STANDARD 11)


add_executable(person syntax_review/person.cpp)
add_executable(pointer syntax_review/pointer.cpp)
add_executable(quote syntax_review/quote.cpp)
add_executable(maze search/bfs/maze.cpp)
add_executable(eight_puzzle search/bfs/eight_puzzle.cpp)
add_executable(member_function syntax_review/cpp_class/member_function.cpp)

add_executable(acwing842 search/dfs/acwing842.cpp)
add_executable(acwing846 search/dfs/acwing846.cpp)
add_executable(acwing826 ds/linktable/acwing826.cpp)
add_executable(acwing827 ds/linktable/acwing827.cpp)