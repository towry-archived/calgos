// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

#include "../include/sort.hpp"

namespace sort {

  void select (int array[], int length) {
    int i, j, m, tmp;

    for (i = 0; i < length; i++) {
      m = i;

      for (j = i+1; j < length; j++) {
        if (array[j] < array[m]) {
          m = j;
        }
      }

      if (array[i] > array[m]) {
        swap<int>(array, i, m);
      }
    }
  }
}
