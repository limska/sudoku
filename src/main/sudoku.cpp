

#include <iostream>

#include "Solver.h"
#include "Table.h"

int main(int argv, char** argc)
{
  std::cout << "Sudoku Solver v1.0" << std::endl;

  Table table;

  table.print();

  try
  {
    Solver(table).run();
  }
  catch (...)
  {
    return 1;
  }

  return 0;
}
