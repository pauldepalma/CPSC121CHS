//bool type
//assignment
//multiplication

#include <iostream>
 using namespace std;

int main()
{
  bool test = true;  

  int integer = 1;

  test = true;
 
  while (test)
   {
     integer = integer * 2;
     if (integer < 0)
       {
	test = false;
        cout << "the smallest signed integer is " << integer << endl;
       }
   }

  integer = integer - 1;
  cout << "the largest signed integer is " << integer << endl;

}




