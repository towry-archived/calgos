// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

#include "../include/sort.hpp"

namespace sort {

  static void _merge (int array[], int low, int mid, int high) {
    int i, j;
    int *tmp = new int[high - low + 1];
    int n = 0;

    i = low;
    j = mid + 1;

    while (i <= mid && j <= high) {
      if (array[i] <= array[j]) {
        tmp[n++] = array[i++];
      } else {
        tmp[n++] = array[j++];
      }
    }

    while (i <= mid) {
      tmp[n++] = array[i++];
    }

    while (j <= high) {
      tmp[n++] = array[j++];
    }

    for (i = 0; i < n; i++) {
      array[low++] = tmp[i];
    }
    
    delete[] tmp;
  }

  void merge (int array[], int length) {
    int seg = 1;
    int index;

    while (seg < length) {
      index = 0;
      
      while (index <= length - seg * 2) {
        _merge(array, index, index + seg - 1, index + seg * 2 - 1);
        index += seg * 2;
      }

      if (index + seg < length) {
        _merge(array, index, index + seg - 1, length -1);
        index += seg * 2;
      }

      seg += seg;
    }
  } // end merge function
}
