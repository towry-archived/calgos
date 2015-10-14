
#include <iostream>

namespace search {
  int violentSearch (const char *, const char *);
}

int main () {
  const char *a = "A2J8FEGIKNOQ";
  const char *b = "8FE";

  int found = -1;
  found = search::violentSearch(a, b);

  if (found == -1) {
    std::cout << "Not found" << std::endl;
  } else {
    std::cout << "Found at: " << found << std::endl;
  }
}
