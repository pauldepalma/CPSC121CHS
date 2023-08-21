//selection sort 

#include <iostream>
 using namespace std;

const int SIZE = 100;

void fill(int array[], int& howMany);
void display(const int array[], int howMany);
void sort(int array[], int howMany);
void swap(int& val1, int& val2);
int index_of_smallest(const int array[], int startIndex, int howMany);


int main()
{
  
  int array[SIZE];
  int howMany;

  fill(array, howMany);

  cout << "unsorted" << endl;
  display(array, howMany);

  sort(array, howMany);

  cout << endl;
  cout << "sorted" << endl;
  display(array, howMany);
}

void fill(int array[], int& howMany)
{
 srand(time(NULL));
 howMany = rand() % SIZE + 1;
 for (int i = 0; i < howMany; i++)
      array[i] = rand() % SIZE;
}

void display(const int array[], int howMany)
{
 for (int i = 0; i < howMany; i++)
    {
     if (i % 7 == 0)
	cout << endl;
     cout << " " << array[i];
    }
 cout << endl;
}

void sort(int array[], int howMany)
{
  int index_of_next_smallest;

  for(int index = 0; index < howMany - 1; index++)
   {
     index_of_next_smallest = index_of_smallest(array, index, howMany);
     swap(array[index], array[index_of_next_smallest]);
   } 
}

int index_of_smallest(const int array[], int start, int howMany)
{
  int min;
  int index_of_min = start, value = 0;

  min = array[index_of_min];

  for(int index = start; index < howMany; index++)
    { 
     if (array[index] < min)
       { 
	min = array[index];
	index_of_min = index;
       }
    }
       
  return index_of_min;
}

void swap(int& s1,int& s2)
{
  int temp;
  temp = s1;
  s1 = s2;
  s2 = temp;
}
