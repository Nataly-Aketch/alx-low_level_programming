#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * allo_grid - prints a 2D array of in
 * @width: array width
 * @height: array height
 * Return: pointer to a 2D array of int or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	if ((width * height) <= 0)
		return NULL;
	alloc_grid = (int **)malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
		alloc_grid[i] = (int *)malloc(height * sizeof(int));

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			alloc_grid[i][j] = 0;
	}
	return (alloc_grid[i][j]);
}
void print_grid(int **grid, int width, int height)
{
	    int w;
	        int h;

		    h = 0;
		        while (h < height)
				    {
					            w = 0;
						            while (w < width)
								            {
										                printf("%d ", grid[h][w]);
												            w++;
													            }
							            printf("\n");
								            h++;
									        }   
}

/**
 *  * main - check the code for ALX School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    int **grid;

	        grid = alloc_grid(6, 4);
		    if (grid == NULL)
			        {
					        return (1);
						    }
		        print_grid(grid, 6, 4);
			    printf("\n");
			        grid[0][3] = 98;
				    grid[3][4] = 402;
				        print_grid(grid, 6, 4);
					    return (0);
}
