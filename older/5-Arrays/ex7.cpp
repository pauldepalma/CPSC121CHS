//program to read up to end of line, store characters in an array and
//display them in reverse

#include <iostream>
using namespace std;

void reverse(char stuff[], int howMany);
void getInput(char stuff[], int& howMany);

const char EOL = '\n';
const int MAX = 11;

int main()
{
 char stuff[MAX];
 int howMany;

 getInput(stuff, howMany);
 reverse(stuff, howMany);

 return 0;
}  

void getInput(char stuff[], int& howMany)
{
 char ch;

 howMany = 0; 
 cin.get(ch);
 while (ch != EOL && howMany < MAX)
  {
   stuff[howMany] = ch;
   howMany++;
   cin.get(ch); 
  }
 howMany--;
}

void reverse(char stuff[], int howMany)
{
 for (int i = howMany; i >= 0; i--)
      cout << stuff[i];
 cout << endl;
}
