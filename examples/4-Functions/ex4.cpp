//local vs. global variables
#include <iostream>
 using namespace std;

 void chgVar(int, int);
 void chgVar();

 int gloVar = 0;

 int main()
 {
  int locVar = 0;

  chgVar(locVar, gloVar);
  chgVar();

  cout << gloVar << endl;
  cout << locVar << endl;
 }

void chgVar(int num1, int num2)
{
 num1++;
 num2++;
 }

 void chgVar()
 {
  gloVar++;
  }
