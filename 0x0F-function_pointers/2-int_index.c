#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: array length
 * @cmp: function pointer to be used to compare values
 * Return: index of first element for which cmp does
 * not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				if (i)
					return (i);
				else
					return -1;
			}
		}
	}
	return (0);
}
