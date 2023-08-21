#include <iostream>
#include <fstream>
#include <cstdlib>
 using namespace std;


//displays a file in reverse

void gfopen(char inp[], fstream& fin);
void dispRev(fstream& fin);

int main()
{
 char inp[15];
 fstream fin;

 cout << "enter file name" << endl;
 cin >> inp;
 gfopen(inp, fin);
 dispRev(fin); 
 fin.close();

}

void gfopen(char inp[], fstream& fin)
{

 fin.open(inp);
 if (fin.fail())
    {
     cout << "error opening file";
      exit(1);
    }
}

void dispRev(fstream& fin)
{
 char ch;
 long pos;

 fin.seekp(0, ios::end);
 fin.seekp(-1, ios::cur);
 pos = fin.tellp(); 

 while(pos > 0)
  {
   fin.get(ch);
   cout << ch;
   fin.seekp(-2, ios::cur);
   pos = fin.tellp(); 
  }
 fin.get(ch);
 cout << ch << endl;
}
