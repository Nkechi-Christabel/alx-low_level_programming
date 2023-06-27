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
	int password[64], sum = 0, i;

	srand(time(NULL));

	for (i = 0; i < 63; i++)
	{
		password[i] = rand() % 78;
		sum += password[i] + ' ';
		printf("%c", password[i] + ' ');
	}

	password[63] = 2772 - sum;
	printf("%c\n", password[63] + ' ');

	return (0);
}
