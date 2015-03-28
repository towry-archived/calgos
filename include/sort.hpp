// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

#ifndef _INCLUDE_SORT_HPP
#define _INCLUDE_SORT_HPP

#include "printer.hpp"
#include "array.hpp"
#include "swap.hpp"
#include "walltime.hpp"

#include <time.h>
#include <stdlib.h>

namespace {
  void random_array (int *a, int length) {
    int i = 0;

    srand(time(0));

    for (i = 0; i < length; i++) {
      a[i] = rand() % 100 + 1;
    }
  }
}

#endif
