//floating point
//15 digits precision
//10^-308 to 10^308 approximately
//floating point division
//formatting floating point numbers

#include <iostream>
 using namespace std;

int main()
{
  double bigNum;

  bigNum = 99999999999.0;
  bigNum = bigNum / 5.333;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(3);

  cout << bigNum << endl;
}
