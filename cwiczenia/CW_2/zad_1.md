Zadanie 1
# Zadanie 1
## pseudocod Factorial

```
Pobierz(n){ // otszymujemy faktorial napszyklad 3
Factorial(n){
    factorial = 1.0; // jes ruwne jednemu poniewaz mnozenie przez 0 nic nieda
    factorial = 1.0 
    
    i=1 // jest ruwne jednemu poniewaz mnoxenie przez 0 nic nieda
    i=1 
    while (i<=n) // gdy n=3 pszejszi 3 iteracji
    while (i<=n) 
    {
        factorial *= i; // factorial^3 bendzie ruwny 6
        i++; // zwienka mnoznik faktorialu
        factorial *= i 
        i++ 
    }
    
    return factorial; //zwraca faktorial
    return factorial 
}
```

// gdy n=3 3!=3*2*1*1 my mozemy jego pszewrucic i nic sie nie zmieni 1*1*2*3=3!
// poniewaz faktorial musi byc wienkszy od zera factorial=1 i ciong "i" jest i=1
// "i" so krokami a faktorial poczontkowal liczba i na pierwszym kroku my
// mnozymy 1*1 zatym nastempnym krokiem mnozymy na 2 i  ostatnim krokiem 
// mnozymy na 3. 1*1*2*3=6 tak samo jak i 3!=6 to muwi nam otym ze ten pseudo 
// kod jest prawidlowy
# Udowodnienie

## indukcja matematyczna 

<img width="674" alt="image" src="https://user-images.githubusercontent.com/115026306/197411917-2c1d24eb-e4ea-4476-ac86-d62b28a6cc53.png">

<img width="674" alt="image" src="https://user-images.githubusercontent.com/115026306/197411930-d585e9d9-1223-400c-a267-676f0af42c6f.png">

<img width="673" alt="image" src="https://user-images.githubusercontent.com/115026306/197411969-bbf9cb36-ffad-4e10-936b-3f768d5704ee.png">

```
Stąd wychodzi że algorytm liczy cześciowo poprawnie i  jest całkowicie poprawny z udowodnienia przez matematyczna indukcji.
```


