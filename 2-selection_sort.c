#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection Sort algorithm.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 */
void selection_sort(int *array, size_t size)
{
	if (array != NULL && size >= 2)
	{
		size_t i, j;
		int temp;

		for (i = 0; i < size; i++)
			for (j = i + 1; j < size; j++)
				if (array[j] < array[i])
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
	}
}
