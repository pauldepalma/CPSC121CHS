//counter controlled  while loop 
#include <iostream>
using namespace std;

int main( )
{
    int number, sum = 0, count = 0;
    cout << "Enter 4 integers:\n";

    while (count < 4) 
    {
        cin >> number;
	++count;
        sum = sum + number;
    }

    cout << sum << " is the sum of the first " 
         << (count ) << " numbers.\n";

    return 0;
}
