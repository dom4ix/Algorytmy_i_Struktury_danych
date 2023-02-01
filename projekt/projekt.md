## Praca wykonal [Dominik Jakubovskis](https://github.com/dom4ix/)

## Projekt do przedmiotu "Algorytmy i struktury danych"

## Data 2023-01-30

- [Algorytm wyznaczania n kolejnych wyrazów ciągu arytmetycznego]
- [Algorytm obliczania dużych liczb Fibonacciego]
- [Algorytm przechodzenia przez listę cykliczną listę jednokierunkową]

### Algorytm wyznaczania n kolejnych wyrazów ciągu arytmetycznego

Wstęp:
Aby znaleźć n-ty wyraz w dowolnym ciągu, musimy znaleźć punkt wspólny wszystkich elementów łączących, którymi jest pierwszy wyraz i wspólne różnice. Tutaj obserwujemy, że możemy uzyskać dowolną liczbę w sekwencji, dodając wspólną różnicę do pierwszego wyrazu określoną liczbę razy. Ta wiedza pomaga nam wygenerować wzór na n-ty wyraz ciągu arytmetycznego.

Pochodzenie:
Wyprowadzenie jest takie samo, jak znalezienie terminów w postaci ogólnej. W którym symulujemy formułę dla niektórych elementów, a następnie obserwujemy, że n-ty wyraz możemy otrzymać, dodając do pierwszego wyrazu wspólną różnicę (n-1).

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

Skończony postęp arytmetyczny (skończony AP):
Jak łatwo zrozumieć z nazwy, szereg postępu arytmetycznego, który ma ostatni wyraz, tj. gdzieś się kończy, jest znany jako skończony postęp arytmetyczny.

Przykładem skończonego postępu arytmetycznego jest:
2,5,8,11,14.

Nieskończony postęp arytmetyczny (nieskończony AP):
Jak łatwo zrozumieć z nazwy, szereg postępów arytmetycznych, który nie ma ostatniego wyrazu, tj. nigdy się nie kończy, jest znany jako nieskończony postęp arytmetyczny.

Przykładem nieskończonego postępu arytmetycznego jest:

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
```

W C++
```
#include <iostream>
#include <iomanip>

using namespace std;

int main( )
{
  int n, i, a, d;

  cin >> n >> a >> d;

  for( i = 1; i <= n; i++ )
  {
    cout << setw ( 7 ) << a << " ";
    a += d;
  }
 
  cout << endl;

  return 0;
} 
```


# Przykłady : 
 

Input : a = 2 d = 1 N = 5
Output :
The 5th term of the series is : 6

Input : a = 5 d = 2 N = 10
Output :
The 10th term of the series is : 23


# Lista kroków:

K01:	Dla i  = 1, 2, ..., n :
wykonuj krok K02 
K02:	    Pisz a  = ( i  - 1 ) × d
K03:	Zakończ

Czas wykonania tego algorytmu nie zależy od wartości n, czyli jest stały. Taki wynik jest o niebo lepszy od poprzedniego. Wniosek: często opłaca się rozważyć dany problem matematycznie.

Ciąg arytmetyczny to ciąg liczb, w którym różnica między dowolnymi dwoma kolejnymi wartościami jest taka sama.


### Algorytm obliczania dużych liczb Fibonacciego












## Algorytm przechodzenia przez listę cykliczną listę jednokierunkową








