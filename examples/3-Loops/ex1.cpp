//counter controlled loop, do-while loop 
#include <iostream>
using namespace std;

int main( )
{
    const int FINAL = 4;
    int number, sum = 0, count = 0;
    cout << "Enter " << FINAL << " integers:\n";
    
    do
    {
        cin >> number;
	++count;
        sum = sum + number;
    } while (count < 4);

    cout << sum << " is the sum of the first " 
         << FINAL << " numbers.\n";

    return 0;
}
