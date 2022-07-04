#include "variadic_functions.h"
/**
 * print_numbers - print all int args
 * @separator: separator
 * @n: number of params
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(ap, int));
		if (separator != NULL)
		{
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	putchar('\n');
	va_end(ap);
}
