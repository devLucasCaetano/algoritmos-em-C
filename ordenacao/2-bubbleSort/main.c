#include <stdio.h>
#include <stdlib.h>

#include "bubbleSort.h"

#define DEBUG 1

void printArray(int *v, int n) {
  for (int i = 0; i < n; i++) {
    printf(" %d ", v[i]);
  }
  printf("\n");
}

int *VetorAleatorio(int n, int seed, int max) {
  srand(seed);
  int *v = malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    v[i] = (rand() % max) + 1;
  }
  return v;
}

int main(int argc, char **argv) {
  int n = atoi(argv[1]);
  int *v = VetorAleatorio(n, 99, n * 100);

#ifdef DEBUG
  printArray(v, n);
#endif

  bubbleSort(v, n);

#ifdef DEBUG
  printArray(v, n);
#endif

  free(v);

  return 0;
}