//class example

#include "ex140.h"
#include <iostream>
   using namespace std;

CD::CD()
{
  term = 0;
  balance = 0.0;
  rate = 0.0;
}

void CD::init()
 {
  cout << "Enter account number" << endl; 
  for (int i = 0; i < 5; i++)
       cin >> id[i];

  cout << "Enter starting balance" << endl; 
  cin >> balance;

  cout << "Enter rate" << endl; 
  cin >> rate;

  cout << "Enter term" << endl; 
  cin >> term;   
}

void CD::display()
  {
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << "ID: " << "\t\t";    
   for (int j = 0; j < 5; j++)
        cout << id[j];
   cout << endl;
   cout << "Balance:" << "\t$" << balance;
   cout << endl;
   cout << "Rate:" << "\t\t" << rate;
   cout << endl;
   cout << "Term:" << "\t\t" << term << " months";
   cout << endl;
   cout << endl;
}

void CD::accumulate()
{
 balance = balance + rate * balance;
}
