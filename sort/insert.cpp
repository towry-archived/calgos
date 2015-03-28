// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

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
