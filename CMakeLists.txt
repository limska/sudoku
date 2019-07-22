cmake_minimum_required(VERSION 3.1)

project(SudokuSolver VERSION 1.0
                     DESCRIPTION "Sudoku Solver"
                     LANGUAGES CXX)

add_executable(sudoku src/main/sudoku.cpp
                      src/main/Solver.cpp
                      src/main/Cell.cpp
                      src/main/Table.cpp
                      src/main/W18July2019.cpp)
