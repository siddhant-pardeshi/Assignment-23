//Write a C++ program to swap values of two int variables without using third variable

#include<iostream>
using namespace std;

class Swap
{
    public:
int x,y;

 void swap()
 {
   x = x + y;
   y = x - y;
   x = x - y;
 }
};
int main()
{
  Swap a;

cout<<"Enter number x"<<endl;
cin>>a.x;
cout<<"Enter number y"<<endl;
cin>>a.y;

a.swap();
cout<<"Swap Numbers are"<<" x is "<<a.x<<" y is "<<a.y;

return 0;
}
