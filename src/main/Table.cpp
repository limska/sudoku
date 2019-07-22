#include "Table.h"

namespace
{
  int const SIZE {9};
}


Table::
Table()
  : _table(SIZE, std::vector<Cell>(SIZE))
{}
