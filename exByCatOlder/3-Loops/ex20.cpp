//error checking with break--produces a different result than the 
//previous examples

#include <iostream>
using namespace std;

int main( )
{
    int number, sum = 0, count = 0;
    cout << "Enter 4 negative numbers:\n";

    while (count <= 4) 
    {
        cin >> number;

        ++count; 
        if (number >= 0)
        {
            cout << "ERROR: positive number"
                 << " or zero was entered as the\n"
                 << "last number which was not added in\n"; 
            break; //leave loop
        }

        sum = sum + number;
    }

    cout << sum << " is the sum of the first " 
         << (count - 1) << " numbers.\n";

    return 0;
}
