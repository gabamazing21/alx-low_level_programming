#include "main.h"
int sqrt_helper(int n, int guess);
/**
  * _sqrt_recursion - find square root of number
  * @n: int to sqauroot
  * Return: sqrt
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 1));
}
/**
  * sqrt_helper - take sqrt
  * @n: int to check
  * @guess: one
  * Return: return ans
  */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (sqrt_helper(n, guess + 1));
}

