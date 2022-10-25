// Dominik Jakubovskis, Student
// Tablica
// 2022-10-25

#include <stdio.h>
#include <time.h>

int find(int item, int *arr);

void insert(int item, int pos, int *arr);


void remove1(int pos, int *arr)
{
  int i;
  int size = sizeof(arr)/sizeof(arr[0]);
  
    if(pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position from 1 to %d", size);
    }
    else
    {
        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
}


int size(int *arr);

int findMax(int *arr);

int findMin(int *arr);

void printTable(int *arr);

void main(void) {
  int arr[100] = {4.4,5.4,9.9,8.8};
  // realizacja

  int position = find(5.4, arr);
  printf("Pozycja: %d\n", pozycja);
  int max = findMax(arr);
  printf("Maksimum: %d\n", max);
  int min = findMin(arr);
  printf("Minimum: %d\n", min);
  printTable(arr);
  int okey = 2;
  remove1(okey, arr);
  
  return;
}

// Funkcii

int find(int item, int *arr){
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    if(item == arr[i]){
      return i;
    }
  }
  return -1;
}

void insert(int item, int pos, int *arr){
  arr[pos] = item;
}

//void remove(float pos, float *arr);

int size(int *arr){
  int i = (sizeof(arr)/sizeof(arr[0]));
  printf("\n%d",i);
  return i;
}

int findMax(int *arr){
  int max = arr[0];
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    if(max < arr[i]){
      max = arr[i];
    }
  }
  return max;
}

int findMin(int *arr){
  int min = arr[0];
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    if(min > arr[i]){
      min = arr[i];
    }
  }
  return min;
}

void printTable(int *arr){
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    printf(" %.d ", arr[i]);
  }
}
