/*
Dominik Jakubovskis. Student
* -----------------
 Laboratorium 1. Obliczyc funkcja y = ax^2 znaczenia, gdy a ir x zmeniajan sie jednoczesnie: a z 1 krokiem 0.5, x - z 2 do 6 krokiem 2
* -----------------
2022-10-11
*/
#include <stdio.h>
#include <math.h>

int main(void) {

  float a=1.0;
  int x=2;
  float y=0.0;
  
  printf("\na    x  y\n");

  while(x<=6){
    printf("%.1f  %d ",a,x);
    
    y=(pow(x,2))*a;
    a+=0.5;
    x+=2;
    
    printf(" %.1f\n",y);
  } 
  return 0;
}
