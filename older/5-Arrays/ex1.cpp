//display the contents of an array in reverse

#include <iostream>
 using namespace std;

int main()
{
 char stuff[5];

 for (int i = 0; i < 5; i++)
     stuff[i] = 'a' + i;


 for (int i = 4; i >= 0; i--)
     cout << stuff[i] << endl;

}  
