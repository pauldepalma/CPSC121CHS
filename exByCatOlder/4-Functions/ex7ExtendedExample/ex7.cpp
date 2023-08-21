//extended function example with pre/post conditions
//separate compilation
//first example of function overloading



#include <iostream>
 using namespace std;

#include "ex120.h"
 
 int main()
 {
  char oper;
  int first, second;

  oper = enterOper();
  first = enterNum();
  second = enterNum(oper);
  cout << doWork(first, oper, second) << endl;
 }
