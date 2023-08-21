//Appends a file to itself
//Demonstrates reading from and writing to the same file

#include <iostream>
#include <fstream>
#include <cstdlib>
 using namespace std;



void gfopen(char inp[], fstream& fin);
void readWrite(fstream& fInpOut);

int main()
{
 char inp[15];
 fstream fInpOut;

 cout << "enter file name" << endl;
 cin >> inp;
 gfopen(inp, fInpOut);
 readWrite(fInpOut); 
 fInpOut.close();
}

void gfopen(char inp[], fstream& fInpOut)
{

 fInpOut.open(inp, ios::in | ios::out);
 if (fInpOut.fail())
    {
     cout << "error opening file";
     exit(1);
    }
}

void readWrite(fstream& fInpOut)
{
 char ch;

 long readPtr = 0;
 long endFile, endPos;

 fInpOut.seekp(0,ios::end);
 endPos = fInpOut.tellp();
 endFile = endPos;
 fInpOut.seekp(0,ios::beg);

 fInpOut.get(ch);
 readPtr++;

 while (readPtr <= endPos)
 {
  fInpOut.seekp(endFile);
  fInpOut.put(ch);  
  endFile++;
  fInpOut.seekp(readPtr);
  fInpOut.get(ch);
  readPtr++;
 }
}
