// Copyright 2015 Towry Wang (http://towry.me)
// Under MIT License

#include "../include/sort.hpp"

namespace sort {

  int partition (int *arr, int left, int right) {
    int pivot = arr[left];
    int tmp;

    while (left < right) {
      while (left < right && arr[right] >= pivot)
        right--;
      if (left < right) {
        arr[left++] = arr[right];
      }
      while (left < right && arr[left] <= pivot)
        left++;
      if (left < right) {
        arr[right--] = arr[left];
      }
    } // endwhile
    arr[left] = pivot;
    
    return left;
  }

  void quick_sort (int *array, int left, int right) {
    if (right - left <= 0) {
      return;
    }

    int pivot;

    pivot = partition(array, left, right);
    // leave the pivot where it was
    quick_sort(array, left, pivot - 1);
    quick_sort(array, pivot + 1, right);
  }

  void quick (int *array, int length) {
    quick_sort(array, 0, length-1);
  }
}
