//Write a C++ program to calculate the volume of a cuboid

#include<iostream>
using namespace std;

class Volume
{
    public:
  float l,b,h;

  float volume()
  {
   return l*b*h;
  }

};

int main()
{
    Volume a;
cout<<"Enter length,breadth and height of cuboid to find volume"<<endl;
cin>>a.l>>a.b>>a.h;

float z=a.volume();

cout<<"Volume of cuboid is "<<z;

return 0;
}
