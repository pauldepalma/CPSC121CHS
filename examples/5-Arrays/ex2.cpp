//program to find the highest and lowest values in an array
#include <iostream>
#include <cstdlib>
#include <time.h>
 using namespace std;

int main()
{
 const int MAX_SIZE = 20;
 int max;
 int min;

 int stuff[MAX_SIZE];

 srand(time(NULL));

 for (int i = 0; i < MAX_SIZE; i++)
     stuff[i] = rand() % 100;

 for (int i = 0; i < MAX_SIZE; i++)
     cout << stuff[i] << endl;

 max = stuff[0];
 min = stuff[0];
 for (int i = 1; i < MAX_SIZE; i++)
     {
      if (stuff[i] > max)
          max = stuff[i]; 
      if (stuff[i] < min)
          min = stuff[i];
     }

 cout << "the largest value is: " << max << endl;
 cout << "the smallest value is: " << min << endl;
} 
