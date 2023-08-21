//exponentiation the hard way 


#include <iostream>
 using namespace std;

int power(int, int);

int main()
{
 int x, y;

 cout << "Enter base " << endl;
 cin >> x;

 cout << "Enter exponent " << endl;
 cin >> y;
  
 cout << "result is : " << power(x,y) << endl;
 return 0;

}


int power(int base, int exp)
{
  int result = 1;

  while (exp > 0)
   {
     result = result * base;
     exp--;
   }

  return result;
}
