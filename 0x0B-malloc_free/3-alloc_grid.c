#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **wee;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	wee = malloc(sizeof(int *) * height);

	if (wee == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		wee[m] = malloc(sizeof(int) * width);
		if (wee[m] == NULL)
		{
			for (m = 0; m < height; m++)
				free(wee[m]);

			free(wee);
			return (NULL);
		}


	for (n = 0; n < height; n++)
	{
		for (n = 0; n < width; n++)
			wee[m][n] = 0;
	}
	}
	return (wee);
}
