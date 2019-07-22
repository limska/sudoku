#include "W18July2019.h"

#include "Table.h"

void
W18July2019::
apply(Table & table) const
{
  table.set(0,1,2);
  table.set(0,2,1);

  table.set(1,0,4);
  table.set(1,1,9);
  table.set(1,3,7);
  table.set(1,7,8);

  table.set(2,0,6);
  table.set(2,4,1);
  table.set(2,6,7);
  table.set(2,8,9);

  table.set(3,1,8);
  table.set(3,5,9);

  table.set(4,3,1);
  table.set(4,5,3);

  table.set(5,3,2);
  table.set(5,7,5);

  table.set(6,0,9);
  table.set(6,2,6);
  table.set(6,4,4);
  table.set(6,8,8);

  table.set(7,1,4);
  table.set(7,5,8);
  table.set(7,7,7);
  table.set(7,8,1);

  table.set(8,6,9);
  table.set(8,7,3);
}
