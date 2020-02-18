//PassingArrayToFunction_Ayala
//Lucy Ayala 02-15-2020


#include <iostream>
using namespace std;


void printArray (int[], int); //prototype
void sortArrAsc (int [], int);
void sortArrDesc(int [], int);
void populateArray(int [], int);

int main() 
{
  int numbers [8] = {23, 46, 12, 24, 1}; // 5 of 8 possible values
  numbers[5] = 500; //assign 500 to the 6th element
  numbers[6] = 1000;
  numbers[7] = 89;

  //get the size of numbers now that it has data
  int numbers_array_size = sizeof (numbers) / sizeof(int);
  cout << "This array has " << numbers_array_size << " values. \n";


printArray (numbers, numbers_array_size);
sortArrAsc (numbers, numbers_array_size);
sortArrDesc (numbers, numbers_array_size);
populateArray (numbers, 8);

  return 0;
}

//*************************************************************************
//using bubble Sort to sort array ASC
void sortArrAsc (int arrayVals [], int size)
{
  int temp = 0; // needed for sway process
  for(int left= 0; left  < size; left++)
  {
    for (int right = left+1; right < size; right++)
    {
      //the swap magic happens here
      //Bubble sort: compare the left num to the right num
      //swap, if neccessary
      if( arrayVals[left] > arrayVals[right]) //hint > is ASC, < is Desc
      {
        temp = arrayVals[left];
        arrayVals[left]= arrayVals[right];
        arrayVals[right]=temp; 
      }
    }
  }

  //call the printArray function here
 printArray(arrayVals, size);
}

//************************************************************************
void printArray (int arrayVals [], int size)
{
  cout << "\nPrinted values: "  << endl;
 for( int i= 0; i < (size); i++)
 {
   cout << arrayVals[i] << endl; 
 }
}

/*Dr_T Challenges Expand this program  
1. Write a void sortArrDesc function, DESC and print new sorted values *
2. Write a void populateArray(int [], int);*
3. Accept new values int the int main () numbers array 
3. Accept 8 integers via int arrayVals populateArray
4. sort the array DESC
5. print the array values entered to the screen in DESC order
*/

//************************************************************************

void sortArrDesc(int arrayVals [], int size)
{
  int temp = 0; // needed for sway process
  for(int left= 0; left  < size; left++)
  {
    for (int right = left+1; right < size; right++)
    {
         if( arrayVals[left] < arrayVals[right]) //hint > is ASC, < is Desc
      {
        temp = arrayVals[left];
        arrayVals[left]= arrayVals[right];
        arrayVals[right]=temp; 
      }
    }
  }
  printArray(arrayVals, size);
}
//************************************************************

void populateArray (int arrayVals[], int size)
{

cout << "\nLets enter " << size << " values: \n ";
  for (int i=0; i< size; i++)
  {
    cout << "\nEnter number " << (i+1) << " of " << size << ":";
    cin >> arrayVals [i]; // enter, accept and store all numbers
  }
sortArrDesc(arrayVals,size); // DESC AND print 

}