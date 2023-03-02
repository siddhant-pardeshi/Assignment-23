//Write a C++ program to calculate the sum of two numbers.

#include<iostream>
using namespace std;

class Addition
{
    public:
  int x,y;

  int add()
  {
   return x+y;
  }

};

int main()
{
    Addition a;
cout<<"Enter two numbers to add"<<endl;
cin>>a.x>>a.y;

int z=a.add();

cout<<"Addition of "<<a.x<<" and "<<a.y<<" is "<<z;

return 0;
}
