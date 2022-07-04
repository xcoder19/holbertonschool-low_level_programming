#include "variadic_functions.h"
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{

			printf("%s%s", va_arg(ap, char *), separator);
		}
		else
		{

			printf("%s", va_arg(ap, char *));
		}
	}
	putchar('\n');
	va_end(ap);
}