#include <iostream>
using namespace std;



 //pre: first is an integer, oper is a valid operator, second is an
 //     integer valid for the given operator
 //post: returns (first oper second)
 int doWork(int first, char oper, int second)
 {
  int result;

  switch(oper)
  {
   case '+': result = first + second;
	     break;
   case '-': result = first - second;
	     break;
   case '*': result = first * second;
	     break;
   case '/': result = first / second;
	     break;
  }
  return result;

 }
