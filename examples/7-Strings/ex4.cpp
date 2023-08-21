//String Class, see pp. 405-406

#include <iostream>
#include <string>
using namespace std;

int main()
{
 string word; 
 string word1("hi, class");
 string word2;

 //copy word to word1
 word = word1;
 cout << word << endl;

 //append word 1 to word;
 word += word1;
 cout << word << endl;

 if (word2.empty())
    cout << "initialize word2" << endl;

 word2 = word1;

 if (word2 == word1)
    cout << "assignment worked" << endl;

 int position = word2.find("class");
 cout << position << endl;

 return 0;
}
