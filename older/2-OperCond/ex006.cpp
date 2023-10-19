#include <iostream>
 using namespace std;
//In fact, no nesting is necessary
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
     {
      cout << "press 101 "<< endl;
      return 0;
     }

  if (type == 'f')
     {
      cout << "press 102 "<< endl;
      return 0;
     }

  if (type == 'p')
     {
      cout << "press 103 "<< endl;
      return 0;
     }

  if (type == 'm')
     {
      cout << "press 104" << endl;
      return 0;
     }

  cout << "press 0" << endl;
  return 0;
}
