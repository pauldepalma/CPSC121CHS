//program to illustrate changing values in an array by passing a referenc
//to the array

#include <iostream>
 using namespace std;

const int SIZE = 5;

void adjust(int[]);

int main()
{
 int num[SIZE], i;

 for (i = 0; i < 5; i++)
      cin >> num[i];

 adjust(num);

 for (i = 0; i < 5; i++)
      cout << num[i] << endl;
}

void adjust(int num[])
{
  for (int i = 0; i < SIZE; i++) 
       num[i] = num[i] * num[i];
}
