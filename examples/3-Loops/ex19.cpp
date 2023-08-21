//error checking with if and bool
#include <iostream>
using namespace std;

int main( )
{
    int number, sum = 0, count = 0;
    bool goodInput = true; 
    cout << "Enter 4 negative numbers, ONE PER LINE:\n";

    while (count < 4) 
    {
        cin >> number;

        if (number >= 0)
           {
            cout << "ERROR: positive number (or zero)!\n"
                 << "Reenter that number and continue:\n";
            goodInput = false; 
           }
        else
	    goodInput = true;

        if (goodInput) 
	   {
            sum = sum + number;
            count++;
           }
    }

    cout << sum << " is the sum of the " 
         << count << " numbers.\n";
    return 0;
}

