#include <stdio.h>
#include <stdlib.h>

int cmp_asc(const void *a, const void *b) {
  int x = *(int *)a;
  int y = *(int *)b;

  if (x < y)
    return -1;
  if (x > y)
    return 1;
  return 0;
}

int cmp_desc(const void *a, const void *b) {
  int x = *(int *)a;
  int y = *(int *)b;

  if (x > y)
    return -1;
  if (x < y)
    return 1;
  return 0;
}

int main(void) {
  int arr_asc[] = {5, 2, 8, 1, 9, 3};
  int arr_desc[] = {5, 2, 8, 1, 9, 3};
  int size = 6;
  int i;

  qsort(arr_asc, size, sizeof(int), cmp_asc);

  for (i = 0; i < size; i++) {
    printf("%d ", arr_asc[i]);
  }
  printf("\n");

  qsort(arr_desc, size, sizeof(int), cmp_desc);

  for (i = 0; i < size; i++) {
    printf("%d ", arr_desc[i]);
  }
  printf("\n");

  return 0;
}