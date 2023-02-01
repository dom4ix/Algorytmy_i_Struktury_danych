## Praca wykonal [Dominik Jakubovskis]

## Projekt do przedmiotu "Algorytmy i struktury danych"

## Data 2023-01-30

### Algorytm wyznaczania n kolejnych wyrazów ciągu arytmetycznego

Wstęp:
Ciąg arytmetyczny to ciąg liczb, w którym różnica między dowolnymi dwoma kolejnymi wartościami jest taka sama.

Biorąc pod uwagę „a” pierwszy termin, „d” wspólną różnicę i „n” dla liczby terminów w serii. Zadanie polega na znalezieniu n-tego wyrazu szeregu.
Tak więc, zanim omówimy, jak napisać program dla problemu, powinniśmy najpierw wiedzieć, czym jest postęp arytmetyczny.
Postęp arytmetyczny lub sekwencja arytmetyczna to sekwencja liczb, w której różnica między dwoma kolejnymi terminami jest taka sama.
Tak jak mamy pierwszy wyraz, tj. a = 5, różnica 1 i n-ty wyraz, który chcemy znaleźć, powinien wynosić 3. Zatem szereg będzie wynosił: 5, 6, 7, więc wynik musi wynosić 7.

Możemy więc powiedzieć, że postęp arytmetyczny dla n-tego wyrazu będzie jak −

a1 = a1
a2 = a1 + (2-1) * re
a3 = a1 + (3-1) * re
..
an = a1 + (n-1) *

Zatem formuła będzie miała postać an = a + (n-1) * d.

# Przykład
Wejście: a=2, d=1, n=5
Wyjście: 6
Wyjaśnienie: Seria będzie:
2, 3, 4, 5, 6 n-tym wyrazem będzie 6
Wejście: a=7, d=2, n=3
Wyjście: 11
Podejście, którego użyjemy do rozwiązania zadanego problemu −

Weź pierwszy wyraz A, wspólną różnicę D i N liczbę serii.
Następnie oblicz n-ty wyraz przez (A + (N - 1) * D)
Zwróć dane wyjściowe uzyskane z powyższego obliczenia.
Formuła:

Wzór na znalezienie n-tego wyrazu ciągu arytmetycznego to:   an=a+(n−1)∗d

a = pierwszy termin
d = różnica
Niech będzie szereg 1,5,9,13,17,...

W powyższym szeregu widzimy, że kiedy odejmiemy dowolne dwie kolejne liczby, otrzymamy różnicę równą 4. Dlatego uważa się, że jest to ciąg arytmetyczny o wspólnej różnicy 4 i ponieważ pierwszym elementem tego ciągu jest 1, to pierwszy wyrazem tego ciągu arytmetycznego będzie 1.

Różnica = 4 Pierwszy wyraz = 1 Dlatego szóstym wyrazem w serii będzie 1+(6-1)4, czyli 21.

Rodzaje AP
n-ty wyraz wskazuje wzór na znalezienie n-tego wyrazu ciągu arytmetycznego.

Istnieją 2 rodzaje postępu arytmetycznego. Omówmy je jeden po drugim.

Skończony postęp arytmetyczny (skończony ciąg arytmetyczny):
Jak łatwo zrozumieć z nazwy, szereg postępu arytmetycznego, który ma ostatni wyraz, tj. gdzieś się kończy, jest znany jako skończony ciąg arytmetyczny.

Przykładem skończonego ciąg arytmetycznego jest:
2,5,8,11,14.

Nieskończony ciąg arytmetyczny (nieskończony ciąg arytmetyczny):
Jak łatwo zrozumieć z nazwy, szereg postępów arytmetycznych, który nie ma ostatniego wyrazu, tj. nigdy się nie kończy, jest znany jako nieskończony ciag arytmetyczny.

Przykładem nieskończonego ciąg arytmetycznego jest:

1,2,3,4,5,6,7,8,9,...

## Pseudokod

Start
   Step 1 -> In function int nth_ap(int a, int d, int n)
      Return (a + (n - 1) * d)
   Step 2 -> int main()
      Declare and initialize the inputs a=2, d=1, n=5
      Print The result obtained from calling the function nth_ap(a,d,n)
Stop

## Program
W C
```
#include <stdio.h>

int nth_ap(int a, int d, int n) {
   t(n) = a(1) + (n-1)*d
   return (a + (n - 1) * d);
}

int main() {
   int a = 2;
   int d = 1;
   int n = 5;
   printf(" %d-ty wyraz ciągu arytmetycznego : %d", n, nth_ap(a,d,n)); //5-tego jest równy 6
   return 0;
}


# Lista kroków:

K01:	Dla i  = 1, 2, ..., n :
wykonuj krok K02 
K02:	    Pisz a  = ( i  - 1 ) × d
K03:	Zakończ

# Złożość czasowa

Czas wykonania tego algorytmu nie zależy od wartości n, czyli jest stały. Taki wynik jest o niebo lepszy od poprzedniego. Wniosek: często opłaca się rozważyć dany problem matematycznie.
