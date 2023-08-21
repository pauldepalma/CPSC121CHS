#include <iostream.h>
void getData(int&);


int main(void)
{
 int number = 0;

 getData(number);

 cout << number << endl;
}

void getData(int& input)
{
 cin >> input;
}
