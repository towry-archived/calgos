// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

#include "../include/sort.hpp"

namespace sort {
	void bubble (int[], int);
}

int main () {
	int a[] = {3, 6, 2, 12, 5, 11};

  walltime::start();
	sort::bubble(a, LENGTHOF(a));
  walltime::end();

	printer<int>(a, LENGTHOF(a));

	return 0;	
}
