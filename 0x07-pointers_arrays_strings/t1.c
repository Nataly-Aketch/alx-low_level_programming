#include <stdio.h>
int main()
{
	int arr[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int i, j, sum = 0, sum1 = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
			{
				sum += arr[i][j];
			}
			if ((i + j) == (3 - 1))
			{
				sum1 += arr[i][j];
			}
		}
	}
	printf("%d %d", sum, sum1);
	printf("\n");
}
