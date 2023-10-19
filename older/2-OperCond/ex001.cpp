#include <iostream>
#include <typeinfo>
using namespace std;
//simple if
int main()
{
  int value; 

  cout << "Enter an integer" << endl;

  cin >> value;
  //cout << value << endl;
  //cout << typeid(value).name() << endl;
  
  if (value > 7)
   cout << "Greater" << endl;




}
