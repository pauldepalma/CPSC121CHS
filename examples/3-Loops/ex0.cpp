//counter controlled loop, while loop 
#include <iostream>
using namespace std;

int main( )
{
    const int FINAL = 4;
    int number, sum = 0, count = 0;
    cout << "Enter " << FINAL << " integers:\n";
    
   while (count < FINAL) 
   {
        cin >> number;
	++count;
        sum = sum + number;
    }

    cout << sum << " is the sum of the first " 
         << FINAL << " numbers.\n";

    return 0;
}
