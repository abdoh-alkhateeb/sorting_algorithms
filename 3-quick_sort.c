#include "sort.h"

/**
 * partition - Partitions the array for the Quick Sort algorithm.
 *
 * @array: Pointer to the array to be partitioned.
 * @lo: Lower bound index of the partition.
 * @hi: Upper bound index of the partition.
 * @s: Size of the array.
 *
 * Return: The index of the pivot element after partitioning.
 */
size_t partition(int *array, size_t lo, size_t hi, size_t s)
{
	size_t j;
	int i, temp, pivot = array[hi];

	for (i = lo - 1, j = lo; j < hi; j++)
		if (array[j] < pivot)
			if (array[++i] != array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;

				print_array(array, s);
			}

	if (array[++i] != array[hi])
	{
		temp = array[i];
		array[i] = array[hi];
		array[hi] = temp;

		print_array(array, s);
	}

	return ((size_t)i);
}

/**
 * rec_quick_sort - Sorts an array of integers in ascending order
 * using the Quick Sort algorithm recursively.
 *
 * @array: Pointer to the array to be sorted.
 * @lo: Lower bound index of the array or partition.
 * @hi: Upper bound index of the array or partition.
 * @s: Size of the array.
 */
void rec_quick_sort(int *array, int lo, size_t hi, size_t s)
{
	if (lo < (int)hi && lo >= 0)
	{
		size_t p = partition(array, lo, hi, s);

		rec_quick_sort(array, lo, p - 1, s);
		rec_quick_sort(array, p + 1, hi, s);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 * using the Quick Sort algorithm.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL && size >= 2)
		rec_quick_sort(array, 0, size - 1, size);
}
