#include <iostream>
 using namespace std;

int main()
{
  char answer;
  bool more = true;
  char type; 

  while(more)
  {
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

    case 'f':
    cout << "press 102 "<< endl;
    break;

    case 'p':
    cout << "press 103 "<< endl;
    break;

    case 'm':
    cout << "press 104 "<< endl;
    break;

    default:
    cout << "press 0 "<< endl;
   }

   cout << "To repeat the menu, type 'R', or type 'Q' to quit" << endl;
   cin >> answer;
   if (answer == 'Q')
     more = false;
 } 
}
