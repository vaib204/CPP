// two time template instiatnation

#include <iostream>
using namespace std;

template <class T>
T Addition(T no1, T no2)
{
  T Ans = 0;
  Ans = no1 + no2;
  return Ans;
}

int main()
{
  int a = 10, b = 11, Ret = 0;
  Ret = Addition(a, b);
  cout << "Addition is:" << Ret << "\n";

  double x = 10.90, y = 11.70, Ret2 = 0.0;
  Ret2 = Addition(x, y);
  cout << "Addition is:" << Ret2 << "\n";

  return 0;
}