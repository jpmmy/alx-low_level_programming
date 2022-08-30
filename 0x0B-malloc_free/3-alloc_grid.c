#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - a function that returns a pointer to 2 dimensional array
 *@width:param 1
 *@height:param 2
 *Return: returns a pointer to 2d array.
 */
int **alloc_grid(int width, int height)
{
	int i, j, w, h;
	int **ptr;

	w = width;
	h = height;
	if (w <= 0 || h <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(h * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < h; j++)
	{
		ptr[j] = (int *)malloc(w * sizeof(int));
		if (ptr[j] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
