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
