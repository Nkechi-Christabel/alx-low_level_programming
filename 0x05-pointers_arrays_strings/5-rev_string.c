#include "main.h"
#include <string.h>

/**
 * rev_string - The program reverses a string,
 * @s: The string to be reversed
 *
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = strlen(s) - 1, j = 0; j < i; j++, i--)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;


	}
}
