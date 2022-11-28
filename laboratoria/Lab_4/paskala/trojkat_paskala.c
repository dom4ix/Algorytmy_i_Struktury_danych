//Dominik Jakubovskis, Student
//2022-11-28

#include <math.h>
#include <stdio.h>

int paskal(int n, int k)
{
    if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
    return paskal(n - 1, k - 1) + paskal(n - 1, k);
}

int main(void) {
  int N = paskal(7, 1);
  printf("n-ta liczba: %d", N);
}
