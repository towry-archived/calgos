#include <iostream>

namespace sort {
	// Make a tree's node is always bigger than the childs.
	void max_heapify(int arr[], int start, int end) {
		int parent = start;
		int son = parent * 2 + 1;
		int tmp = 0;

		while (son <= end) {
			// Compare the two childs first, then use the biggest to compare
			// with the parent.
			if (son + 1 <= end && arr[son] < arr[son + 1]) {
				son++;
			}

			// If parent is big than the biggest of the two childs,
			// just return.
			if (arr[parent] > arr[son]) {
				return;
			}

			// Swap the parent with child.
			tmp = arr[parent];
			arr[parent] = arr[son];
			arr[son] = tmp;

			// Continue with descendants.
			parent = son;
			son = parent * 2 + 1;
		}
	}

	void heapsort(int arr[], int len) {
		int i, tmp;

		// Start from the last parent node, make the first element the biggest.
		for (i = len / 2 - 1; i >= 0; i--) {
			max_heapify(arr, i, len - 1);
		}

		// Now the first element is the biggest.
		for (i = len - 1; i >= 0; i--) {
			// We move last unsorted one with the biggest.
			tmp = arr[0];
			arr[0] = arr[i];
			arr[i] = tmp;

			// Here we start sort before the sorted.
			max_heapify(arr, 0, i - 1);
		}
	}
}

// [1, 2, 3, 4, 5, 6, 7]
/*
   1
 2  3
4 5 6 7
*/
