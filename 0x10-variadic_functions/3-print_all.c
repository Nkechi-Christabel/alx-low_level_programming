#include <stdarg.h>
#include <stdio.h>
#include <ctype.h>

/**
 * print_all - The program prints anything
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	const char *ptr = format;
	char *next;
	va_list args;

	va_start(args, format);

	while (*ptr != '\0')
	{
		if (*ptr == 'c')
			printf("%c", va_arg(args, int));

		else if (*ptr == 'i')
			printf("%d", va_arg(args, int));

		else if (*ptr == 'f')
			printf("%f", va_arg(args, double));

		else if (*ptr == 's')
		{
			next = va_arg(args, char *);
			(next) ? next : (next = "(nil)");

			printf("%s", next);
		}

		if (*(ptr + 1) != '\0' && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f'))
			printf(", ");

		ptr++;
	}

	printf("\n");

	va_end(args);
}
