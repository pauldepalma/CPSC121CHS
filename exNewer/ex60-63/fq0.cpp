#include <iostream>
#include <ctime>
using namespace std;

void load(int[]);
void display(int[]);

const int SIZE = 10; 

int main()
{
 int store[SIZE];


 load(store); 
 display(store); 

 return 0;
}

void load(int store[])
{
 int min, max, i;
 unsigned seed;

 cout << "Enter min and max values for random numbers" << endl;
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

