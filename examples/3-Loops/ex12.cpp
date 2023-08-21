//nested while loops
#include <iostream>
 using namespace std;

int main()
{
 int inner, outer, i, j, count = 0;

 cout << "Enter a value for the inner loop\n";
 cin >> inner;

 cout << "Enter a value for the outer loop\n";
 cin >> outer;

 cout << endl;

 i = 0;
 j = 0;
 while (i < outer)
 {
   cout << "current outer value: " << i << endl; 
   while (j < inner)
   {
    cout << "     current inner value: " << j << endl; 
    count++;
    j++;
   }
   j = 0;
   i++;
 }
 cout << endl; 
 cout << "You passed through the inner loop " << count << " times\n";

}
