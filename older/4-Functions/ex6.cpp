//extended function example with pre/post conditions
//first example of function overloading

#include <iostream>
 using namespace std;

 //pre: none
 //post: returns true if parameter is a valid operator. False otherwise.
 bool goodOper(char);


 //pre: none
 //post: returns a valid operator. Loops if operator is invalid 
 char enterOper();


 //pre: none
 //post: returns an integer entered at the keyboard
 int  enterNum(); 


 //pre: oper = one of the valid operators
 //post: returns an integer. Loops if oper = '/' and input = 0
 int  enterNum(char); 


 //pre: first is an integer, oper is a valid operator, second is an
 //     integer valid for the given operator
 //post: returns (first oper second)
 int  doWork(int, char, int); 
 
 int main()
 {
  char oper;
  int first, second;

  oper = enterOper();
  first = enterNum();
  second = enterNum(oper);
  cout << doWork(first, oper, second) << endl;
 }

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

 //pre: none
 //post: returns true if parameter is a valid operator. False otherwise.
 bool goodOper(char funct)
 {
  if (funct != 'e')
     if (funct != '+')
	if (funct != '-')
	   if (funct != '*')
	      if (funct != '/')
		  return false;
  return true;
 }

 //pre: none
 //post: returns an integer entered at the keyboard
 int enterNum()
 {
  int x;
  cout << "enter an integer" << endl;
  cin >> x;
  return x;
 }

int enterNum(char x)
{
}
