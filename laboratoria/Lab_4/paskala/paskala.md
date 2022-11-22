```
paskal(n, k)
{
    if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
    return paskal(n - 1, k - 1) + paskal(n - 1, k);
}
```
