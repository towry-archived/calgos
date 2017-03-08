
```
arr = [...]
N = length(arr)

for i from 0 to N - 1
	min = arr[i]

	# select the minimal in each loop
	for j from i+1 to N
		if min > arr[j]
			min = arr[j]
	swap(min, arr[i]) if min != arr[i]
```
