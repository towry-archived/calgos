
#ifndef _INCLUDE_PRINTER_HPP
#define _INCLUDE_PRINTER_HPP

#include <iostream>

template <typename T>
inline void printer (T *source, int length) {
	int i;

	for (i = 0; i < length; i++) {
		std::cout << source[i] << " ";
	}
	std::cout << "\n";
}

#endif
