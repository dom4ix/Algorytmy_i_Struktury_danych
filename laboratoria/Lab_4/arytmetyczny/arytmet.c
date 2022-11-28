//Dominik Jakubovskis, Student
//2022-11-28
#include <math.h>
#include <stdio.h>

int podajN(int a1, int r, int n){
  if (n == 1){
    return a1;
  } else {
    return r + podajN(a1, r, n - 1);
  }
}

int main(void) {
  int N = podajN(2, 3, 4);
  printf("n-ta liczba: %d", N);
}
