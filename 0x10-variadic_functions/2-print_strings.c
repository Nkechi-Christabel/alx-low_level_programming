#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - The program  prints strings, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of strings  passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *next_str;
	va_list str;

	va_start(str, n);


	for (i = 0; i < n; i++)
	{
		next_str = va_arg(str, char *);
		if (!next_str)
			next_str = "(nil)";

		printf("%s", next_str);

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
