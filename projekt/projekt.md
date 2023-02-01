## Praca wykonal [Dominik Jakubovskis](https://github.com/dom4ix/)

## Projekt do przedmiotu "Algorytmy i struktury danych"

## Data 2023-01-30

- [Algorytm wyznaczania n kolejnych wyrazów ciągu arytmetycznego]
- [Algorytm obliczania dużych liczb Fibonacciego]
- [Algorytm przechodzenia przez listę cykliczną listę jednokierunkową]

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



### Algorytm obliczania dużych liczb Fibonacciego

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

# Lista kroków:
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

# Pseudokod
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


# Program
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



## Algorytm przechodzenia przez listę cykliczną listę jednokierunkową

Lista cykliczna (ang. Circular Linked List) jest listą w której nie jest wyróżniony element początkowy, ani końcowy. Każdy element ma swojego następcę i poprzednika. Listy takie można konstruować jako jedno lub dwukierunkowe. Liniowa lista jednokierunkowa może zostać przekształcona w listę cykliczną poprzez zapisanie w polu wskaźnikowym jej ostatniego elementu adresu elementu pierwszego. Podobne operacje pozwalają zamienić dwukierunkową listę liniową w listę cykliczną.

W cyklicznej liście pojedynczo połączonej ostatni węzeł listy zawiera wskaźnik do pierwszego węzła listy. Możemy mieć okrągłą listę pojedynczo połączoną, jak również okrągłą listę podwójnie połączoną.

Przechodzimy przez cykliczną pojedynczo połączoną listę, aż dotrzemy do tego samego węzła, w którym zaczęliśmy. Okrągła lista pojedynczo lubianych nie ma początku ani końca. W następnej części żadnego z węzłów nie ma wartości null.

