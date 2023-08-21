//for loop 
#include <iostream>
using namespace std;

int main( )
{
    const int FINAL = 4;
    int number, sum = 0;
    cout << "Enter 4 integers:\n";

    for (int count = 0; count < FINAL ; count++) 
    {
        cin >> number;
        sum = sum + number;
    }

    cout << sum << " is the sum of the first " 
         << FINAL  << " numbers.\n";

    return 0;
}
