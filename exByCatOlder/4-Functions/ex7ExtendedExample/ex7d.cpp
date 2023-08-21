#include <iostream>
using namespace std;


 //pre: oper = one of the valid operators
 //post: returns an integer. Loops if oper = '/' and input = 0
 int enterNum(char oper)
 {
  int x;

  while(true)
  {
   cout << "enter another integer" << endl;
   cin >> x;
   if (!(oper == '/' && x == 0))
       return x;
   else
       cout << "can't divide by 0. try again" << endl;
  }
 }
