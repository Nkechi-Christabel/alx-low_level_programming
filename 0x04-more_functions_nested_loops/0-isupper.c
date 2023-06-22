#include "main.h"
#include <ctype.h>

/**
 * int _isupper - The program checks if the charater is uppercase or not.
 *
 * @c: The character to be checked.
 *
 * Return: Returns 1 or 0, depending on the char.
 */
int _isupper(int c)
{
	return (isupper(c) ? 1 : 0);
}
