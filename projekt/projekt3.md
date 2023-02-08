## Praca wykonal [Dominik Jakubovskis]

## Projekt do przedmiotu "Algorytmy i struktury danych"

## Data 2023-02-01

# Algorytm przechodzenia przez listę cykliczną listę jednokierunkową

Lista cykliczna (ang. Circular Linked List) jest listą w której nie jest wyróżniony element początkowy, ani końcowy. Każdy element ma swojego następcę i poprzednika. Listy takie można konstruować jako jedno lub dwukierunkowe. Liniowa lista jednokierunkowa może zostać przekształcona w listę cykliczną poprzez zapisanie w polu wskaźnikowym jej ostatniego elementu adresu elementu pierwszego. Podobne operacje pozwalają zamienić dwukierunkową listę liniową w listę cykliczną.

W cyklicznej liście pojedynczo połączonej ostatni węzeł listy zawiera wskaźnik do pierwszego węzła listy. Możemy mieć okrągłą listę pojedynczo połączoną, jak również okrągłą listę podwójnie połączoną.

Przechodzimy przez cykliczną pojedynczo połączoną listę, aż dotrzemy do tego samego węzła, w którym zaczęliśmy. Okrągła lista pojedynczo lubianych nie ma początku ani końca. W następnej części żadnego z węzłów nie ma wartości null.


Wejście:
head	 – 	zmienna zawierająca adres punktu wejścia do listy cyklicznej
Wyjście:
Przejście przez wszystkie elementy listy od pierwszego do ostatniego

Dane pomocnicze:
p	 – 	wskazanie elementu listy

### Lista kroków
K01:	p ← head	
K02:	Jeśli p  = nil,
to zakończ
K03:	    Przetwarzaj element wskazywany przez p	 
K04:	    p  ← ( p→next  )	
K05:	Jeśli p  ≠ head,
to idź do kroku K03
K06:	Zakończ

Poniższy obraz przedstawia cykliczną pojedynczo połączoną listę.
![image](https://user-images.githubusercontent.com/47005404/216130437-67557c0b-d47d-482a-8c7a-2102f2c8c2be.png)

### Pseudokod
```
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
```


### Program
[przejdz](https://github.com/dom4ix/Algorytmy_i_Struktury_danych/blob/main/projekt/projekt3.c)

Przypisanie NULL nie jest wymagane, ponieważ węzeł zawsze wskazuje inny węzeł.
Punkt początkowy można ustawić na dowolny węzeł.
Przejście od pierwszego węzła do ostatniego węzła jest szybkie.

### Złóżoność czasowa
Złożoność operacji wstawiania
Operacje wstawiania, które nie wymagają przejścia, mają złożoność czasową O(1). A wstawienie wymagające przejścia ma złożoność czasową O(n).
Złożoność przestrzeni wynosi O(1).

Złożoność operacji usuwania
Wszystkie operacje usuwania przebiegają ze złożonością czasową O(1). A złożoność przestrzeni wynosi O(1).

### Zródła
https://www.programiz.com/
