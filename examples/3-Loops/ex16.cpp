//another do..while example
//does a continuous sampling.  Doesn't make sense to test until after the 
//first input.
#include <iostream>
 using namespace std;

int main()
{
 const int LOW = 60;
 const int HIGH = 100;

 int pressure;

 do 
   cin >> pressure;
 while ((pressure > LOW) && (pressure < HIGH));

 cout << "Help" << endl;

 return 0;
}

