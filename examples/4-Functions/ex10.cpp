//performs arithmetic using reference parameters

#include <iostream>
 using namespace std;

 bool goodOper(char);
 bool goodVal(int);
 void enterOper(char&);
 void enterNum(int&); 
 void enterNum(char,int&); 
 void doWork(int, char, int, int&);
 
 int main()
 {
  char oper;
  int first, second, result;

  enterOper(oper);
  enterNum(first);
  enterNum(oper,second);
  doWork(first,oper,second,result);
  cout << result << endl;
 }
 
 void doWork(int first, char oper, int second, int& lance)
 {
  switch(oper)
  {
   case '+': lance = first + second;
	     break;
   case '-': lance = first - second;
	     break;
   case '*': lance = first * second;
	     break;
   case '/': lance = first / second;
	     break;
  }
 }



 void enterOper(char& funct)
 {

  cout << "enter an operator" << endl;
  cin >> funct;
  while (!goodOper(funct))
  {
   cout << "enter an operator" << endl;
   cin >> funct;
  }
 }

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

 void enterNum(int& num)
 {
  cout << "enter an integer" << endl;
  cin >> num;
 }

 void enterNum(char oper, int& num)
 {
  bool bad = true; 
  while(bad)
  {
   cout << "enter another integer" << endl;
   cin >> num;
   if (!(oper == '/' && num == 0))
       bad = false;
   else
       cout << "can't divide by 0. try again" << endl;
  }
 }
