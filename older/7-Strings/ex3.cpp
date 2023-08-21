//C-Strings
//strcmp

#include<iostream>
using namespace std;


int main()
{

 char str[] = "Aab";
 char str1[] = "Aac";
 //0 if equal
 //< 1 if str < str1
 //> 1 if str > str1
 cout << strcmp(str,str1) << endl;
 if (strcmp(str,str1) > 0 )
     cout << "The First is " << str << endl;
 else
     cout << "The First is " << str1 << endl;

 return 0;
}


