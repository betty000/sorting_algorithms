#include "sort.h"

/**
 * swap - swaps two numbers
 * @num1: first number
 * @num2: second number
 */
void swap(int *num1, int *num2)
{
	int tmp;

	tmp = *num1;
	*num1 = *num2;
	*num2 =  tmp;
}

/**
 * selection_sort - sorts an array in ascending order
 * by selects the smallest element from an unsorted list
 * in each iteration and places that element at the beginning
 * of the unsorted list
 *
 * @array: array of integer
 * @size: number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			swap(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
