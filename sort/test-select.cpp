// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

#include "../include/printer.hpp"
#include "../include/array.hpp"

namespace sort {
  void select (int[], int);
}

int main () {
  int test[] = {3, 6, 2, 12, 5, 11};

  sort::select(test, LENGTHOF(test));

  printer<int>(test, LENGTHOF(test));

  return 0;
}
