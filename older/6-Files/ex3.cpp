//testing for error on open
//using stream functions for format

#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

void gOpenIn(ifstream&);
void gOpenOut(ofstream&);
void makeNeat(ifstream&, ofstream&);

const int PRECISION = 5;
const int WIDTH = 12;


int main()
{
 ifstream fin;
 ofstream fout;

 gOpenIn(fin);
 gOpenOut(fout);

 makeNeat(fin,fout);
 
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

void makeNeat(ifstream& fin, ofstream& fout)
{
 fout.setf(ios::fixed);
 fout.setf(ios::showpoint);
 fout.setf(ios::showpos); //outputs +/- sign 
 fout.precision(PRECISION);

 double next;

 while(fin >> next)
  fout << setw(WIDTH) << next << endl;  //causes the decimal points to line up
}
