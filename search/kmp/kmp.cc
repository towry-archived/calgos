
#include <string.h>

namespace search {

  // create partial match table
  static int* initializeTable (const char *s) {
    int sl = strlen(s);
    int *table = new int[sl];

    int i = 2, j = 0;
    table[0] = -1; 
    table[1] = 0;

    while (i < sl) {
      if (s[i - 1] == s[j]) {
        j = j + 1;
        table[i] = j;
        i = i + 1;
      } else if (j > 0) {
        j = table[j];
      } else {
        table[i] = 0;
        i = i + 1;
      }
    }

    return table;
  }

  // http://qr.ae/R4TC5i
  // s2 is the word being searched
  int kmpSearch (const char *s1, const char *s2) {
    int ls1 = strlen(s1);
    int ls2 = strlen(s2);
    int i = 0, j = 0;

    int *table = initializeTable(s2);

    while (i < ls1 && j < ls2) {
      if (j == -1 || s1[i] == s2[j]) {
        i++;
        j++;
      } else {
        j = table[j];
      }
    }

    if (table) {
      delete[] table;
    }

    if (j == ls2) {
      return i - j;
    } 

    return -1;
  }
}
