
#include "../include/sort.hpp"
#include "bucket.hpp"

int main() {
	float a[] = { 0.82, 0.91, 0.22, 0.12, 0.42, 0.93, 0.33 };

	walltime::start();
	sort::bucket(a, LENGTHOF(a));
	walltime::end();

	printer<float>(a, LENGTHOF(a));

	return 0;
}
