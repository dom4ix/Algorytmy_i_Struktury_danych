/*
Dominik Jakubovskis. Student
* -----------------
 Laboratorium 1. Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale. x - zmieniase z x0 do xn, krokiem hx
* -----------------
2022-10-11
*/
#include <stdio.h>
#include <math.h>

int main(void) {

  double n,a,x;
  double xn,hx=0;
  
  printf("\nWprowadz a,x0,xn\n");
  scanf("%lf %lf %lf",&a,&x,&xn);
  
  while(hx<=0){
    printf("\nWprowadz dodatnia liczba hx\n");
    scanf("%lf", &hx);
  }
  
  printf("\n\n  y = ax^2 ");
  
  while(x<=xn){
    printf("\n%.1lf = %.1lf * %.1lf ^ 2\n",(a*x*x),a,x);
    x=x+hx;
  } 
  
return 0;
}
