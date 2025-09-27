#include <iostream>
using namespace std;

template <class T>
void Swap(T *no1, T *no2)
{
  T temp = 0;

  temp = *no1;
  *no1 = *no2;
  *no2 = temp;
}

int main()
{
  int a = 10, b = 11;
  cout << "value of a before swap:" << a << "\n";
  cout << "value of b before swap:" << b << "\n";
  Swap(&a, &b);
  cout << "value of a after swap:" << a << "\n";
  cout << "value of b after swap:" << b << "\n";

  cout << "\n";

  char x = 'A', y = 'B';
  cout << "value of x before swap:" << x << "\n";
  cout << "value of y before swap:" << y << "\n";
  Swap(&x, &y);
  cout << "value of x after swap:" << x << "\n";
  cout << "value of y after swap:" << y << "\n";
  return 0;
}