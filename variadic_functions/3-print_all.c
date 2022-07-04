#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: format
 */
void print_all(const char *const format, ...)
{
	char *str, c;
	int k;
	float j;

	unsigned long i = 0;

	va_list ap;

	va_start(ap, format);

	while (i < strlen(format))
	{

		if (format[i] == 'c')
		{
			c = va_arg(ap, int);

			printf("%c\n", c);
		}
		else if (format[i] == 'f')
		{
			j = va_arg(ap, double);
			printf("%f\n", j);
		}
		else if (format[i] == 's')
		{
			str = va_arg(ap, char *);
			printf("%s\n", str);
		}
		else if (format[i] == 'i')
		{
			k = va_arg(ap, int);
			printf("%d\n", k);
		}
		i++;
	}
	va_end(ap);
}
