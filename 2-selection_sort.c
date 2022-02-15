#include "sort.h"

/**
 *selection_sort - sorts an array of integers in ascending
 *order using the Selection sort algorithm
 *@array: random number array
 *@size: array size
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b, now, tmp;

	for (a = 0; a < size - 1; a++)
	{
		now = a;
		for (b = a + 1; b < size; b++)
			if (array[b] < array[now])
				now = b;

		if (now != a)
		{
			tmp = array[a];
			array[a] = array[now];
			array[now] = tmp;
			print_array(array, size);
		}
	}
}
