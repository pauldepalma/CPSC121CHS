#include <iostream>
 using namespace std;

int main()
{
  char type; 

  cout << "enter office type" << endl;
  cout << "c: corporate" << endl;
  cout << "f: finance" << endl;
  cout << "p: personel" << endl;
  cout << "m: marketing" << endl;

  cin >> type;


  switch(type)
  {
   case 'c':
   cout << "press 101 "<< endl;
   break;
   
   //if either 'f' or 'p' is entered, "press 103" is output
   case 'f':

   case 'p':
   cout << "press 103 "<< endl;
   break;

   case 'm':
   cout << "press 104 "<< endl;
   break;

   default:
   cout << "press 0 "<< endl;
  }
}
