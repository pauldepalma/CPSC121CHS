#include <iostream>
#include <typeinfo>
using namespace std;
//if--else.  Can you spot the error?
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
  else
   cout << "Second greater than first" << endl;



}
