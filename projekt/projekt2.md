## Praca wykonal [Dominik Jakubovskis]

## Projekt do przedmiotu "Algorytmy i struktury danych"

## Data 2023-02-01

# Algorytm obliczania dużych liczb Fibonacciego

Duże liczby ciągu Fibonacciego
Ciąg liczb Fibonacciego jest ciągiem rekurencyjnym, który definiujemy następująco:

fib0  = 0
fib1  = 1
fibn  = fibn-2 + fibn-1, dla n  > 1

Kolejna liczba Fibonacciego (za wyjątkiem pierwszych dwóch) powstaje jako suma dwóch liczb poprzednich. Oto kilka początkowych liczb Fibonacciego:

0 1 1 2 3 5 8 13 21 34 55 89 114 233 377 610 987 ... 

Liczby Fibonacciego znajdują bardzo wiele zastosowań w informatyce i matematyce - na pewno spotkasz się z nimi jeszcze wielokrotnie. Ich wzrost jest bardzo szybki. Na przykład:

fib49  = 7,778,742,049

Zmienne pomocnicze:
f 0, f 1	 –	dwie poprzednie liczby Fibonacciego jako łańcuchy znakowe, f 0, f 1  ∈ N
i	 –	zlicza obiegi pętli, i  ∈ N
dodaj ( x, y )	 – 	dodaje dwie duże liczby jako łańcuchy i zwraca wynik jako łańcuch

### Lista kroków:
K01:	Jeśli n  = 0,
to f  ← "0" i zakończ	dwie pierwsze wartości zwracamy bezpośrednio
K02:	Jeśli n  = 1,
to f  ← "1" i zakończ	 
K03:	f 0 ← "0"	ustawiamy dwie początkowe liczby Fibonacciego
K04:	f 1 ← "1"	 
K05:	Dla i  = 2, 3, ..., n :
wykonuj kroki K06...K08	w pętli liczymy kolejne liczby Fibonacciego
K06:	    f  = dodaj ( f 0, f 1 )	jako sumę dwóch poprzednich
K07:	    f 0 ← f 1	przygotowujemy dwie poprzednie liczby
K08:	    f 1 ← f	dla następnego obiegu
K09:	Zakończ	 

### Pseudokod
```
largeFib() {
print bk1, bk2;
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > LARGEST || fr2 > 0 || fr1 > 0)
		{
			hold1 = (bk1 + bk2) / LARGEST;
			hold2 = (bk1 + bk2) % LARGEST;
			hold3 = fr1 + fr2 + hold1;
			fr1 = fr2, fr2 = hold3;
			bk1 = bk2, bk2 = hold2;
			print fr2, bk2;
		}
		else
		{
			hold2 = bk1 + bk2;
			bk1 = bk2, bk2 = hold2;
			print bk2;
		}
		if (count is not equal 97)
			print , ;
	}
	print new line;
}
```


### Program
```
#include <stdio.h>
#define LARGEST 10000000000
/**
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int fr1 = 0, bk1 = 1, fr2 = 0, bk2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > LARGEST || fr2 > 0 || fr1 > 0)
		{
			hold1 = (bk1 + bk2) / LARGEST;
			hold2 = (bk1 + bk2) % LARGEST;
			hold3 = fr1 + fr2 + hold1;
			fr1 = fr2, fr2 = hold3;
			bk1 = bk2, bk2 = hold2;
			printf("%lu%010lu", fr2, bk2);
		}
		else
		{
			hold2 = bk1 + bk2;
			bk1 = bk2, bk2 = hold2;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
```

Korzystanie z pętli For − Używając pętli For do generowania szeregu Fibonacciego, złożoność czasową można zredukować do O(n), co czyni to podejście skutecznym.
