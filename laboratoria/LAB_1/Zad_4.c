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

  	do {  
    		printf("Podaj dlugosc tablicy:");
    		scanf("%d",&n);
   	 }  while(n<=0);
	
	double a, x[n], y[n];
  
	do {
    		printf("Podaj nie rowny 0:");
    		scanf("%lf", &a);
    	} while(a==0);

    	for(int i=0; i < n; i++)
    	{
        	printf("Podaj x%d: ", i+1);
        	scanf("%lf", &x[i]);        
	      y[i] = (a*x[i]*x[i]);
        	printf(" y = %.lf , a = %.lf , x = %.lf \n", y[i], a, x[i]);
    	}
return 0;
}
