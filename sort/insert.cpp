// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

/*

Set i = 1
Set arr[]
While i < the length of arr
  i += 1
  // current i is the unsorted one.
  Set j = last index of sorted part
  While j >= 0
    j -= 1
    If current unsorted one is less than it's former
      swap the position of current unsorted one with it's former
    Else
      break
*/

#include "../include/sort.hpp"

namespace sort {

  void insert (int array[], int length) {
    int i, j, c;

    for (i = 1; i < length; i++) {
      c = i; // unsorted one
      for (j = i - 1; j >= 0; j--) {
        if (array[c] < array[j]) {
          swap<int>(array, c, j);
          c = j;
        } else {
          break;
        }
      }
    }
  }
}
