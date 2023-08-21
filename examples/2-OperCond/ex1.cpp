//constants

#include <iostream>
#include <string>
using namespace std;

int main()
{
 const  double PI = 3.14159;
 double radius;
 double area;

 cout << "Enter a circle's radius" << endl;
 cin >> radius;

 area = PI * radius * radius;

 cout.setf(ios::fixed);
 cout.setf(ios::showpoint);
 cout.precision(3);
 cout << "The Area is " << area << endl;

 return 0;
}


