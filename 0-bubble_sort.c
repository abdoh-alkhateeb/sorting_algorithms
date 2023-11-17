#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble Sort algorithm.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i;
	bool swapped;

	do {
		swapped = false;

		for (i = 0; i < size - 1; i++)
		{
			if (array[i + 1] < array[i])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;

				swapped = true;

				print_array(array, size);
			}
		}
	} while (swapped);
}
