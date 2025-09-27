#include <iostream>
using namespace std;

// CALL BY REFERNCE
void Swap(int &no1, int &no2)
{
  int temp = 0;

  temp = no1;
  no1 = no2;
  no2 = temp;
}

int main()
{
  int a = 10, b = 11;

  Swap(a, b);

  cout << "value of a:" << a << "\n";
  cout << "value of b:" << b << "\n";
  return 0;
}