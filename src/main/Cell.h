#ifndef _Cell_h_
#define _Cell_h_

#include <set>

class Cell
{
  public:
    explicit Cell();

  private:
    std::set<int> _values;
};



#endif // _Cell_h_