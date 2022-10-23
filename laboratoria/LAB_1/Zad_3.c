/*
Dominik Jakubovskis. Student
* -----------------
Laboratorium 1. Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale, x jest wybierany z tablicy X(n)
* -----------------
2022-10-11
*/
#include <stdio.h>
#include <math.h>

int main(void){
  int n;
  
  do {  
    printf("Podaj dlugosc tablicy:");
    scanf("%d",&n);
    }  while(n<=0);
  
  double a, x[n];
  
  do {
    printf("Podaj a:");
    scanf("%lf", &a);
    } while(a==0);
  
for(int i = 0; i < n; i++){
    printf("Podaj x%d: ",i+1);
    scanf("%lf",&x[i]);
    printf("Rownanie: %.1lf = %.1lf * %.1lf ^ 2 \n",(a*x[i]*x[i]), a, x[i]);
  }
  
return 0;
}

