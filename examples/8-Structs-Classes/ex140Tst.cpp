#include "ex140.h"
#include <iostream>
 using namespace std;

bool moreCDS();

int main()
{
 CD acct[100];
 int count = 0;
 bool more = true;

 while (more)
 {
  acct[count].init();
  acct[count].accumulate();
  more = moreCDS();
  count++;
 }

 for (int i = 0; i < count; i++)
      acct[i].display();
}

bool moreCDS()
{
 char sentinel = 'y';
 bool more = true;

 cout << "More Data? y/n" << endl;
 cin >> sentinel;
 if (sentinel == 'n')
     return false;
 else
     return true;
}

