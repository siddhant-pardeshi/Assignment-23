//Write a C++ program to calculate the volume of a cuboid

#include<iostream>
using namespace std;

class Volume
{
    public:
  float l;

  float volume()
  {
   return l*l*l;
  }

};

int main()
{
    Volume a;
cout<<"Enter length of cuboid to find volume"<<endl;
cin>>a.l;

float z=a.volume();

cout<<"Volume of cuboid is "<<z;

return 0;
}
