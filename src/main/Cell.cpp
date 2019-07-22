#include "Cell.h"

#include <iostream>


Cell::
Cell()
  : _values({1, 2, 3, 4, 5, 6, 7, 8, 9})
{}


void
Cell::
print() const
{
  std::cout << " " << _values.size() << " ";
}
