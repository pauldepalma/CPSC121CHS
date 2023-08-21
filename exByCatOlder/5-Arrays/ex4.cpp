//program to illustrate changing values in an array

#include <iostream.h>

const int SIZE = 5;

int adjust(int);

int main()
{
 int num[SIZE], i;

 for (i = 0; i < 5; i++)
      cin >> num[i];

 for (i = 0; i < 5; i++)
      num[i] = adjust(num[i]);

 for (i = 0; i < 5; i++)
      cout << num[i] << endl;
}

int adjust(int n)
{
  return n * n;
}
