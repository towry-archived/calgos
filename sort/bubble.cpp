// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

#include "../include/sort.hpp"

namespace sort {

  void bubble (int array[], int length) {
    int swaped;
    int tmp;

    do {
      swaped = false;

      for (int i = 1; i < length; i++) {
        if (array[i-1] > array[i]) {
          swap<int>(array, i, i-1);
          
          swaped = true;
        }
      }
    } while (swaped);
  }

}
