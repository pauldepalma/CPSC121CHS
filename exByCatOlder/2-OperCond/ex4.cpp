#include <iostream>
 using namespace std;
//Invoking De Morgan's Law  
 
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
   if (type == 'f')
      cout << "press 102 "<< endl;
   if (type == 'p')
      cout << "press 103 "<< endl;
   if (type == 'm')
      cout << "press 104" << endl;

   if ( (type != 'c') && (type != 'f') && (type != 'p') && (type != 'm') )
      cout << "press 0" << endl;
}
