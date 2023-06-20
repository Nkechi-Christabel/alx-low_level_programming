#include "main.h"
#include <ctype.h>

/**
 * _islower - The program checks if the charater is lowercase or not.
 *
 * Return: Returns 1 or 0, depending on the char.
 */
int _islower(int c)
{
	return islower(c) ? 1 : 0;
}
