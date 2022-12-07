// Dominik Jakubovskis
// Binary Search
// 2022-12-07

#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int binarySearch(int *array, int length, int r, int key) {
  while (length < r) {
    int midIndex = length + (r - length) / 2;

    if (array[midIndex] == key) {
      return midIndex;
    } else if (key > array[midIndex]) {
      length = midIndex + 1;
    } else {
      r = midIndex - 1;
    }
  }

  return -1;
}

int binarySearchRecursion(int arr[], int length, int r, int key) {
  if (r >= length) {
    int mid = length + (r - length) / 2;
    if (arr[mid] == key)
      return mid;
    if (arr[mid] > key)
      return binarySearchRecursion(arr, length, mid - 1, key);
    return binarySearchRecursion(arr, mid + 1, r, key);
  }
  return -1;
}

int main() {

  int start = 0, end = MAX;
  int key = 70405; // liczba do wyszukania

  FILE *fptr;
  int number, i = 0, arr[MAX];

  fptr =
      fopen("Dane.dat", "r"); // trzeba miec fail z danymi aby dzialalby program

  if (fptr != NULL) {
    printf("File opened successfully!\n");
  } else {
    printf("Failed to read the file.\n");
    return -1;
  }

  while (fscanf(fptr, "%d", &number) == 1) {
    arr[i] = number;
    i++;
  }
  fclose(fptr);

  printf("Indeks tej liczby jest: %d\n",
         binarySearch(arr, 0, MAX, key));

  printf("Indeks tej liczby jest: %d\n",
         binarySearchRecursion(arr, 0, MAX- 1, key));

  return 0;
}
