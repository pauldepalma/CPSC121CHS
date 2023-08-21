//fibonacci with for loop
#include <iostream>
 using namespace std;

int main()
{
 int previous1 = 1;
 int previous2 = 1;
 int current;
 int nthFibonacci;

 cout << "enter the position of the desired Fibonacci number" << endl;

 cin >> nthFibonacci;

 if (nthFibonacci == 1)
     current = previous1;

 else
     if (nthFibonacci == 2)
	 current = previous2;

     else
      for (int counter = 3; counter <= nthFibonacci; counter++)
      {
	current = previous2 + previous1;
	previous1 = previous2;
	previous2 = current;
      }

 cout << "The Fibonacci number at position "
      << nthFibonacci << " is " << current << endl;
 return 0;
}

