// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

namespace sort {

  void select (int array[], int length) {
    int i, j, m;

    for (i = 0; i < length; i++) {
      m = array[i];

      for (j = i; j < length; j++) {
        if (array[j] < m) {
          m = array[j];
        }
      }

      if (array[i] > m) {
        array[i] = m;
      }
    }
  }
}
