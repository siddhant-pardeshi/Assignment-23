//Write a C++ program to calculate the area of a circle

#include<iostream>
using namespace std;

class Area
{
    public:
  float r;

  float area()
  {
   return 3.14*r*r;
  }

};

int main()
{
    Area a;
cout<<"Enter radius of circle to find area"<<endl;
cin>>a.r;

float z=a.area();

cout<<"Area of circle is "<<z;

return 0;
}
