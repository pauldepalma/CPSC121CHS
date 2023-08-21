//program to read the first 25 characters into a 2-D array.  
//then it capitalizes them
//then it prints them out
#include <iostream>
using namespace std;

const int MAXROW = 5;
const int MAXCOL = 5;

void fillArray(char data[MAXROW][MAXCOL]);
void capArray(char data[MAXROW][MAXCOL]);
void dispArray(char data[MAXROW][MAXCOL]);

int main()
{
 char data[MAXROW][MAXCOL];

 fillArray(data);
 capArray(data);
 dispArray(data);
}


void fillArray(char data[MAXROW][MAXCOL])
{
 int total = 0;
 for (int i = 0; i < 5; i++)
      for (int j = 0; j <= 5; j++)
	  {
	   data[i][j] = 'a' + total;
	   total++;
          }
}

void capArray(char data[MAXROW][MAXCOL])
{
 for (int i = 0; i < 5; i++)
      for (int j = 0; j < 5; j++)
	   data[i][j] = data[i][j] - 32; 
}

void dispArray(char data[MAXROW][MAXCOL])
{
 for (int i = 0; i < 5; i++)
      for (int j = 0; j <= 5; j++)
	    cout << data[i][j] << endl; 
}
