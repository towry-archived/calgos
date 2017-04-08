// bucket sort.

#include <iostream>
#include <vector>

namespace sort {
	template<class T>
	void bucket(T arr[], int length) {
		// Create buckets.
		// Use array of vector here.
		std::vector<T> *v = new std::vector<T>[length];
		int i = 0;
		int basis;
		int concat_index = 0;

		// Insert array element to buckets.
		for (; i < length; i++) {
			basis = length * arr[i];
			v[basis].push_back(arr[i]);
		}

		// Sort individual bucket.
		for (i = 0; i < length; i++) {
			std::sort(v[i].begin(), v[i].end());
		}

		// Concate all elements in buckets.
		for (i = 0; i < length; i++) {
			for (size_t j = 0; j < v[i].size(); j++) {
				arr[concat_index] = v[i][j];
				concat_index += 1;
			}
		}

		delete[] v;
	}
}
