#ifndef _Table_h_
#define _Table_h_

#include <vector>

#include "Cell.h"

class Table
{
  public:
    explicit Table();
    ~Table() = default;

    void print() const;

  private:
    std::vector<std::vector<Cell>> _table;
};

#endif // _Table_h_
