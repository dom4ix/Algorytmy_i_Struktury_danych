Min albo Maks

```
MinMax(tabela, ilosc){
  min = tabela[0]
  max = tabela[0]
  
  for(i = 0; i < ilosc; i++){
    if(min > tabela[i]){
      min = tabela[i]
    }
    if(max < tabela[i]){
      max = tabela[i]
    }
  }
  
  minmax[]={min,max}
  
  return minmax
}
```
