//use of postfix increment operator in an expression 
//notice that the program is incorrect

#include <iostream>
using namespace std;

int main( )
{
    int number, sum = 0, count = 0;
    bool goodInput = true;

    cout << "Enter 4 negative numbers:\n";

    while (count++ <= 4) 
    {
        cin >> number;

        if (number >= 0)
        {
            cout << "ERROR: positive number"
                 << " or zero was entered as the\n"
                 << " last number which was not added in\n";
	    count--;
        }

        else
	    sum = sum + number;
    }

    cout << sum << " is the sum of the first " 
         << (count-1) << " numbers.\n";

    return 0;
}
