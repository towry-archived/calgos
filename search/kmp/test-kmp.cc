
#include <iostream>

namespace search {
  int kmpSearch (const char *, const char *);
}

int main () {
  const char *a = "A2J8FEGIKNOQ";
  const char *b = "OQ";

  int found = -1;

  found = search::kmpSearch(a, b);

  if (found == -1) {
    std::cout << "Not found" << std::endl;
  } else {
    std::cout << "Found at: " << found << std::endl;
  }
}
