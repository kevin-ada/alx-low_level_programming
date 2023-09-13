#ifndef SEARCH_H
#define SEARCH_H

#include <stdio.h>

/* Prototypes to the functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t i, size_t size);

#endif
