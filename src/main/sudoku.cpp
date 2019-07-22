

#include <iostream>

#include "Solver.h"
#include "Table.h"
#include "W18July2019.h"

int main(int argv, char** argc)
{
  std::cout << "Sudoku Solver v1.0" << std::endl;

  Table table;

  W18July2019().apply(table);

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
