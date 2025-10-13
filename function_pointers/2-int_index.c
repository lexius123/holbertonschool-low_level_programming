#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: number of elements in the array
 * @cmp: pointer to the function to use for comparison
 *
 * Return: index of the first element that matches, or -1 if none
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
