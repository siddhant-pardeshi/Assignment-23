//Write a C++ program to find the maximum of two numbers

#include<iostream>
using namespace std;

class Max
{
  public:
    int x,y;

     int maximum()
     {
     return (x>y)? x : y;
     }

};
int main()
{
   Max a;
cout<<"Enter two numbers to find max"<<endl;
cin>>a.x>>a.y;

int z = a.maximum();

cout<<"Maximum number is "<<z;

return 0;

}
