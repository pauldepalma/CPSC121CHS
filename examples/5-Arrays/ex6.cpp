//Use of const arrays as formal parameters  
//Linear search
//Filling arrays of any size
#include <iostream>
 using namespace std;

const int MAX = 10;

//pre: array has been declared, size has been initialized
//post: array is filled with size integers
void fillArray(int array[],int size);

//pre:: array has been declared and filled, size and 
//	target have been initialized.
//post: true if target is in array, false otherwise
bool findValue(const int array[], int size, int target);



int main()
{
  int array[MAX];
  int target;

  fillArray(array,MAX);

  cout << "Enter an integer to be found" << endl;
  cin >> target;

  if (findValue(array, MAX, target))
     cout << "target found" << endl;
  else
     cout << "target not found" << endl;

  return 0;
}

void fillArray(int array[], int size)
{
 for (int i = 0; i < size; i++)
     array[i] = i;
}

bool findValue(const int array[], int size, int target)
{
  int i = 0;
  while (i < size)
    {
     if (array[i] == target)
	 return true;
     i++;
    }

  return false;
}







