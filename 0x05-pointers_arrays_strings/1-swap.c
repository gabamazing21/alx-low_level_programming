/**
 * swap_int - it swap pointer content
 * @a: pointer to be swapped
 * @b: pointer to be swapped
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
