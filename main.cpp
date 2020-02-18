//Passing array to function
//Kiet Vo 2-17-2020

#include <iostream>
using namespace std;

//Prototype
void printArray(int[], int); 
void sortArrAsc(int[], int);
void sortArrDesc(int[], int);
void populateArray(int[], int);


int main() 
{
  int numbers[8] ={23, 46, 12, 24, 1};//5 of 8 possible values
  numbers[5] = 500; //assign 500 to the 6th element
  numbers[6] = 1000;
  numbers[7] = 89;

  //get the size of numbers now that it has data
  int numbers_array_size = sizeof(numbers) / sizeof(int);
  cout << "This array has " <<  numbers_array_size << " values\n";

  //get input array from user
  cout << "Please enter 8 numbers: " << endl;
  populateArray();

  //call the printArray pass as argument numbers, numbers_array_size
  printArray(numbers, numbers_array_size);
  sortArrAsc(numbers, numbers_array_size);
  sortArrDesc(numbers, numbers_array_size);

  return 0;
}
//Function definition
void printArray(int arrayVals[], int size)
{
  cout << "\nPrinted values: " << endl;
  for(int i = 0; i < size; i++)
  {
    cout << arrayVals[i] << endl;
  }

}

//Using bubble sort to sort array ascending
void sortArrAsc(int arrayVals[], int size)
{
  int temp = 0; //needed for swap places
  for(int left = 0; left < size; left++) //number on left
  {
    //the number on right
    for(int right = left+1; right < size; right++)
    {
      //Swap magic happens here
      //Bubble sort: compare the left num to the right num
      //Swap, if neccessary
      if(arrayVals[left] > arrayVals[right])// hint > is ASC, < is DEC
      {
        temp = arrayVals[left];
        arrayVals[left] = arrayVals[right];
        arrayVals[right] = temp;
      }
    }
  }
  //call the printArray function here
  printArray(arrayVals, size);

}

/*Challenge!!!
1. write a void sortArrDesc, DESC and print new sorted values
2. write a void populateArray(int[], int);
3. accept 8 intergers via int arrayVals populateArray
4 sort the array DESC
5. print the array values entered to the scree in DESC order */

void sortArrDesc(int arrayVals[], int size)
{
  int temp = 0; //needed for swap places
  for(int left = 0; left < size; left++) //number on left
  {
    //the number on right
    for(int right = left+1; right < size; right++)
    {
      //Swap magic happens here
      //Bubble sort: compare the left num to the right num
      //Swap, if neccessary
      if(arrayVals[left] < arrayVals[right])// hint > is ASC, < is DEC
      {
        temp = arrayVals[left];
        arrayVals[left] = arrayVals[right];
        arrayVals[right] = temp;
      }
    }
  }
  //call the printArray function here
  printArray(arrayVals, size);

}

void populateArray (int arrayVals, int size)
{
  int temp = 0;
  int array[8] = {0, 0, 0, 0, 0, 0, 0, 0};
  
}




