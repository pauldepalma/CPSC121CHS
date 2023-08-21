//exponentiating with integers and the predefined function

#include <iostream>
#include <cmath>
 using namespace std;


int main()
{
 int x, y; 

 cout << "Enter base " << endl;
 cin >> x;

 cout << "Enter exponent " << endl;
 cin >> y;
  
 cout << "result is : " << pow(static_cast<double>(x),static_cast<double>(y));
 cout << endl;
 return 0;

}

