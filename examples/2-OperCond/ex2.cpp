#include <iostream>
 using namespace std;
//Deeply nested if
int main()
{
  char type; 

  cout << "enter office type" << endl;
  cout << "c: corporate" << endl;
  cout << "f: finance" << endl;
  cout << "p: personel" << endl;
  cout << "m: marketing" << endl;

  cin >> type;


   if (type == 'c')
      cout << "press 101 "<< endl;
   else
      if (type == 'f')
         cout << "press 102 "<< endl;
      else
         if (type == 'p')
            cout << "press 103 "<< endl;
         else
	    if (type == 'm')
	       cout << "press 104" << endl;
            else
	       cout << "press 0" << endl;
}
