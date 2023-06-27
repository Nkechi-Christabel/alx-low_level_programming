#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The program generates random valid passwords
 * for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int rando, i, num;

	srand(time(NULL));

	for (i = 0, num = 2772; num > 122; i++)
	{
		random = (rand() % 125) + 1;
		printf("%c", random);
		num -= random;
	}

	printf("%c", num);

	return (0);
}
