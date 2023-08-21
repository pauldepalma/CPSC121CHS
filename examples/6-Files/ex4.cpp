//copies a file


#include <fstream>
#include <iostream>
using namespace std;

void gOpenIn(ifstream&);
void gOpenOut(ofstream&);
void copy(ifstream&, ofstream&);


int main()
{
 ifstream fin;
 ofstream fout;

 gOpenIn(fin);
 gOpenOut(fout);
 copy(fin,fout);

 fin.close();
 fout.close();
 
 return 0;
}

 
void gOpenIn(ifstream& fin)
{
 char fileIn[20];

 cout << "Enter an input file name" << endl;
 cin >> fileIn;

 fin.open(fileIn);
 if (fin.fail())
    {
     cout << "error on open: input" << endl;
     exit(1);
    }
} 
 
void gOpenOut(ofstream& fout)
{
 char fileOut[20];

 cout << "Enter an output file name" << endl;
 cin >> fileOut;

 fout.open(fileOut);
 if (fout.fail())
    {
     cout << "error on open: output" << endl;
     exit(1);
    }
} 

void copy(ifstream& fin, ofstream& fout) 
{
 char ch;
 fin.get(ch);
 while(!fin.eof())
  {
   fout.put(ch);
   fin.get(ch);
  }
}
