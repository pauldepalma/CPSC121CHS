#include <iostream>
#include <typeinfo>
using namespace std;
//Another way to code the same logic
int main()
{
  int value1; 
  int value2; 

  cout << "Enter an integer" << endl;
  cin >> value1;
  cout << "Enter another integer" << endl;
  cin >> value2;
  //cout << value << endl;
  //cout << typeid(value).name() << endl;
  
  if (value1 > value2)
   cout << "First greater than second" << endl;
  else if (value1 < value2)
   cout << "Second greater than first" << endl;
  else
   cout << "First = Second" << endl;
     

}
