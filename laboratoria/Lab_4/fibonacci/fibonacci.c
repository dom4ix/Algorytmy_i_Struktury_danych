//Dominik Jakubovskis, Student
//2022-11-28

#include <math.h>
#include <stdio.h>

int fibonacci (int n){
	if (n <= 1) {
		return n;
	} else {
		return fibonacci(n - 2) + fibonacci(n - 1);
  }
}
int main(void) {
  int N = fibonacci(5);
  printf("n-ta liczba: %d", N);
}
