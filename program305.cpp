#include <iostream>
using namespace std;
class ArrayX
{
public:
  int *Arr;
  int isize;

  ArrayX(int iLength = 5) // paramtrized constructor with default value
  {
    cout << "inside constructor:\n";
    isize = iLength;
    Arr = new int[isize];
  }
  ~ArrayX()
  {
    cout << "inside destructor\n";
    delete[] Arr;
  }
};

int main()
{
  ArrayX aobj;
  ArrayX aobj2(10);
  return 0;
}