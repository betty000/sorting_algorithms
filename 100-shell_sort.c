#include "sort.h"
/**
 * shell_sort -The function takes an array and its size as parameters,
 * and sorts the array using the Shell sort algorithm
 *
 * @array: The array to be sorted
 * @size: The size of the array
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int tmp;

	if (!array || size < 2)
		return;
	while (gap < size / 3)
		gap = gap * 3 + 1;
	while (gap)
	{
		for (j = gap; j < size; j++)
		{
			tmp = array[j];
			for (i = j; i >= gap && array[i - gap] > tmp; i -= gap)
			{
				array[i] = array[i - gap];
			}
			array[i] = tmp;
		}
		print_array(array, size);
		gap /= 3;
	}
}
