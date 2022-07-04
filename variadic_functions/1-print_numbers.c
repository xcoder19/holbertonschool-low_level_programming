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
			if (va_arg(ap, char *) == NULL)
			{
				printf("%s%s", "(nil)", separator);
			}
			else
			{
				printf("%s%s", va_arg(ap, char *), separator);
			}
		}
		else
		{
			if (va_arg(ap, char *) == NULL)
			{
				printf("%s%s", "(nil)", separator);
			}
			else
			{
				printf("%s", va_arg(ap, char *));
			}
		}
	}
	va_end(ap);
}