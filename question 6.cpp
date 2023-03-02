//Write a C++ program to calculate an average of 3 numbers

#include<iostream>
using namespace std;

class Average
{
    public:
  float x,y,z;

  float average()
  {
   return (x+y+z)/3.0;
  }

};

int main()
{
    Average a;
cout<<"Enter three numbers to calculate average"<<endl;
cin>>a.x>>a.y>>a.z;

float z=a.average();

cout<<"Average of three numbers is "<<z;

return 0;
}
