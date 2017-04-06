#include "../include/sort.hpp"

namespace sort {
	void heapsort(int arr[], int len);
}

int main () {
	int arr[] = {1, 5, 10, 32, 23, 11, 888, 103, 44, 62};
	int len = 10;

	walltime::start();
	sort::heapsort(arr, len);
	walltime::end();

	printer<int>(arr, len);

}

