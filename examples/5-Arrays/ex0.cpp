//program to illustrate array names as addresses

#include <iostream>
#include <stdio.h>
 using namespace std;

int main()
{
 char code[5];

 for (int i = 0; i < 5; i++)
     code[i] = 'a' + i;

 cout << "contents of the array are: " << endl;
 for (int i = 0; i < 5; i++)
     cout << code[i] << endl << endl;

 cout << "the address of the array is: " << endl;
 
 //a now obsolete i/o function that lets me display an address in hex.
 printf("%x\n",code);

}
