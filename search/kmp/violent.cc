
#include <string.h>
#include <stdio.h>
#include <iostream>

namespace search {
  // straightforward algorithm
  // param s1 is the string being searched
  // param s2 is the word being searched
  int violentSearch (const char *s1, const char *s2) {
    int ls1 = strlen(s1);
    int ls2 = strlen(s2);

    int i = 0, j = 0;

    while (i < ls1 && j < ls2) {
      if (s1[i] == s2[j]) {
        i++;
        j++;
      } else {
        i = i - j + 1;
        j = 0;
      }
    }

    if (j == ls2) {
      return i - j;
    } 

    return -1;
  }
}
