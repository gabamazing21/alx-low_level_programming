#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/**
  * crackme - it crack word
  * @N: input int
  */
void crackme(int N)
{
	int i = 0;
	int randomizer = 0;

	srand((unsigned int) (time(NULL)));
	char numbers[] = "01234567890";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&*?";
	char password[N];

	randomizer = rand() % 4;
	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);

		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);

		}
	}
}
/**
  * main - it run the code
  * Return: always return zero
  */
int main(void)
{
	int u;

	u = 10;
	crackme(u);
	return (0);
}
