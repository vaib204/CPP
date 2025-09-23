#include <iostream>
using namespace std;

#define true 1
#define false 0

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
  UINT iMask = 1;
  UINT iResult = 0;

  if (iPos <= 0 || iPos > 32)
  {
    cout << "Invalid bit position\n";
    return false;
  }

  iMask = iMask << (iPos - 1);
  iResult = iNo & iMask;

  return (iResult == iMask);
}

int main()
{
  UINT iValue = 0, iLocation = 0;
  bool bRet = false;

  cout << "Enter number : \n";
  cin >> iValue;

  cout << "Enter the position : \n";
  cin >> iLocation;

  bRet = CheckBit(iValue, iLocation);

  if (bRet == true)
  {
    return 1;
  }
  else
  {
    return 0;
  }

  return 0;
}