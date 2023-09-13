#include "search_algos.h"

/**
 * print_array - print all elements
 * @array: list of elems
 * @i: index
 * @size:size of the array
 */

void print_array(int *array, size_t i, size_t size)
{
	printf("Searching in array: ");

	while (i < size)
	{
		if (i + 1 == size)
			printf("%d ", array[i]);
		else
			printf("%d ", array[i]);
		i++;
	} printf("\n");
}

/**
 * binary_search - search algo in a string
 *
 *@array: list of elements
 *
 * @size: size of list
 *
 * @value:target to search
 *
 *Return: element index on success
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, half = 0;

	if (array == NULL || value == 0)
		return (-1);
	print_array(array, low, size);
	while (low < high)
	{
		half = (low + high) / 2;
		if (array[half] < value)
		{
			low = half + 1;
			print_array(array, low, high + 1);
		}
		else if (array[half] > value)
		{
			high = half - 1;
			print_array(array, low, high + 1);
		}
		else
			return (array[half]);
	}
	return (-1);
}
