#include <iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int isize)
{
  T imax = 0.0f;
  int icnt = 0;
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
  float *ptr = NULL;
  int iLength = 0, icnt = 0;
  float iret = 0.0f;

  cout << "Enter the No oF Elements:\n";
  cin >> iLength;

  ptr = new float(iLength);

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