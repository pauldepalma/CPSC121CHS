#include <iostream>
#include <cstdlib>
 using namespace std;

 void choice();
 void randMax();
 void withOutSeed();
 void withSeed();
 void limit();

int main()
{
 char more;
 do
   {
    choice();
    cout << "more? (y/n) " << endl;
    cin >> more;
   }
 while (more == 'y');
 return 0;
}

void choice()
{
 int choice;
 cout << "enter your choice" << endl;
 cout << "1: largest random number" << endl;
 cout << "2: 10 random numbers without a seed" << endl;
 cout << "3: 10 random numbers with a seed" << endl;
 cout << "4: 10 random numbers less or equal to a limit" << endl;
 
 cin >> choice;
 
 switch (choice)
 {
  case 1:  randMax();
	   break;
  case 2:  withOutSeed();
	   break;
  case 3:  withSeed();
	   break;
  case 4:  limit();
	   break;
  default: cout << "bad choice" << endl;
 }
}

void randMax()
{
 cout << "The largest random number: " << RAND_MAX << endl;
}

void withOutSeed()
{
 cout << "10 random numbers without a seed" << endl;
 for (int i = 0; i < 10; i++)
      cout << rand() << endl;
}

void withSeed()
{
 cout << "10 random numbers with a seed" << endl;
 srand(10);
 for (int i = 0; i < 10; i++)
      cout << rand() << endl;
}

void limit()
{
 int limit;

 cout << "enter the largest random number you want" << endl;
 cin >> limit;
 srand(time(0));
 for (int i = 0; i < 10; i++)
      cout << rand()  % (limit + 1) << endl;
}
