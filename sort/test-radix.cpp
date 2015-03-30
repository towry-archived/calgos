// Copyright 2015 Towry Wang (http://towry.me)
// Under MIT License

#include "../include/sort.hpp"

namespace sort {
  void radix (int[], int);
}

int main () {
  int a[11];
  random_array(a, 11);

  printer<int>(a, LENGTHOF(a));

  walltime::start();
  sort::radix(a, LENGTHOF(a));
  walltime::end();

  printer<int>(a, LENGTHOF(a));

  return 0; 
}
