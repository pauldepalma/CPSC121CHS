#include <iostream>
 using namespace std;
 
int main()
{
  int x, y, z;
  cout << "The which is larger contest" << endl;
  cout << "Enter and integer" << endl;
  cin >> x; 
  cout << "Enter and integer" << endl;
  cin >> y; 
  cout << "Enter and integer" << endl;
  cin >> z; 

  if (x > y && x > z)
     cout << x << " is largest" << endl;
  if (y > x && y > z)
     cout << y << " is largest" << endl;
  if (z > x && z > y)
     cout << z << " is largest" << endl;
}
