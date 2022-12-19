# Sortowanie przez radix Sort
```
radix(arr, max) {
	for (j = 1; j < max; j++) {
	count[10] = {0}
	for (i = 0; i < n; i++) {
	count[key of (arr[i] in pass j)]++
    }
    	for (k = 0; k < 10; k++) {
	count[k] = count[k] + count[k - 1]
    }
    	for (i = n - 1; i > 0; i--) {
	result[ count[key of (arr[i])] ] = arr[j]
    	count[key of (arr[i])]--
    }
    	for (i = 0; i < n; i++)
	arr[i] = result[i]
  }
}
```
