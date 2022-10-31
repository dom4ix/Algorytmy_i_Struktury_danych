// Dominik Jakubovskis. Student
// Tablica
// 2022-10-25

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define arr_size 100

int find(int item, int *arr);

void insert(int item, int pos, int *arr);

void remove_it(int pos, int *arr);

int size();

int findMax(int *arr);

int findMin(int *arr);

void printTable(int *arr);

int main() {
  int arr[arr_size];

  srand(time(NULL)); 
  for (int i = 0; i < arr_size; i++) {
    arr[i] = rand()%200;
  }
    printTable(arr);
    printf("\n");
    printf("max %d\n", findMax(arr));
    printf("min %d\n", findMin(arr));
    printf("size %d \n",size());
    find(2, arr);
    remove_it(1, arr);
    printTable(arr);

}

int size() {
    return arr_size;
 }

int find(int item, int *arr) {
    for (int i = 0; i < arr_size; i++) {
      if (item == arr[i]) {
        printf("jest element\n");
        return 1;
      
    }
  }
  printf("niema elementu\n");
  return 0;
}

void insert(int item, int pos, int *arr) { 
      arr[pos] = item;
  }

void remove_it(int pos, int *arr) {
  int t_arr[size()-1];
  for (int i = 1; i < size(); i++) {
    if (i != pos) {
    } else {
      i++;
      t_arr[i--] = arr[i];
    }
  }
  *arr = *t_arr;
}

int findMax(int *arr) {
  int max = arr[0];
  for (int i=0; i< arr_size; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

int findMin(int *arr) {
  int min = arr[0];
  for (int i=0; i<arr_size; i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  return min;
}

void printTable(int *arr) {
  printf("\nDrukuje tablice \n \n");
  printf("-----------------\n");
  for (int i = 0; i < arr_size; i++) {
    printf("element nr.%d: %d \n", i+1, arr[i]);
  }
  printf("-----------------\n");
}
