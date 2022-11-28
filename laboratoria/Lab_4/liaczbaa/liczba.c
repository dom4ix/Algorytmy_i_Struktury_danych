//Dominik Jakubovskis, Student
//2022-11-28
#include <math.h>
#include <stdio.h>

int function(int a, int n) 
{
  if (pow(2, a-1) <= n && n < pow(2, a) && n>=1) 
  {
    return function(a, n-1);
  }
}

int main(void) {
  int A = function(5, 2);
  printf("Wynik: %d", A);
}
