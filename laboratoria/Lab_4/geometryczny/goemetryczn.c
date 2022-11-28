//Dominik Jakubovskis, Student
//2022-11-28

#include <math.h>
#include <stdio.h>

double wyrazN(double a1, double q, int n) {
  if (n == 1) return a1;
  return q * wyrazN(a1, q, n - 1);
}
int main(void) {
  int N = wyrazN(2, 3, 4);
  printf("n-ta: %lf", N);
}
