#include "sorting.h"

/**
 * swaping_ints - Swaping two integers in an array.
 * @first_int: The first integer to swap.
 * @second_int: The second integer to swap.
 */

void swaping_ints(int *first_int, int *second_int)
{
	int tmpr;

	tmpr = *first_int;
	*first_int = *second_int;
	*second_int = tmpr;
}

/**
 * selection_sorting - Sorting an array of integers in asc order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Printing the array after each swap.
 */
void selection_sorting(int *array, size_t size)
{
	int *min;
	size_t j, k;

	if (array == NULL || size < 2)
		return;

	for (j = 0; j < size - 1; j++)
	{
		min = array + j;
		for (k = j + 1; k < size; k++)
			min = (array[k] < *min) ? (array + k) : min;

		if ((array + j) != min)
		{
			swaping_ints(array + j, min);
			print_array(array, size);
		}
	}
}

