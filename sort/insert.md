
below is the dumbest solution, but it is the solution that make me understand clearly how insert sort works.

```
arr = [...]
N = length(arr)

for i from 1 to N
	# select on from unsorted
	for j from 0 to i
		# insert into the sorted
		if arr[i] < arr[j]
			# insert
			swap(arr[i], arr[j])
			# decrease because the unsorted index is not changed.
			i--
			break
```
