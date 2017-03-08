
quick sort pseudo code

```
arr = [...]
N = length(arr)
# sort it
quick_sort(arr, 0, N)

func quick_sort(arr, left, right)
  if left >= right
    return
  pivot = partition(arr, left, right)

  quick_sort(arr, left, pivot - 1)
  # skip the pivot element
  quick_sort(arr, pivot + 1, right)

func partition(arr, left, right)
  # new pivot
  pivot = arr[left]

  # move all elements that less than pivot element to left
  # move all elements that greater than pivot element to the right
  while left < right
    while left < right and arr[right] >= pivot
      # process right
      right--
    if left < right
      # move to left
      arr[left] = arr[right]
      # increase left index, because current left index has the correct element.
      left++
    while left < right and arr[left] =< pivot
      left++
    if left < right
      arr[right] = arr[left]
      right--
  arr[left] = pivot
  return left
```
