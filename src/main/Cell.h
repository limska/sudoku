#ifndef _Cell_h_
#define _Cell_h_

#include <set>

class Cell
{
  public:
    explicit Cell();

    void print() const;

    void set(int value);
    int get() const;
    std::set<int> getValues() const { return _values; }
    bool isKnown() const { return _values.size() == 1; }

  private:
    std::set<int> _values;
};



#endif // _Cell_h_
