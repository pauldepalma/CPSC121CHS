//A more general version of the previous program

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
 ifstream fin;
 ofstream fout;
 int sum = 0, num = 0;
 
 fin.open("ex0.inp");
 fout.open("ex1.out");

 while (fin >> num)
  sum += num;

 fout << "Result: " << sum << endl;

 fin.close();
 fout.close();
}

