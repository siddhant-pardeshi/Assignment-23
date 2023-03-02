//Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>
using namespace std;

class Add
{
  public:
    int x[10];

     int add()
     {
     int i,sum=0;
      for(i=0;i<10;i++)
      {
         sum = sum + x[i];
      }
      return sum;
     }

};
int main()
{
   int i;
   Add a;
cout<<"Enter 10 number to add"<<endl;
for(i=0;i<10;i++)
{
cin>>a.x[i];
}

int z = a.add();

cout<<"Addition of array is "<<z;

return 0;

}
