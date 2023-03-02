//Write a C++ program to calculate the square of a number

#include<iostream>
using namespace std;

class Square
{
    public:
  float l;

  float square()
  {
   return l*l;
  }

};

int main()
{
    Square a;
cout<<"Enter a number to find square"<<endl;
cin>>a.l;

float z=a.square();

cout<<"Square of number is "<<z;

return 0;
}
