#include <iostream>
using namespace std;

int main()
{
  int *ptr = NULL;
  int iLength = 0, icnt = 0;

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
  delete[] ptr;

  return 0;
}