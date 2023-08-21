//What is the largest signed integer

#include <iostream>
 using namespace std;

int main()
{
  int integer;

  integer = 1;

  while (integer > 0)
     integer = integer * 2;

  integer = integer - 1;

  cout << "the largest signed integer is " << integer << endl;
}





