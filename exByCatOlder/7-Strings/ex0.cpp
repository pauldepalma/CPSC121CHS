//creates a C-string using get 
//displays the C-string using put
//displays the C-string using <<

#include <iostream>
using namespace std;

void getInput(char[]);
void display1(char[]);
void display2(char[]);

const char EOL = '\n';
const int MAX = 50;

int main()
{
 char stuff[MAX];

 getInput(stuff);
 display1(stuff);
 display2(stuff);

 return 0;
}  

void getInput(char stuff[])
{
 char ch;
 int i = 0;

 cin.get(ch);
 while (ch != EOL && i < MAX)
  {
   stuff[i] = ch;
   i++;
   cin.get(ch); 
  }
 stuff[i] = '\0';
}

void display1(char stuff[])
{
 int i = 0;
 while (stuff[i] != '\0')
      {
       cout.put(stuff[i]);
       ++i;
      }
 cout.put(EOL);
}

void display2(char stuff[])
{
 cout << stuff << endl;
}
