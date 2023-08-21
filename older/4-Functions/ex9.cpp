//call by reference

#include <iostream>
using namespace std;

void swap(int&, int&);

int main()
{
  int var1, var2;

  cin >> var1;
  cin >> var2;

  cout << "var1 " << var1 << endl;
  cout << "var2 " << var2 << endl;

  swap(var1, var2);

  cout << "var1 " << var1 << endl;
  cout << "var2 " << var2 << endl;
}

void swap(int& x, int& y)
{
 int temp;

 temp = x;
 x = y;
 y = temp;
}
