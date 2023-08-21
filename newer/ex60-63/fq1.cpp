#include <iostream>
#include <ctime>
using namespace std;

void load(int[]);
void display(int[]);
void bubble(int[]);

const int SIZE = 10; 

int main()
{
 int store[SIZE];

 cout << "unsorted" << endl; 

 load(store); 
 display(store); 

 bubble(store);
 cout << "sorted" << endl; 
 display(store);
 
 return 0;
}

void load(int store[])
{
 int min, max, i;
 unsigned seed;

 cout << "Enter min and max values for randome numbers" << endl;
 cin >> min >> max;

 seed = time(0);
 srand(seed);

 i = 0;
 while (i < SIZE)
 {
   store[i] = (rand() % (max - min +1)) + min;
   i++;
 }
}

void display(int store[])
{
 for (int i = 0; i < SIZE; i++)
  cout << store[i] << endl;
 cout << endl;
}

void bubble(int data[])
{
 for (int i = SIZE - 1; i >= 0; i--)
  for (int j = 0; j < i; j++)
    {
      if (data[j] > data[j+1])
       {
        int buf = data[j];
        data[j] = data[j+1];
        data[j+1] = buf;
       }
     }
}
