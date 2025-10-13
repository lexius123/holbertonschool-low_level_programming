#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/* 0. What's my name */
void print_name(char *name, void (*f)(char *));

/* 1. If you spend too much time... */
void array_iterator(int *array, size_t size, void (*action)(int));

/* 2. To hell with circumstances... */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
