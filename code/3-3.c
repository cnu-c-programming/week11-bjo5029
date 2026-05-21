#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_str(const void *a, const void *b) {
  char *str_a = *(char **)a;
  char *str_b = *(char **)b;
  return strcmp(str_a, str_b);
}

int main(void) {
  char *words[] = {"banana", "apple", "ant", "orange"};
  int size = 4;
  int i;

  qsort(words, size, sizeof(char *), cmp_str);

  for (i = 0; i < size; i++) {
    printf("%s\n", words[i]);
  }

  return 0;
}