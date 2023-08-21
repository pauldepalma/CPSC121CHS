//explicitly testing for eof

#include <fstream>
using namespace std;

int main()
{
 ifstream fin;
 ofstream fout;
 int sum = 0, num = 0;
 
 fin.open("ex0.inp");
 fout.open("ex2.out");

 fin >> num;
 while (!fin.eof())
 {
  sum += num;
  fin >> num;
 }

 fout << "Result: " << sum << endl;

 fin.close();
 fout.close();
}

