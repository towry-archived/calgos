// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

#include "../include/sort.hpp"

namespace sort {
  void quick (int[], int);
}

int main () {
  int a[11];
  random_array(a, 11);

  printer<int>(a, LENGTHOF(a));

  walltime::start();
  sort::quick(a, LENGTHOF(a));
  walltime::end();

  printer<int>(a, LENGTHOF(a));

  return 0; 
}
