#include <iostream>
using namespace std;

int main()
{
  int iValue = 0, iret = 0;

  cout << "Enter Number : \n";
  cin >> iValue;

  cout << "number in decimal format:" << std::dec << iValue << "\n";
  cout << "number in octal format:" << std::oct << iValue << "\n";
  cout << "number in hexadecimal format:" << std::hex << iValue << "\n";

  return 0;
}