//counter controlled loop, do-while loop 
#include <iostream>
using namespace std;

int main( )
{
    int number, sum = 0, count = 0;
    cout << "Enter 4 integers:\n";
    
    do
    {
        cin >> number;
	++count;
        sum = sum + number;
    } while (count < 4);

    cout << sum << " is the sum of the first " 
         << (count ) << " numbers.\n";

    return 0;
}
