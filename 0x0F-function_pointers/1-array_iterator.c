#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - callback function
 * @array: array
 * @size: array size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && size > 0)
	{
		for (i = array[0]; i < size; i++)
		{
			action(array[i]);
		}
	}
}
