//Wykonał: Dominik Jakubovskis, Student
//Data: 2023-01-30
#include <stdio.h>
#include <string.h>
//funkcja swap
void swap(char *x, char *y)
{
	char tymczasowa;
	tymczasowa = *x;
	*x = *y;
	*y = tymczasowa;
}
//Permutacja
void permute(char *a, int b, int x){
	int i;
	if (b == x)
	printf("%s\n", a);
	else{
		for (i = b; i <= x; i++){
      //wykorzystowanie fukcnji swap
			swap((a + b), (a + i));
			permute(a, b + 1, x);
			swap((a + b), (a + i));
		}
	}
}
int main(){
  //testowanie
	char ciag[] = "ABCD2";
  printf("Wszystkie permutacje podanego ciągu znaków: \n");
	int y = strlen(ciag);
	permute(ciag, 0, y-1);
	return 0;
}
