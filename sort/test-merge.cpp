// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

#include "../include/sort.hpp"

namespace sort {
  void merge (int[], int);
}

int main () {
  int a[11];
  random_array(a, 11);

  printer<int>(a, LENGTHOF(a));

  walltime::start();
  sort::merge(a, LENGTHOF(a));
  walltime::end();

  printer<int>(a, LENGTHOF(a));

  return 0; 
}
