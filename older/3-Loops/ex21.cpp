//increment pre and post 

#include <iostream>
using namespace std;

int main( )
{
    const int LOOPCONST = 5;
    int       count;


    //4 times
    cout << "prefix test" << endl;
    count = 0;
    while (++count < LOOPCONST)
       cout << "These are the days when birds come back" << endl;

    cout << endl << endl;
    cout << "prefix results but without prefix" << endl;
    count = 1;
    while (count < LOOPCONST)
      {
       cout << "These are the days when birds come back" << endl;
       count += 1;
      }
     cout << endl << endl;

    //5 times
    cout << "postfix test" << endl;
    count = 0;
    while (count++ < LOOPCONST)
       cout << "Had we but world enough and time" << endl;
    
    cout << endl << endl;
    cout << "postfix results without postfix" << endl;
    count = 0;
    while (count < LOOPCONST)
      {
       cout << "Had we but world enough and time" << endl;
       count += 1;
      }
}
