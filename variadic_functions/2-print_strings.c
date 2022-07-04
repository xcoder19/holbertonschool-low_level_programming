#include "variadic_functions.h"
/**
 * print_strings - print string args
 * @separator: separator
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (va_arg(ap, char *) != NULL)
			{
				printf("%s", va_arg(ap, char *));
				if (i < n - 1)
				{
					printf("%s", separator);
				}
			}
			else
			{
				printf("%s", "(nil)");
				if (i < n - 1)
				{
					printf("%s", separator);
				}
			}
		}
		else
		{
			if (va_arg(ap, char *) != NULL)
			{
				printf("%s", va_arg(ap, char *));
			}
			else
			{
				printf("%s", "(nil)");
			}
		}
	}
	putchar('\n');
	va_end(ap);
}
