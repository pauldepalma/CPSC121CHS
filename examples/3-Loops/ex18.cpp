//error checking with a nested loop
#include <iostream>
using namespace std;

int main( )
{
    int number, sum = 0, count = 0;
    cout << "Enter 4 negative numbers, ONE PER LINE:\n";

    while (count < 4) 
    {
        cin >> number;

        while (number >= 0)
        {
            cout << "ERROR: positive number (or zero)!\n"
                 << "Reenter that number and continue:\n";
            cin >> number;
        }

        sum = sum + number;
        count++;
    }

    cout << sum << " is the sum of the " 
         << count << " numbers.\n";
    return 0;
}

