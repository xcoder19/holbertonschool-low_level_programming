#include "variadic_functions.h"
/**
 * print_strings - print string args
 * @separator: separator
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s", "(nil)");
		}
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