Poniższy obraz przedstawia cykliczną pojedynczo połączoną listę.
![image](https://user-images.githubusercontent.com/47005404/216130437-67557c0b-d47d-482a-8c7a-2102f2c8c2be.png)

# Pseudokod

clearVisits(structure head)
set structure temp pointer to head pointer
    while(temp != null and temp->visited == 1) do
      set visited member in temp to 0
      set temp to the next node
end
find(value, structure head)
set current pointer to head
    while(current != null and current->visited != 1) do
      set visited member in current to 1
      if(value member in current == value)
        clear all visits in nodes
        return 1
      set current to the next node
  clear all visits in nodes
end
locate(value, structure head)
  while(head != null and visited member in head != 1) do
      set visited member in head to 1
      if(value member in head == value)
        clear all visits in nodes
        return head
      set head to the next node
    clear all visits in nodes
   end
retrieve(pointer, structure head)
    clear all visits in nodes
  
    while(head != null and visited member in head != 1) do
      set visited member in head to 1
      if(head == pointer)
        clear all visits in nodes
        return value member in head
      set head to the next node
    clear all visits in nodes
    end
insert(position pointer, value, next pointer)
 if(position pointer == null)
      print "the previous node cannot be NULL"
      end
    allocate new structure called new_node
    set value member in new_node to value
    set new_node next node pointer to position pointer next node pointer
    set position pointer next node pointer to new_node
    set new_node previous node pointer to position pointer
    if(new_node next node pointer != null)
      set new_node next node previous node pointer to new_node
    elseif(new_node next node pointer == null)
      set new_node next node pointer to next pointer
  end
printList(structure head)
 set struct temp pointer to head pointer
    while(temp!=null and visited member in temp != 1)
      print value member in temp
      set visited member in temp to 1
      set temp to next node
    clear all visits in nodes
    end
removeItem(struct head, pointer)
set struct temp pointer to head pointer and prev pointer
    clear all visits in nodes
    if(temp != null and temp == pointer)
      set head pointer to next member in temp
      free temp
      end
    while(temp != null and temp != pointer and visited member in temp != 1) do
      set visited member in temp to 1
      set prev to temp
      set temp to next node
    if(temp == null)
      clear all visits in nodes
      end
    set next member in prev to to next member in temp
    clear all visits in nodes
    free temp
findMax(structure head)
declare struct max pointer and temp pointer
    set temp to max to head pointer
    clear all visits in nodes
    while(temp != null and visited member in temp != 1) do
      if(value member in temp > value member in max)
        set max to temp
      set visited member in temp to 1
      set temp to next member in temp
    clear all visits in nodes
    return max value
findMin(struct head)
declare struct min pointer and temp pointer
    set temp to min to head pointer
    clear all visits in nodes
    while(temp != null and temp visited != 1) do
      if(temp value < min value)
        set min to temp
      set temp visited to 1
      set temp to next node
    clear all visits in nodes
    return min value
size(struct head)
declare struct current pointer and set to head
  declare and set i to 0
  while(current != null and current visited != 1) do
    i++
    set current visited to 1
    set current to next node
  clear all visits in nodes
  return i
isEmpty(struct head)
if(head == null)
      return 1
    return 0
next(item pointer, struct head)
clear all visits in nodes
    while(head != null and head visited != 1) do
      if(head == item)
        clear all visits in nodes
        return head next value
      set head to head next
    clear all visits in nodes
    end
prev(item pointer, struct head pointer)
clear all visits in nodes
    while(head != null and head visited != 1) do
      if(head == item)
        clear all visits in nodes
        return head prev value
    end
makeNull(struct head pointer)
declare struct temp pointer
    while(head != null) do
      set temp to head
      set head to head next
      free temp
  end









#Program

// C code to perform circular linked list operations
```
#include <stdio.h>

struct Item {
  float value;
  struct Item *next;
  struct Item *prev;
  int visited;
};

int find(float value, struct Item *head);

void clearVisits(struct Item **head);

int printList(struct Item **head);

void insert(struct Item *item, int value, struct Item *head);

float findMax(struct Item **head);

float findMin(struct Item **head);

int size(struct Item *head);

int isEmpty(struct Item *head);

float next(void *item, struct Item *head);

float prev(void *item, struct Item *head);

void makeNull(struct Item *head);

void *locate(float value, struct Item *head);

float retrieve(void *pointer, struct Item *head);

void removeItem(struct Item **head, void *pointer);


int main(void) {
  // realizacja
  
  struct Item *head = NULL;
  struct Item *second = NULL;
  struct Item *third = NULL;

  head = (struct Item *)malloc(sizeof(struct Item));
  second = (struct Item *)malloc(sizeof(struct Item));
  third = (struct Item *)malloc(sizeof(struct Item));

  head->value = 1;
  head->next = second;
  head->prev = NULL;

  second->value = 2;
  second->next = third;
  second->prev = head;

  third->value = 3;
  third->next = NULL;
  third->prev = second;

  insert(third, 5, head);

  printf("\n\n-------Print List--------\n");
  printList(&head);
  printf("--------------------\n\n");

  printf("find: %s\n", find(5, head) ? "found" : "not found");

  void *p = locate(5, head);

  printf("Retrieve: %f\n", retrieve(p, head));

  struct Item *pointer1 = p;

  printf("Max element is: %f\n", findMax(&head));

  printf("Min element is: %f\n", findMin(&head));

  printf("Size of list is: %d\n", size(head));

  printf("Is list empty: %s\n", isEmpty(head) ? "empty" : "not empty");

  void *p2 = locate(3, head);

  printf("Next: %f\n", next(p2, head));

  printf("Prev: %f\n", prev(p2, head));

  removeItem(&head, p);

  printf("\n\n-------Print List--------\n");
  printList(&head);
  printf("--------------------\n\n");

  return 0;
}

//Funkcii

/* Pseudocode
  clearVisits(structure head){
    set structure temp pointer to head pointer
  
    while(temp != null and temp->visited == 1) do
      set visited member in temp to 0
      set temp to the next node
  end
  }
  */
void clearVisits(struct Item **head){
  struct Item *temp = *head;

  while(temp != NULL && temp->visited == 1) {
    temp->visited = 0;
    temp = temp->next;
    }
  return;
}
/*Pseudocode
  find(value, structure head){
    set current pointer to head
    while(current != null and current->visited != 1) do
      set visited member in current to 1
      if(value member in current == value)
        clear all visits in nodes
        return 1
      set current to the next node
  clear all visits in nodes
  end
  }
*/
    
int find(float value, struct Item *head) {
  struct Item *current = head;
  while (current != NULL && current->visited != 1) {
    current->visited = 1;
    if (current->value == value){
      clearVisits(&head);
      return 1;
      }
    current = current->next;
  }
  clearVisits(&head);
  return 0;
}

/*Pseudocode
  locate(value, structure head){
    while(head != null and visited member in head != 1) do
      set visited member in head to 1
      if(value member in head == value)
        clear all visits in nodes
        return head
      set head to the next node
    clear all visits in nodes
    end
  }
*/

void *locate(float value, struct Item *head) {

  while (head != NULL && head->visited != 1) {
    head->visited = 1;
    if (head->value == value){
      clearVisits(&head);
      return head;
    }
    head = head->next;
  }
  clearVisits(&head);
  return 0;
}

/* Pseudocode
  retrieve(pointer, structure head) {
    clear all visits in nodes
  
    while(head != null and visited member in head != 1) do
      set visited member in head to 1
      if(head == pointer)
        clear all visits in nodes
        return value member in head
      set head to the next node
    clear all visits in nodes
    end
  }
*/

float retrieve(void *pointer, struct Item *head) {
  clearVisits(&head);
  while (head != NULL && head->visited != 1) {
    head->visited = 1;
    if (head == pointer){
      clearVisits(&head);
      return head->value;
    }
    head = head->next;
  }
  clearVisits(&head);
  return 0;
}

/*Pseudocode
  insert(position pointer, value, next pointer){
    if(position pointer == null)
      print "the previous node cannot be NULL"
      end
    allocate new structure called new_node
    set value member in new_node to value
    set new_node next node pointer to position pointer next node pointer
    set position pointer next node pointer to new_node
    set new_node previous node pointer to position pointer
    if(new_node next node pointer != null)
      set new_node next node previous node pointer to new_node
    elseif(new_node next node pointer == null)
      set new_node next node pointer to next pointer
  end
  }
*/

void insert(struct Item *item, int value, struct Item *head) {
  if (item == NULL) {
    printf("the given previous node cannot be NULL");
    return;
  }

  struct Item *new_node = (struct Item *)malloc(sizeof(struct Item));

  new_node->value = value;

  new_node->next = item->next;

  item->next = new_node;

  new_node->prev = item;

  if (new_node->next != NULL)
    new_node->next->prev = new_node;
  else if (new_node->next == NULL)
    new_node->next = head;
}

/* Pseudocode
  printList(structure head){
    set struct temp pointer to head pointer
    while(temp!=null and visited member in temp != 1)
      print value member in temp
      set visited member in temp to 1
      set temp to next node
    clear all visits in nodes
    end
  }
*/

int printList(struct Item **head) {
  struct Item *temp = *head;
  while (temp != NULL && temp->visited != 1) {
    printf("%f\n", temp->value);
    temp->visited = 1;
    temp = temp->next;
  }
  printf("Cycle detected\n");
  clearVisits(head);
  return 0;
}

/*Pseudocode
  removeItem(struct head, pointer){
    set struct temp pointer to head pointer and prev pointer
    clear all visits in nodes
    if(temp != null and temp == pointer)
      set head pointer to next member in temp
      free temp
      end
    while(temp != null and temp != pointer and visited member in temp != 1) do
      set visited member in temp to 1
      set prev to temp
      set temp to next node
    if(temp == null)
      clear all visits in nodes
      end
    set next member in prev to to next member in temp
    clear all visits in nodes
    free temp
  }
*/

void removeItem(struct Item **head, void *pointer) {
  struct Item *temp = *head, *prev;
  clearVisits(head);
  if (temp != NULL && temp == pointer) {
    *head = temp->next;
    free(temp);
    return;
  }

  while (temp != NULL && temp != pointer && temp->visited != 1) {
    temp->visited = 1;
    prev = temp;
    temp = temp->next;
  }

  if (temp == NULL){
    clearVisits(head);
    return;
  }

  prev->next = temp->next;

  clearVisits(head);

  free(temp);
}

/*Pseudocode
  findMax(structure head){
    declare struct max pointer and temp pointer
    set temp to max to head pointer
    clear all visits in nodes
    while(temp != null and visited member in temp != 1) do
      if(value member in temp > value member in max)
        set max to temp
      set visited member in temp to 1
      set temp to next member in temp
    clear all visits in nodes
    return max value
  }
*/
float findMax(struct Item **head) {
  struct Item *max, *temp;

  temp = max = *head;

  clearVisits(head);

  while (temp != NULL && temp->visited != 1) {
    if (temp->value > max->value)
      max = temp;
    
    temp->visited = 1;
    temp = temp->next;
  }
  clearVisits(head);
  return max->value;
}

/*Pseudocode
  findMin(struct head){
    declare struct min pointer and temp pointer
    set temp to min to head pointer
    clear all visits in nodes
    while(temp != null and temp visited != 1) do
      if(temp value < min value)
        set min to temp
      set temp visited to 1
      set temp to next node
    clear all visits in nodes
    return min value
  }
*/

float findMin(struct Item **head) {
  struct Item *min, *temp;

  temp = min = *head;

  clearVisits(head);

  while (temp != NULL && temp->visited != 1) {
    if (temp->value < min->value)
      min = temp;

    temp->visited = 1;
    temp = temp->next;
  }
  clearVisits(head);
  return min->value;
}

/*Pseudocode
  size(struct head){
  declare struct current pointer and set to head
  declare and set i to 0
  while(current != null and current visited != 1) do
    i++
    set current visited to 1
    set current to next node
  clear all visits in nodes
  return i
  }
*/

int size(struct Item *head) {
  struct Item *current = head;
  int i = 0;
  while (current != NULL && current->visited != 1) {
    i++;
    current->visited = 1;
    current = current->next;
  }
  clearVisits(&head);
  return i;
}

/*Pseudocode
  isEmpty(struct head) {
    if(head == null)
      return 1
    return 0    
  }
*/

int isEmpty(struct Item *head) {
  return head == NULL;
}

/*Pseudocode
  next(item pointer, struct head) {
    clear all visits in nodes
    while(head != null and head visited != 1) do
      if(head == item)
        clear all visits in nodes
        return head next value
      set head to head next
    clear all visits in nodes
    end
  }
*/

float next(void *item, struct Item *head) {
  clearVisits(&head);
  while (head != NULL && head->visited != 1) {
    if (head == item){
      clearVisits(&head);
      return head->next->value;
      }
    head = head->next;
  }
  clearVisits(&head);
  return 0;
}

/*Pseudocode
  prev(item pointer, struct head pointer){
    clear all visits in nodes
    while(head != null and head visited != 1) do
      if(head == item)
        clear all visits in nodes
        return head prev value
    end
  }
*/

float prev(void *item, struct Item *head) {
  clearVisits(&head);
  while (head != NULL && head->visited != 1) {
    if (head == item){
      clearVisits(&head);
      return head->prev->value;
      }
    head = head->next;
  }
  return 0;
}

/*Pseudocode
  makeNull(struct head pointer) {
    declare struct temp pointer
    while(head != null) do
      set temp to head
      set head to head next
      free temp
  end
  }
*/

void makeNull(struct Item *head) {
  struct Item *temp;

  while (head != NULL) {
    temp = head;
    head = head->next;
    free(temp);
  }
}

```

Przypisanie NULL nie jest wymagane, ponieważ węzeł zawsze wskazuje inny węzeł.
Punkt początkowy można ustawić na dowolny węzeł.
Przejście od pierwszego węzła do ostatniego węzła jest szybkie.

## Złóżoność
Złożoność operacji wstawiania
Operacje wstawiania, które nie wymagają przejścia, mają złożoność czasową O(1). A wstawienie wymagające przejścia ma złożoność czasową O(n).
Złożoność przestrzeni wynosi O(1).

Złożoność operacji usuwania
Wszystkie operacje usuwania przebiegają ze złożonością czasową O(1). A złożoność przestrzeni wynosi O(1).
