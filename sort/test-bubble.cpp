// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

#include "../include/printer.hpp"

namespace sort {
	void bubble (int[], int);
}

int main () {
	int a[] = {3, 6, 2, 12, 5, 11};

	sort::bubble(a, LENGTHOF(a));

	printer<int>(a, LENGTHOF(a));

	return 0;	
}
