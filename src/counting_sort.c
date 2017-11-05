#include "counting_sort.h"
#include <stdio.h>
#include <stdlib.h>

void printArray(int *array, int size){

  int curr;
  for(curr = 0; curr < size; curr++){
    printf("%d, ", array[curr]);
  }
  printf("\n");
}

int maximum(int *array, int size){

  int curr = 0;
  int max = 0;

  for(curr = 0; curr < size; curr++){
    if(array[curr] > max)
      max = array[curr];
  }
  return max;
}

void countingSort(int *array, int size){

  int curr = 0;
  int max = maximum(array, size);
  int * counting_array = calloc(max, sizeof(int)); // Zeros out the array

  for(curr = 0; curr < size; curr ++){
    counting_array[array[curr]]++;              //count the number in the array will +1 to the relevant array number
  }                                               //example:(array first num = 2) <- array[0] and it will become counting array[2]
                                                    //            so that countng array[2] will +1
  int num = 0;
  curr = 0;

if(curr <= size){
    if(counting_array[num] != 0){
      array[curr]=num;
      counting_array[num]--;
    }
    num++;
  }
  else{
  printArray(array, size);
}
  //return array;
}
