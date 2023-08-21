//same as last example, but with functions
#include <iostream>
#include <cstdlib>
#include <time.h>
 using namespace std;

void init(int[]);
void output(int[]);
void maxMin(int[],int&,int&);
void result(int, int);

const int MAX_SIZE = 20;
int main()
{
 int max, min;
 int stuff[MAX_SIZE];

 init(stuff);
 output(stuff);
 maxMin(stuff,max,min);
 result(max,min); 
} 

void init(int stuff[])
{
 srand(time(NULL));

 for (int i = 0; i < MAX_SIZE; i++)
     stuff[i] = rand() % 100;
}

void output(int stuff[])
{
 for (int i = 0; i < MAX_SIZE; i++)
     cout << stuff[i] << endl;
}

void maxMin(int stuff[], int& max, int& min)
{
 max = stuff[0];
 min = stuff[0];
 for (int i = 1; i < MAX_SIZE; i++)
     {
      if (stuff[i] > max)
          max = stuff[i]; 
      if (stuff[i] < min)
          min = stuff[i];
     }
}

void result(int max, int min)
{
 cout << "the largest value is: " << max << endl;
 cout << "the smallest value is: " << min << endl;
}
