```
wyrazN(a1, q, n) {
  if (n == 1) {
  return a1
  } else {
    return q * wyrazN(a1, q, n - 1)
}
```
