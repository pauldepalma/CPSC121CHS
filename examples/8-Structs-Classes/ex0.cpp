//struct example


#include <iostream>
   using namespace std;

 const  int IDSIZE = 5;
 const  int MAXACCT = 25;
 struct CD
 {
  char id[IDSIZE]; 
  double balance;
  double rate;
  int term;
 };

 void init(CD[],int);
 void display(CD[],int);

 int main()
 {
  CD accounts[MAXACCT];
  char more = 'y';

  int ct = -1;
  while (more == 'y')
   {
    ct++;
    init(accounts,ct);
    cout << "Enter Another?" << endl;
    cin >> more;
   }
  ct++;

  display(accounts,ct);
 }

 void init(CD accounts[],int index)
 {
  cout << "Enter account number" << endl; 
  for (int i = 0; i < IDSIZE; i++)
       cin >> accounts[index].id[i];

  cout << "Enter starting balance" << endl; 
  cin >> accounts[index].balance;

  cout << "Enter rate" << endl; 
  cin >> accounts[index].rate;

  cout << "Enter term" << endl; 
  cin >> accounts[index].term;   
}

 void display(CD accounts[], int index)
  {
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << "ID: " << "\t\t";    
   for (int i = 0; i < index; i++)
       {
        for (int j = 0; j < IDSIZE; j++)
            cout << accounts[i].id[j];
   cout << endl;
   cout << "Balance:" << "\t$" << accounts[i].balance;
   cout << endl;
   cout << "Rate:" << "\t\t" << accounts[i].rate;
   cout << endl;
   cout << "Term:" << "\t\t" << accounts[i].term << " months";
   cout << endl;
   cout << endl;
  }
}
