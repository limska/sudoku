#include "Cell.h"

#include <iostream>
#include <cassert>

Cell::
Cell()
  : _values({1, 2, 3, 4, 5, 6, 7, 8, 9})
{}


void
Cell::
set(int value)
{
  if (_values.size() > 1)
  {
    _values.clear();
    _values.insert(value);
  }
  else
  {
    std::cout << "ERROR: Cell has already been set!!!" << std::endl;
  }
}


int
Cell::
get() const
{
  if (_values.size() == 1)
  {
    return *(_values.begin());
  }
  else
  {
    std::cout << "Cell does not have unique value!!!" << std::endl;
    return 0;
  }
}


void
Cell::
print() const
{
  if (_values.size() == 1)
  {
    std::cout << " " << get() << " ";
  }
  else
  {
    std::cout << "(" << _values.size() << ")";
  }
}
