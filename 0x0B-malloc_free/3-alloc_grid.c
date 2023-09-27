#include "main.h"
/**
 * alloc_grid - create 2d array with memeory
 * @width: width
 * @height: height
 * Return: pointer to the int
 */
int **alloc_grid(int width, int height)
{
	int** d;
	int i, j;

	d = malloc(sizeof(int *) * width);
	if (d == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < (width); i++)
		d[i] = malloc(sizeof(int) * height);
	for (i = 0; i < width; i++)
		for (j = 0 ; j < height; j++)
			d[i][j] = 0;
	return (d);
}
