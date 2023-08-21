#include <iostream>
using namespace std;


 bool goodOper(char);


 //pre: none
 //post: returns a valid operator. Loops if operator is invalid 
 char enterOper()
 {
  char funct;

  cout << "enter an operator" << endl;
  cin >> funct;
  while (!goodOper(funct))
  {
   cout << "enter an operator" << endl;
   cin >> funct;
  }
  return funct;
 }

