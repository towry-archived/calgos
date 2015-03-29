// Copyright 2015 Towry Wang (http://towry.me)
// Under MIT License

#include "../include/sort.hpp"

namespace sort {

  void quick_sort (int *array, int left, int right) {
    if (right - left <= 0) {
      return;
    }
    
    int tmp, l, k, p;

    l = right - left + 1;
    p = left;
    k = p + 1;

    for (int j = p+1; j < l; j++) {
      if (array[j] < array[p]) {
        tmp = array[j];
        array[j] = array[k];
        array[k] = tmp;
        k++;
      }
    }

    tmp = array[p];
    array[p] = array[k-1];
    array[k-1] = tmp;

    // leave the pivot where it was
    quick_sort(array, left, k-2);
    quick_sort(array, k, right);
  }

  void quick (int *array, int length) {
    quick_sort(array, 0, length-1);
  }
}
