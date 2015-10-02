// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

namespace sort {

  void counting (int *arr, int length) {
    int i, j, k;

    for (i = 0; i < length; i++) {
      if (arr[i] >= 100) {
        return;
      }
    }

    int *count_arr = new int[100]();
    int *sorted_arr = new int[length]();

    // example
    // 5, 4, 1, 12, 1, 4, 1
    // 00 01 02 03 04 05 06 07 08 09 10 11 12 13
    //  0  3  0  0  2  1  0  0  0  0  0  0  1
    for (i = 0; i < length; i++) {
      count_arr[arr[i]]++;
    }
    //  0  3  3  3  5  6  6  6  6  6  6  6  7
    for (k = 1; k < 100; k++) {
      count_arr[k] += count_arr[k-1];
    }

    for (j = length; j > 0; j--) {
      sorted_arr[count_arr[arr[j-1]]-1] = arr[j-1];
      // this is important
      count_arr[arr[j-1]]--;
    }

    for (j = 0; j < length; j++) {
      arr[j] = sorted_arr[j];
    }

    delete[] count_arr;
    delete[] sorted_arr;
  }
}
