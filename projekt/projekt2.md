## Praca wykonal [Dominik Jakubovskis]

## Projekt do przedmiotu "Algorytmy i struktury danych"

## Data 2023-02-01

# Algorytm obliczania dużych liczb Fibonacciego

Duże liczby ciągu Fibonacciego
Ciąg liczb Fibonacciego jest ciągiem rekurencyjnym, który definiujemy następująco:

$fib_{0}  = 0$

$fib_{1}  = 1$

$fib_{n} = fib_{n-2} + fib_{n-1}, dla n  > 1$

Kolejna liczba Fibonacciego (za wyjątkiem pierwszych dwóch) powstaje jako suma dwóch liczb poprzednich. Oto kilka początkowych liczb Fibonacciego:

0 1 1 2 3 5 8 13 21 34 55 89 114 233 377 610 987 ... 

Liczby Fibonacciego znajdują bardzo wiele zastosowań w informatyce i matematyce - na pewno spotkasz się z nimi jeszcze wielokrotnie. Ich wzrost jest bardzo szybki. Na przykład:

$fib_{49}$  = 7,778,742,049

Zmienne pomocnicze:
f_{0}, f_{1}	 –	dwie poprzednie liczby Fibonacciego jako łańcuchy znakowe, $f_{0}, f_{1}$  ∈ N
i	 –	zlicza obiegi pętli, i  ∈ N
dodaj ( x, y )	 – 	dodaje dwie duże liczby jako łańcuchy i zwraca wynik jako łańcuch


![image](https://user-images.githubusercontent.com/47005404/216173018-b26d6b4f-57ab-4cff-941b-a87e8aac1b73.png)


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
[kliknij](https://github.com/dom4ix/Algorytmy_i_Struktury_danych/blob/main/projekt/projekt2.c)

Korzystanie z pętli For − Używając pętli For do generowania szeregu Fibonacciego, złożoność czasową można zredukować do O(n), co czyni to podejście skutecznym.

### Przykład użycia
Ciąg Fibonacciego można zastosować w finansach za pomocą czterech technik, w tym zniesień, łuków, wachlarzy i stref czasowych.

Zniesienia Fibonacciego wymagają dwóch punktów cenowych wybranych na wykresie, zwykle swing high i swing low. Po wybraniu dwóch punktów liczby i linie Fibonacciego są rysowane w procentach tego ruchu. Jeśli cena akcji wzrośnie z 15 USD do 20 USD, wówczas poziom 23,6% wynosi 18,82 USD lub 20 USD - (5 USD x 0,236) = 18,82 USD. Poziom 50% wynosi 17,50 USD, czyli 15 USD - (5 USD x 0,5) = 17,50 USD.
