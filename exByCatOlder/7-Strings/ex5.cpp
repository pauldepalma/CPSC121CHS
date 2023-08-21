//String Class

#include <iostream>
#include <string>
using namespace std;

int main()
{
 string phrase;
 string adjective("Italian"), noun("food");
 string wish = "Buon Appetito";

 phrase = "I love " + adjective + " " + noun + ".";
 cout << phrase << endl << wish << endl;
 return 0;
}
