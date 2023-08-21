//header file for extended function example

#ifndef EX120_H
#define EX120_H

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
#endif
