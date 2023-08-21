//nested for loops

#include <iostream>
 using namespace std;

int main()
{
 int inner = 0;
 int outer = 0;
 int count = 0;


 cout << "Enter a value for the inner loop\n";
 cin >> inner;

 cout << "Enter a value for the outer loop\n";
 cin >> outer;

 cout << endl;

 for (int i = 0; i < outer; i++)
     {
      cout << "current outer value: " << i << endl; 
      for (int j = 0; j < inner; j++)
	 {
	  cout <<"     current inner value: " << j << endl; 
	  count++;
         }
      }

 cout << endl; 
 cout << "You passed through the inner loop " << count << " times\n";

}
