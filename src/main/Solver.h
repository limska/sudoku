#ifndef _Solver_h_
#define _Solver_h_

#include "Table.h"


class Solver
{
  public:
    Solver() = delete;
    explicit Solver(Table & table)
      : _table(table)
    {}

    ~Solver() = default;

    void run() const;

  private:
    Table & _table;
};


#endif // _Solver_h_
