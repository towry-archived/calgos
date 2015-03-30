// Copyright 2015 Towry Wang (http://towry.me)
// Under MIT License

namespace sort {

  // pow for integer
  static inline int ipow (int base, int exp) {
    int r = 1;
    while (exp) {
      if (exp & 1)
        r *= base;
      exp >>= 1;
      base *= base;
    }

    return r;
  }

  // Return the nth bit of number
  // for example: 9283, the 2th is 8 and the 4th is 9
  static inline int bit (int num, int n) {
    return (num % (ipow(10, n)) - num % (ipow(10, n-1))) / ipow(10, n-1);
  }

  int radix_test_bit (int num, int n, int expect) {
    int result = bit(num, n);
    if (expect == result) {
      return 1;
    } else {
      return 0;
    }
  }

  void radix (int *arr, int length) {
    
    // create the buckets
    int **bucket = new int*[10];
    for (int i = 0; i < 10; i++) {
      bucket[i] = new int[length]();
      for (int ii = 0; ii < length; ii++) {
        bucket[i][ii] = -1;
      }
    }

    int _continue = true;
    int _bits = 1;
    int number;
    int max = 1;

    while (_continue) {
      _continue = false;
      max = max * 10;

      for (int j = 0; j < length; j++) {
        number = bit(arr[j], _bits);

        if (!_continue && arr[j] >= max) {
          _continue = true;
        }

        // put the arr[j] in correct position
        for (int jj = 0; jj < length; jj++) {
          if (bucket[number][jj] != -1) {
            continue;
          } else {
            bucket[number][jj] = arr[j];
            break;
          }
        } // endfor
      } // endfor

      // after we put the numbers in bucket
      // put it back to arr
      int index = 0;
      for (int j = 0; j < 10; j++) {
        for (int jj = 0; jj < length; jj++) {
          if (bucket[j][jj] == -1) {
            break;
          } else {
            arr[index++] = bucket[j][jj];
            bucket[j][jj] = -1;
          }
        }
      }

      _bits++;

    } // endwhile

    // free up the buckets
    for (int i = 0; i < 10; i++) {
      delete[] bucket[i];
    }
    delete[] bucket;
  }
}
