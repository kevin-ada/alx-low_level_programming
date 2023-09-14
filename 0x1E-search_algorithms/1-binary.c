#include "search_algos.h"

/**
 *binary_search - Searches for a value in a sorted array
 *
 *@array: Pointer to the first element
 *
 *@size: number of elements in array
 *
 *@value: Value to search for
 *
 *Return: if value not present
 *Description:Prints a [sub]array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size -1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ",array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
