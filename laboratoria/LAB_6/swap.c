/*
Dominik Jakubovskis. Student
* -----------------
* Include files.
* -----------------
2022-12-23
*/
#include <stdio.h>

int swap(int *arr, int X, int Y) {
  int temp = arr[X];
  arr[X] = arr[Y];
  arr[Y] = temp;
}
