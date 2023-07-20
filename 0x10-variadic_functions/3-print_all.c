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

	while (ptr && *ptr)
	{
		switch (*ptr)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			next = va_arg(args, char *);
			if (!next)
				next = "(nil)";

			printf("%s", next);
			break;
		default:
			ptr++;
			continue;
		}
		if (*ptr)
			printf(", ");

		ptr++;
	}

	printf("\n");
	va_end(args);
}
