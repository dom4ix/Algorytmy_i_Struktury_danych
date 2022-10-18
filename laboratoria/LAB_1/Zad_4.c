/*
Dominik Jakubovskis, Student
******************************************
 Laboratorium 1. Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale, x jest wybierany z tablicy X(n), wyniki funckji zapisywac Y(n) 
****************************************** 
2022.10.11
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
	
    int n;

	while(n>0){
    printf("Prosze podac dlugosc tablicy:");
    scanf("%d", &n);
	}
  
    double a, x[n], y[n];
  
    printf("podaj a nie rowny 0: ");
    scanf("%lf", &a);

    for(int i=0; i < n; i++)
    {
        printf("Podaj x%d: ", i+1);
        scanf("%lf", &x[i]);        
	      y[i] = (a*x[i]*x[i]);
        printf(" y = %.lf , a = %.lf , x = %.lf \n", x[i], a, x[i]);
    }
return 0;
}
