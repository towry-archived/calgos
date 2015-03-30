// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

#include "../include/sort.hpp"

namespace sort {
  void counting (int[], int);
}

int main () {
  int a[7] = {5, 4, 1, 12, 1, 4, 1};
  // random_array(a, 11);

  printer<int>(a, LENGTHOF(a));

  walltime::start();
  sort::counting(a, LENGTHOF(a));
  walltime::end();

  printer<int>(a, LENGTHOF(a));

  return 0; 
}
