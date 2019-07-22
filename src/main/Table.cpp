#include "Table.h"

#include <iostream>

namespace
{
  int const SIZE {9};
}


Table::
Table()
  : _table(SIZE, std::vector<Cell>(SIZE))
{}


void
Table::
print() const
{
  for (auto const & row : _table)
  {
    for (auto const & cell : row)
    {
      cell.print();
    }
    std::cout << std::endl;
  }

}


void
Table::
set(int row, int colomn, int value)
{
  _table[row][colomn].set(value);
}


