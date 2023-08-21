//reading from and writing to a file


#include <fstream>
using namespace std;

int main()
{
 ifstream fin;
 ofstream fout;
 int sum = 0, num = 0;
 
 fin.open("ex0.inp");
 fout.open("ex0.out");

 for (int i = 0; i < 5; i++)
 {
  fin >> num;
  sum += num;
 }

 fout << "Result: " << sum << endl;

 fin.close();
 fout.close();
}

