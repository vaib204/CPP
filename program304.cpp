#include<iostream>
using namespace std;
class ArrayX
{
  public:
     int *Arr;
     int isize;

     ArrayX (int iLength)
     {
      cout<<"inside constructor:\n";
      isize = iLength;     //initialize charchterstic
      Arr = new int[isize];    // allocate the resources

     }
     ~ArrayX()
     {
      cout<<"inside destructor\n";
      delete[]Arr;
     }

};

int main()
{
  ArrayX aobj(5);    //Auto storage class varible(aobj)
  return 0;
}