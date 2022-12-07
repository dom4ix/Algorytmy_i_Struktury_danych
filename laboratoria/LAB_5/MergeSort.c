// Dominik Jakubovskis
// MergeSort
// 2022-12-07

#include <stdio.h>
#include <stdlib.h>

#define MAX 50

void TableMerge(int table[], int l, int p, int s) {
  int i, j, k;
  int size1 = s - l + 1;
  int size2 = p - s;
  int L[size1], P[size2];

  for (i = 0; i < size1; i++)
    L[i] = table[l + i];
  for (j = 0; j < n2; j++)
    P[j] = table[s + 1 + j];

  i = 0;
  j = 0;
  k = l;
  
  while (i < size1 && j < size2) {
    if (L[i] <= P[j]) {
      table[k] = L[i];
      i++;
    } else {
      table[k] = P[j];
      j++;
    }
    k++;
  }

  while (i < size1) {
    table[k] = L[i];
    i++;
    k++;
  }

  while (j < size2) {
    table[k] = P[j];
    j++;
    k++;
  }
}

void MergeSort(int table[], int l, int p) {
  if (l < p) {
    int s = l + (p - l) / 2;

    MergeSort(table, l, s);
    MergeSort(table, s + 1, p);

    Merge(table, l, s, p);
  }
}

void printtable(int T[], int rozmiar) {
  int i;
  for (i = 0; i < rozmiar; i++)
    printf(" %d ", T[i]);
  printf("\n");
}

int main() {
  int table[MAX];
  
  srand((unsigned)time(NULL));
  for (int j = 0; j < MAX; j++) {
    table[j] = 1 + rand() % 360; // maksimum liczb do 360
  }

  printf("unSorted \n");
  printtable(table, MAX);

  MergeSort(table, 0, MAX - 1);

  printf("\n Sorted table \n");
  printtable(table, MAX);
  return 0;
}
