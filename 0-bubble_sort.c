#include "sorting.h"

/**
 * swaping_ints - Swaping two integers in an array.
 * @first_int: The first integer to swap.
 * @second_int: The second integer to swap.
 */
void swaping_ints(int *first_int, int *second_int)
{
	int tempr;

	tempr = *first_int;
	*first_int = *second_int;
	*second_int = tempr;
}

/**
 * bubble_sorting - Sort an array of integers in asc order.
 * @arr: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Printing the array after each swap.
 */
void bubble_sorting(int *arr, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (arr == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swaping_ints(arr + i, arr + i + 1);
				print_array(arr, size);
				bubbly = false;
			}
		}
		len--;
	}
}
