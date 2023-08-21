//appending a file to an already existing file
#include <fstream>
#include <iostream>
using namespace std;

void gOpenIn(ifstream&,char[]);
void gOpenOut(ofstream&,char[]);
void append(ofstream&,ifstream&);
void getFileNames(char[], char[]);


int main()
{
  char fileIn[20];
  char fileOut[20];
  ifstream fin;
  ofstream fout;

  getFileNames(fileIn,fileOut);
 
  gOpenOut(fout,fileOut);
  gOpenIn(fin,fileIn);

  append(fout,fin);

  fin.close();
  fout.close();
  return 0;
}

void getFileNames(char fileIn[], char fileOut[])
{
 cout << "Enter the name of the file to be appended" << endl;
 cin >> fileIn;
 cout << "Enter the name of the file to be appended to" << endl;
 cin >> fileOut;
}

void gOpenIn(ifstream& fin, char fileIn[])
 {

  fin.open(fileIn);
  if (fin.fail())
    {
     cout << "error on open: input" << endl;
     exit(1);
    }
 }

void gOpenOut(ofstream& fout, char fileOut[])
 {

  fout.open(fileOut, ios::app);
  if (fout.fail())
    {
     cout << "error on open: output" << endl;
     exit(1);
    }
 }

void append(ofstream& fout, ifstream& fin)
{
 char ch;
 
 fout.seekp(0, ios::end);

 fin.get(ch);
 while (!fin.eof())
 {
  fout.put(ch);
  fin.get(ch);
 }
}
