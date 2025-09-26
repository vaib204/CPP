#include <iostream>
using namespace std;

bool CheckBit(unsigned int iNo)
{
  unsigned int iMask = 0x04000000; // 27
  unsigned int iResult = 0;

  iResult = iNo & iMask;

  return (iResult == iMask);
}

int main()
{
  unsigned int iValue = 0;
  bool bRet = false;

  cout << "Enter number : \n";
  cin >> iValue;

  bRet = CheckBit(iValue);

  if (bRet == true)
  {
    cout << "27th bit is ON\n";
  }
  else
  {
    cout << "27th bit is OFF\n";
  }

  return 0;
}