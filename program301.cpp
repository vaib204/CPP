#include <iostream>
using namespace std;

int Maximum(int Arr[], int isize)
{
  int imax = 0, icnt = 0;
  imax = Arr[0];
  for (icnt = 0; icnt < isize; icnt++)
  {
    if (Arr[icnt] > imax)
    {
      imax = Arr[icnt];
    }
  }
  return imax;
}

int main()
{
  int *ptr = NULL;
  int iLength = 0, icnt = 0, iret = 0;

  cout << "Enter the No oF Elements:\n";
  cin >> iLength;

  ptr = new int(iLength);

  cout << "Enter The Elements:\n";
  for (icnt = 0; icnt < iLength; icnt++)
  {
    cin >> ptr[icnt];
  }

  cout << "Elements of the array are:\n";
  for (icnt = 0; icnt < iLength; icnt++)
  {
    cout << ptr[icnt] << "\n";
  }

  iret = Maximum(ptr, iLength);
  cout << "maximum is:" << iret;

  delete[] ptr;

  return 0;
}