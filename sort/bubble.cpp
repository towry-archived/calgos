// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

namespace sort {

  void bubble (int array[], int length) {
    int swaped;
    int tmp;

    do {
      swaped = false;

      for (int i = 1; i < length; i++) {
        if (array[i-1] > array[i]) {
          tmp = array[i];

          array[i] = array[i-1];
          array[i-1] = tmp;
          swaped = true;
        }
      }
    } while (swaped);
  }

}
