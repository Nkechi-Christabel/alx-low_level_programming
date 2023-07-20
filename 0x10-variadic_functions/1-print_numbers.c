#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - The program prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);


	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(nums, unsigned int));

		if (separator)
			printf("%s", separator);
	}

	printf("%d\n", va_arg(nums, unsigned int));

	va_end(nums);
}
