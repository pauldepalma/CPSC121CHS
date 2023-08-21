#include <iostream>
#include <fstream>
#include <ctime>
#include <cmath>
using namespace std;

void load(int[]);
void display(int[]);
void bubble(int[]);
int getMax(int);
void loadNames(string[]);
void displayNames(string[]);
void bubbleNames(string[]);
void gfopen(ofstream&);
void writeNames(string[],ofstream&);

const int SIZE = 10; 
const int SIZE1 = 5;

int main()
{
 int store[SIZE];
 string storeNames[SIZE1];
 ofstream fout;

 cout << "unsorted" << endl; 
 load(store); 
 display(store); 
 cout << endl;

 cout << "sorted" << endl; 
 bubble(store);
 display(store);
 cout << endl;

 cout << "unsorted" << endl; 
 loadNames(storeNames); 
 displayNames(storeNames);
 cout << endl;

 bubbleNames(storeNames);
 gfopen(fout); 
 writeNames(storeNames,fout);
 return 0;
}  

void gfopen(ofstream& fout)
{
 string fileName;
 
 cout << "Enter an output file name" << endl;
 getline(cin,fileName);

 fout.open(fileName);
 if (!fout)  
   {
    cout << "Error opening output file: " << fileName << endl;
    exit(0);
   }
}

void writeNames(string store[], ofstream& fout)
{
 for (int i = 0; i < SIZE1; i++)
   fout << store[i] << endl;
} 

void loadNames(string store[])
{
 int i = 0; 
 while (i < SIZE1)
 {
  cout << "enter a name" << endl;
  getline(cin,store[i]);
  i++;
 }
}

void displayNames(string store[])
{
 for (int i = 0; i < SIZE1; i++)
   cout << store[i] << endl;
}

void bubbleNames(string data[])
{
 for (int i = SIZE1 - 1; i >= 0; i--)
  for (int j = 0; j < i; j++)
    {
      if (data[j] > data[j+1])
       {
        string buf = data[j];
        data[j] = data[j+1];
        data[j+1] = buf;
       }
     }
}

void load(int store[])
{
 int min, max, i;
 unsigned seed;

 cout << "Enter min value for random numbers" << endl; 
 cin >> min;

 max = getMax(min);

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

int getMax(int min)
{
 float numIn;
 int num;

 while(true)
 {
  cout << "Enter an integer greater than " << min << endl;
  if (cin >> numIn)
    if (floor(numIn) == numIn)
      { 
       num = static_cast<int>(numIn);
       if (num > min)
         break; 
      }
  cin.clear();
  cin.ignore();
  cout << "Invalid input. Input must be an integer greater than " << min << endl;
 }
 cin.clear();
 cin.ignore();
 return num;
}
